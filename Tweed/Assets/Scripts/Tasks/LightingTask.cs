using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class LightingTask : MonoBehaviour
{

    private GameManager GM;
    private RoomManager RM;

    public GameObject results;
    public GameObject up;
    public GameObject down;
    public GameObject mid;

    public int goalSwitch;
    public bool switchSelected = false;

    public float Duration = 15f;

    public TaskType taskType = TaskType.light;

    private void Awake()
    {
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
    }



    public void SetRoom(RoomManager room)
    {
        RM = room;
        goalSwitch = Random.Range(0, 3);

        //Debug.Log(this.gameObject.name + " the goal result is set to: " + goalSwitch);
    }

    public float getDuration()
    {
        return Duration;
    }


    public void setCycleDuration()
    {

    }


    private void OnEnable()
    {
        GM.inTask = true;
        ResetSwitch();
        switchSelected = false;
        down.SetActive(false);
        results.SetActive(false);
    }

    private void ResetSwitch()
    {
        if(goalSwitch == 0 && up.activeSelf)
        {
            up.SetActive(false);
            mid.SetActive(true);
        }

        else if (goalSwitch == 1 && mid.activeSelf)
        {
            mid.SetActive(false);
            up.SetActive(true);
        }

        else if (goalSwitch == 2 && down.activeSelf)
        {
            down.SetActive(false);
            up.SetActive(true);
        }
    }

    public void switchHit()
    {
        if (!switchSelected)
        {
            if (up.activeSelf)
            {
                up.SetActive(false);
                mid.SetActive(true);
            }
            else if (mid.activeSelf)
            {
                mid.SetActive(false);
                down.SetActive(true);
            }
            else if (down.activeSelf)
            {
                down.SetActive(false);
                up.SetActive(true);
            }

            switch (goalSwitch)
            {
                case (0):
                    if (up.active)
                    {
                        results.SetActive(true);
                        Invoke("taskDone", 0.5f);
                        switchSelected = true;

                    }
                    break;


                case (1):
                    if (mid.active)
                    {
                        results.SetActive(true);
                        Invoke("taskDone", 0.5f);
                        switchSelected = true;

                    }

                    break;

                case (2):
                    if (down.active)
                    {
                        results.SetActive(true);
                        Invoke("taskDone", 0.5f);
                        switchSelected = true;

                    }
                    break;

            }
            //down.SetActive(true);
            //results.SetActive(true);
            //Invoke("taskDone", 0.5f);
        }

    }
    // runs 
    public void taskDone()
    {

        //Debug.Log("cycle set to end the task at: " + (GM.time + Duration) );
        GM.inTask = false;
        RM.startCycle(Duration, taskType);
        this.gameObject.SetActive(false);
        
    }

}

