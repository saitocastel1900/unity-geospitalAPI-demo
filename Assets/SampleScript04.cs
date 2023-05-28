//座標オブジェクト置きとタップ置きの二刀流
using System;
using System.Collections;
using System.Collections.Generic;
using  UnityEngine.UI;
using AR_Fukuoka;
using Cysharp.Threading.Tasks;
using Google.XR.ARCoreExtensions;
using Google.XR.ARCoreExtensions.Samples.Geospatial;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Networking;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class SampleScript04 : MonoBehaviour
{
    //GeospatialAPIを用いたトラッキング情報
    [SerializeField] AREarthManager EarthManager;

    //GeospatialAPIとARCoreの初期化と結果
    [SerializeField] VpsInitializer Initializer;

    //結果表示用のUI 
    [SerializeField] Text OutputText;

    //方位の許容精度(値の変更はInspectorから)
    [SerializeField] double HeadingThreshold = 25;

    //水平位置の許容精度(値の変更はInspectorから)
    [SerializeField] double HorizontalThreshold = 20;

    [SerializeField] ARRaycastManager RaycastManager;

    //緯度・経度
    public double Latitude;
    public double Longitude;

    //高度[m]
    public float Altitude;

    //方位[°]
    public float Heading;
    
    //表示オブジェクトの元データ
    [SerializeField] GameObject ContentPrefab;

    //実際に表示するオブジェクト
    GameObject displayObject;

    //アンカー作成に使用
    [SerializeField] ARAnchorManager AnchorManager;

    string anchorKey = "earth_data";
    string positionKey = "local_position";

    private string _geoid;
    private string _altitude;
    
    bool initialized = false;

    private async void Start()
    {
        _geoid = await GetGeoid();
        _altitude =await GetAltitude();
        
        Debug.Log(_geoid);
        Debug.Log(_altitude);
    }

    private void Update()
    {
        string status = "";
        if (!Initializer.IsReady || EarthManager.EarthTrackingState != TrackingState.Tracking)
        {
            OutputText.text = "初期化できていません";
            return;
        }
        
        GeospatialPose pose = EarthManager.CameraGeospatialPose;
        if (pose.OrientationYawAccuracy > HeadingThreshold || pose.HorizontalAccuracy > HorizontalThreshold)
        {
            status = "低精度：周辺を見回してください";
        }
        else
        {
            status = "高精度：High Tracking Accuracy";

            if (displayObject == null)
            {
                //スマホの高さ-1.5m
                Altitude = (float) pose.Altitude - 1.5f;

                //角度の補正
                Quaternion quaternion = Quaternion.AngleAxis(180f - (float) Heading, Vector3.up);

                //指定した位置のアンカーを作成
                ARGeospatialAnchor anchor = AnchorManager.AddAnchor(Latitude, Longitude, Altitude, quaternion);

                if (anchor != null)
                {
                    displayObject = Instantiate(ContentPrefab, anchor.transform);
                }
            }

            if (!initialized)
            {
                initialized = true;
                StartCoroutine(LoadAndCreateObject());
            }
            else
            {
                TapToPlaceObject(pose);
            }
        }
        
        //結果を表示
        ShowTrackingInfo(status,pose);
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
    
    private void ShowTrackingInfo(string status,GeospatialPose pose)
    {
        OutputText.text = $"緯度・経度:{pose.Latitude}+{pose.Longitude}\n" +
                           $"水平方向の精度:{pose.HorizontalAccuracy}\n" +
                           $"高度:{pose.Altitude}\n" +
                           $"高度の精度:{pose.VerticalAccuracy}\n" +
                           $"方位:{pose.EunRotation}\n"+
                           $":方位の精度{pose.OrientationYawAccuracy}\n"+
                           $"標高：{_altitude}\n"+
                           $"ジオイド高：{_geoid}\n"+
                           $"{status}\n";
    }
    
    //オブジェクトをタッチした場所に置く
    private void TapToPlaceObject(GeospatialPose pose)
    {
        //入力があるか（UI上での入力は無視される）
        if (EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
        {
            return;
        }

        //タップされたか
        if (Input.touchCount == 0 || Input.GetTouch(0).phase != TouchPhase.Ended || displayObject == null)
        {
            return;
        }

        List<ARRaycastHit> hits = new List<ARRaycastHit>();
        
        //平面検出した平面をレイキャスト出来ていたら、その位置情報をにアンカーを作成する
        if (RaycastManager.Raycast(Input.GetTouch(0).position, hits, TrackableType.PlaneWithinPolygon))
        {
            StartCoroutine(AnchoringAndSave(hits[0], displayObject.transform, pose));
        }
    }

    IEnumerator AnchoringAndSave(ARRaycastHit hit, Transform displayObjTransform, GeospatialPose pose)
    {
        //置く場所はレイキャストで得た位置情報を設定
        displayObjTransform.position = hit.pose.position;
        
        //角度を補正（北向を基準に）
        Quaternion quaternion = pose.EunRotation;

        //アンカー生成
        ARGeospatialAnchor anchor = AnchorManager.AddAnchor(pose.Latitude, pose.Longitude, pose.Altitude, quaternion);
        
        //アンカーを生成出来たら、、
        if (anchor != null)
        {
            //アンカー作成時は安定しないので少し待つ
            yield return new WaitForSeconds(1.0f);
            
            //アンカーを新しいやつと古いやつを入れ替える
            Transform prevAnchor = displayObjTransform.parent;
            displayObjTransform.SetParent(anchor.transform);
            
            //古いアンカーは削除する
            if (prevAnchor != null)
            {
                Destroy(prevAnchor.gameObject);
            }

            //データを保存する
            //異常終了したらデータは書き込まれない(Application.Quit()でゲームを終了しないなど)
            GeospatialAnchorHistory history = new GeospatialAnchorHistory(DateTime.Now, pose.Latitude, pose.Longitude, pose.Altitude, AnchorType.Terrain, pose.EunRotation);
            PlayerPrefs.SetString(positionKey, JsonUtility.ToJson(displayObjTransform.localPosition));
            PlayerPrefs.SetString(anchorKey, JsonUtility.ToJson(history));
            PlayerPrefs.Save();
        }
    }

    //オブジェクトを生成
    IEnumerator LoadAndCreateObject()
    {
        //オブジェクト生成
        displayObject = Instantiate(ContentPrefab);

        //4m前方にオブジェクトを置く
        displayObject.transform.position = new Vector3(0, 0, 4);
        displayObject.transform.rotation = Quaternion.identity;

        //前回のデータが存在していた場合
        if (PlayerPrefs.HasKey(anchorKey) && PlayerPrefs.HasKey(positionKey))
        {
            //PlayerPrefsで保存されていたデータをGeospatialAnchorHistoryオブジェクトに変換
            GeospatialAnchorHistory history =
                JsonUtility.FromJson<GeospatialAnchorHistory>(PlayerPrefs.GetString(anchorKey));

            //角度の補正（北向き）
            //Quaternion.AngleAxis(180f - (float)history.Heading, Vector3.up);
            Quaternion quaternion = history.EunRotation;

            //アンカーの生成
            ARGeospatialAnchor anchor =
                AnchorManager.AddAnchor(history.Latitude, history.Longitude, history.Altitude, quaternion);

            //アンカーが生成出来たら、アンカーの生成場所を過去のデータの位置情報に設定
            if (anchor != null)
            {
                //アンカー作成時は安定しないので少し待つ
                yield return new WaitForSeconds(1.0f);
                displayObject.transform.SetParent(anchor.transform);
                displayObject.transform.localPosition =
                    JsonUtility.FromJson<Vector3>(PlayerPrefs.GetString(positionKey));
            }
        }
    }
}
