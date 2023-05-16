using System;
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

        //位置。方位の許容精度
        public float HeaddingThredshold = 25f;

        public float HorizontalThreadshold = 20f;

        public float Latitude;

        public float Longitude;

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

            if (pose.OrientationYawAccuracy>HeaddingThredshold || pose.HorizontalAccuracy > HorizontalThreadshold)
            {
                status = "低精度：周辺を見回してください";
            }
            else
            {
                Altitude = (float)pose.Altitude - 1.5f;
                Quaternion quaternion = Quaternion.AngleAxis(180f - (float) Heading, Vector3.up);
                ARGeospatialAnchor anchor = _anchorManager.AddAnchor(Latitude, Longitude, Altitude, quaternion);

                if (anchor != null)
                {
                    _displayObject = Instantiate(ContentPrefab, anchor.transform);
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

























