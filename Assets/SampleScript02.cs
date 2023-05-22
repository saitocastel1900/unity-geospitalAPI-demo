using UnityEngine.UI;
using AR_Fukuoka;
using Google.XR.ARCoreExtensions;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class SampleScript02 : MonoBehaviour
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
    //表示オブジェクトの元データ
    [SerializeField] GameObject ContentPrefab;
    //実際に表示するオブジェクト
    GameObject displayObject;
    //アンカー作成に使用
    [SerializeField] ARAnchorManager AnchorManager;
}
