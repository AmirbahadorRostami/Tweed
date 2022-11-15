using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Wheel : MonoBehaviour
{
    public float spinned = 0;
    public float minSpinSpeed = 2f;
    public float speedMultiplier = 1f;
    public GameObject wheel;
    public GameObject wonScreen;
    float spinSpeed = 0;
    float degree = 0;
    //chance of different elements, 0 is tshirts, 1 is earpods
    public List<string> prizes;
    public List<float> degrees;
    public bool spinIsOn = false;


    string prize;

    GameManager GM;

    private void Start()
    {
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
    }

    public void Spin()
    {
        prize = prizeToWin(GM.prizePercentage[GM.level - 1]);
        GM.userData.prize = prize;

        Debug.Log("Prize percentage level: " + (GM.level - 1));
        SpinToThePrize(prize);
        GM.QuitGame();
    }


    // Update is called once per frame
    void Update()
    {
        if (spinIsOn)
        {
            KeepSpinning();
        }
    }

    public string prizeToWin(Dictionary<string, float> PP)
    {
        float uberCodeChance = 0f;
        float sativaKitChance = 0f;
        float indicaKitChance = 0f;
        float hybridKitChance = 0f;
        float tryAgainChance = 0f;

        string result = "";

        foreach (var i in PP)
        {
            if(i.Key == "uber_code")
            {
                uberCodeChance = i.Value;
            }
            else if (i.Key == "sativa_kit")
            {
                sativaKitChance = i.Value;
            }
            else if (i.Key == "indica_kit")
            {
                indicaKitChance = i.Value;
            }
            else if (i.Key == "hybrid_kit")
            {
                hybridKitChance = i.Value;
            }else if(i.Key == "try_again")
            {
                tryAgainChance = i.Value;
            }

        }

        float totalChance = uberCodeChance + sativaKitChance +
            indicaKitChance + hybridKitChance + tryAgainChance;

        float prizeChance = Random.Range(0f, totalChance);


        if(prizeChance < uberCodeChance)
        {
            result = "uber_code";
        }else if(prizeChance > uberCodeChance && prizeChance < uberCodeChance + sativaKitChance)
        {
            result = "sativa_kit";
        }else if(prizeChance > uberCodeChance + sativaKitChance && prizeChance < uberCodeChance + sativaKitChance + indicaKitChance)
        {
            result = "indica_kit";
        }else if( (prizeChance > uberCodeChance + sativaKitChance + indicaKitChance ) && (prizeChance < uberCodeChance + sativaKitChance + indicaKitChance + hybridKitChance))
        {
            result = "hybrid_kit";
        }else if(prizeChance > uberCodeChance + sativaKitChance + indicaKitChance + hybridKitChance )
        {
            result = "try_again";
        }

        return result;
    } 


    public void SpinToThePrize(string prizeName)
    {

        for (int i = 0; i < prizes.Count; i++)
        {
            if (prizes[i] == prizeName)
            {
                int turnCount = Random.Range(1, 4);
                degree = degrees[i] + turnCount * 360;
                spinIsOn = true;
                KeepSpinning();
            }
        }
    }

    void KeepSpinning()
    {

        spinSpeed = minSpinSpeed + (degree - spinned) / degree * minSpinSpeed * speedMultiplier;

        if (spinned >= degree -spinSpeed)
        {
            wheel.transform.rotation = Quaternion.Euler(0.0f, 0.0f, degree);

            spinSpeed = 0;
            spinIsOn = false;
            wonScreen.GetComponent<Animator>().SetTrigger("Won");

        }

        else
        {
            wheel.transform.RotateAround(wheel.transform.position, Vector3.forward, spinSpeed);

            spinned += spinSpeed;
        }

    }
}
