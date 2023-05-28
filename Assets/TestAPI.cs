using Cysharp.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

public class TestAPI : MonoBehaviour
{
    /// <summary>
    /// 経度
    /// </summary>
    [SerializeField] private string _lon = "139.354813";

    /// <summary>
    /// 緯度
    /// </summary>
    [SerializeField] private string _lat = "35.566902";

    [SerializeField] private GameObject a;
    
    [SerializeField] private GameObject b;
    
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
        string url = $"http://vldb.gsi.go.jp/sokuchi/surveycalc/geoid/calcgh/cgi/geoidcalc.pl?outputType=json&latitude={_lat}&longitude={_lon}";
        var request = UnityWebRequest.Get(url);
        await request.SendWebRequest();
        GSIGeoidResponseModel result = JsonUtility.FromJson<GSIGeoidResponseModel>(request.downloadHandler.text);
        return result.OutputData.geoidHeight;
    }
    
    private async UniTask<string> GetAltitude()
    {   var url = $"https://cyberjapandata2.gsi.go.jp/general/dem/scripts/getelevation.php?lon={_lon}&lat={_lat}&outtype=JSON";
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