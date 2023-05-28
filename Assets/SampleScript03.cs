using Google.XR.ARCoreExtensions;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class SampleScript03 : MonoBehaviour
{
    //緯度・経度
    [SerializeField]
    private double _latitude;
    
    [SerializeField]
    private double _longitude;
    
    [SerializeField]
    private double _geoid;

    [SerializeField] 
    private GameObject _contentObject;
    
    [SerializeField]
    private AREarthManager EarthManager;
    
    [SerializeField]
    private ARAnchorManager AnchorManager;

    private bool _isInitialized = false;

    // Update is called once per frame
    void Update()
    { 
        // isInitializedフラグを見て、初回1回だけ実行
        if (!_isInitialized && EarthManager.EarthTrackingState == TrackingState.Tracking)
        {
            var anchor = AnchorManager.AddAnchor(_latitude, _longitude, _geoid, Quaternion.identity);
            
            // このアンカーを親として設定する
            // そうすることで配下のオブジェクトは、設定した地理座標の位置に配置される。
            _contentObject.transform.parent = anchor.transform;
            _isInitialized = true;
        }
    }
}