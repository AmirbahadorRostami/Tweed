using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;



/// <summary>
/// responsible for communiction with ther server
/// </summary>
/// 

/*
 * 

{ 
    data {    
            {
                 uid: 'asdu84w',

                 practiceMode: true,
      
                 prizes: { 
                             'earbuds' : '2',
                             'jacket'  : '32',
                             'uberCode': '50'
                           }
                
        
             }
        },
    
    string status
}

*/

public class NetworkManager : MonoBehaviour
{




    private string init_URL_testing = "https://tweedfieldtrip.wpengine.com/api/init-game.php?init=1";
    private string GameDataCollection_URL_testing = "https://tweedfieldtrip.wpengine.com/api/finalize-game.php";


    // Data to be posted to the server at the end of the game Expirence


    private GameManager GM;

    private void Start()
    {
        GM = this.GetComponent<GameManager>();
    }


    public void GET()
    {
        StartCoroutine("GetData");
    }

    public void POST(gameData gd)
    {
        StartCoroutine("PostCrt", gd);
    }



    public void Post()
    {
        gameData gd = new gameData();
        gd.uid = "9710857146";
        gd.prize = "uber_code";

        string data = JsonUtility.ToJson(gd);
        StartCoroutine("Post", data);
    }

    IEnumerator GetData()
    {

        using (UnityWebRequest www = UnityWebRequest.Get(init_URL_testing))
        {

            www.SetRequestHeader("Accept", "application/json");

            yield return www.SendWebRequest();

            var r = www.downloadHandler.text;

            Debug.Log(r);

            // parse the text result sent as JSON object
            data result = JsonUtility.FromJson<data>(r);

            GM.practiceMode = result.practiceMode;

            GM.userData = new gameData();
            GM.userData.uid = result.uid;
            GM.prizePercentage = new List<Dictionary<string, float>>
            {
                new Dictionary<string, float>(),
                new Dictionary<string, float>(),
                new Dictionary<string, float>()
            };



            //Debug.Log(result.prizes[1].uber_code);

            for (int i = 0; i < result.prizes.Length; i++)
            {
                GM.prizePercentage[i].Add("try_again", result.prizes[i].try_again);
                GM.prizePercentage[i].Add("uber_code", result.prizes[i].uber_code);
                GM.prizePercentage[i].Add("sativa_kit", result.prizes[i].sativa_kit);
                GM.prizePercentage[i].Add("indica_kit", result.prizes[i].indica_kit);
                GM.prizePercentage[i].Add("hybrid_kit", result.prizes[i].hybrid_kit);
            }




        }

    }


    IEnumerator PostCrt(gameData userData)
    {

        // decunstruct the user data as form fields and post

        string f = JsonUtility.ToJson(userData);
         
        Debug.Log(f);

        using (UnityWebRequest www = UnityWebRequest.Post(GameDataCollection_URL_testing, f))
        {
            //www.SetRequestHeader("Accept", "application/json");
            www.SetRequestHeader("Content-Type", "application/json");
            //www.SetRequestHeader("Authorization", "Bearer " + "q9;a&AtPh#G-en;G~j5ry%3+dqndO@]k|r091jz,o[^U]P8r-&r-z?[#I%");
            //www.chunkedTransfer = false;

            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.Log(www.error);
                Debug.Log(www.downloadHandler.error);
                Debug.Log(www.downloadHandler.text);
                Debug.Log(www.downloadHandler.data);
            }
            else
            {
                Debug.Log(www.downloadHandler.text);
                Debug.Log("Post Request Completed!");
            }
        }
    }
}

[System.Serializable]
public class data
{
    public string uid;
    public bool practiceMode;
    public prizes[] prizes;
}

[System.Serializable]
public class prizes
{
    public float try_again;
    public float uber_code;
    public float sativa_kit;
    public float indica_kit;
    public float hybrid_kit;
}

[System.Serializable]
public class gameData
{
    public string uid;
    public string prize;
}

/*
{
    "uid":"198269170",
    "level":2,
    "prize" : "uber_code"
}
*/