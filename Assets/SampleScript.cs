using UnityEngine;
using UnityEngine.UI;
//ARFoundationとARCoreExtensions関連を使用する
using Google.XR.ARCoreExtensions;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
namespace AR_Fukuoka
{
    public class SampleScript : MonoBehaviour
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

        public double Latitude;
        public double Longitude;

        public float Altitude;

        public float Heading;
        
        public GameObject ContentPrefab;

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
                    ARGeospatialAnchor anchor = _anchorManager.AddAnchor(Latitude, Longitude, Altitude, quaternion);

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
                               $"{status}\n";
        }
    }
}

























