using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{

    Text timer;
    GameManager GM;
    float timeLeft = 0;

    // Start is called before the first frame update
    void Start()
    {
        timer = this.GetComponentInChildren<Text>();
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if(GM.level == 1)
        {
            timeLeft = 100 - GM.time;
        }else if(GM.level == 2)
        {
            timeLeft = 200 - GM.time;
        }
        else if(GM.level == 3)
        {
            timeLeft = 250 - GM.time;
        }

        float minutes = Mathf.Floor(timeLeft / 60);
        int seconds =  Mathf.RoundToInt(timeLeft % 60);

        if(minutes == 0 && seconds == 0)
        {
            timer.text = "0:00";
        }
        else
        {
            timer.text = minutes + ":" + seconds.ToString("00");
        }

    }
}
