//大学にオブジェクトを置く

using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
//ARFoundationとARCoreExtensions関連を使用する
using Google.XR.ARCoreExtensions;
using UnityEngine.Networking;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
namespace AR_Fukuoka
{
    public class SampleScript01 : MonoBehaviour
    {
        [SerializeField]
        private ARAnchorManager _anchorManager;
        
        [SerializeField]
        private AREarthManager _earthManager;
        
        [SerializeField]
        private VpsInitializer _initializer;

        [SerializeField]
        private Text _outputText;

        //方位の許容精度
        public float HeaddingThredshold = 25f;

        //水平位置の許容精度
        public float HorizontalThreadshold = 20f;
            
        //緯度・経度
        public double Latitude;
        public double Longitude;

        //高度[m]
        public float Altitude;

        //方位[°]
        public float Heading;
        
        //表示するオブジェクト
        public GameObject ContentPrefab;

        //表示するオブジェクトのキャッシュ
        private GameObject _displayObject;

        // Update is called once per frame
        void Update()
        {
            string status = "";

            if (!_initializer.IsReady || _earthManager.EarthTrackingState!=TrackingState.Tracking)
            {
                _outputText.text = "初期化できていません";
                return;
            }

            //トラッキング結果を取得
            GeospatialPose pose = _earthManager.CameraGeospatialPose;

            //トラッキング精度がthresholdより悪い場合
            if (pose.OrientationYawAccuracy>HeaddingThredshold || pose.HorizontalAccuracy > HorizontalThreadshold)
            {
                status = "低精度：周辺を見回してください";
            }
            else
            {
                if (_displayObject == null)
                {
                    //スマホの高さ-1.5m
                    Altitude = (float) pose.Altitude - 1.5f;

                    //角度の補正
                    Quaternion quaternion = Quaternion.AngleAxis(180f - (float) Heading, Vector3.up);

                    //指定した位置のアンカーを作成
                     //ARGeospatialAnchor anchor = _anchorManager.AddAnchor(Latitude, Longitude, Altitude, quaternion);
                    ARGeospatialAnchor anchor = _anchorManager.ResolveAnchorOnTerrain(Latitude, Longitude, 1, quaternion);
                    
                    if (anchor != null)
                    {
                        _displayObject = Instantiate(ContentPrefab, anchor.transform);
                    }
                }

                status = "高精度：High Tracking Accuracy";
            }
            
            //結果を表示
            ShowTrackingInfo(status,pose);
        }

        private void ShowTrackingInfo(string status,GeospatialPose pose)
        {
            _outputText.text = $"緯度・経度:{pose.Latitude}+{pose.Longitude}\n" +
                               $"水平方向の精度:{pose.HorizontalAccuracy}\n" +
                               $"高度:{pose.Altitude}\n" +
                               $"高度の精度:{pose.VerticalAccuracy}\n" +
                               $"方位:{pose.EunRotation}\n"+
                               $":方位の精度{pose.OrientationYawAccuracy}\n"+
                               $"標高：{_geoid}\n"+
                               $"ジオイド高：{_altitude}\n"+
                               $"{status}\n";
        }
        
        private string _geoid;
        
        private string _altitude;
    
        private async void Start()
        {
            _geoid = await GetGeoid();
            _altitude =await GetAltitude();
        
            Debug.Log(_geoid);
            Debug.Log(_altitude);
        }

        private async UniTask<string> GetGeoid()
        {
            string url = $"http://vldb.gsi.go.jp/sokuchi/surveycalc/geoid/calcgh/cgi/geoidcalc.pl?outputType=json&latitude={Latitude}&longitude={Longitude}";
            var request = UnityWebRequest.Get(url);
            await request.SendWebRequest();
            GSIGeoidResponseModel result = JsonUtility.FromJson<GSIGeoidResponseModel>(request.downloadHandler.text);
            return result.OutputData.geoidHeight;
        }
    
        private async UniTask<string> GetAltitude()
        {   var url = $"https://cyberjapandata2.gsi.go.jp/general/dem/scripts/getelevation.php?lon={Longitude}&lat={Latitude}&outtype=JSON";
            var request = UnityWebRequest.Get(url);
            await request.SendWebRequest();
            GSIAltitudeResponseModel result = JsonUtility.FromJson<GSIAltitudeResponseModel>(request.downloadHandler.text);
            return result.elevation;
        }

        [System.Serializable]
        public  class GSIAltitudeResponseModel
        {
            public string elevation;
            public string hsrc;
        }
    
        [System.Serializable]
        public  class GSIGeoidResponseModel
        {
            public Output OutputData;
        
            [System.Serializable]
            public  class Output
            {
                public string latitude;
                public string longitude;
                public string geoidHeight;
            }
        }
    }
}

























