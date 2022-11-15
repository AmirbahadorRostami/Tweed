using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NutritionTask : MonoBehaviour
{
    public int goalLever = 2;
    public GameObject results;
    private RoomManager RM;
    private GameManager GM;
    public float duration = 15f;
    private TaskType taskType = TaskType.nutrition;

    GameObject l1;
    Animator l1_anim;
    GameObject l3;
    Animator l2_anim;
    GameObject l2;
    Animator l3_anim;

    private void Awake()
    {
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
    }

    private void OnEnable()
    {
        results.SetActive(false);
        GM.inTask = true;
    }

    public void SetRoom(RoomManager room)
    {
        RM = room;

        goalLever = Random.Range(1, 4);
        //Debug.Log(this.gameObject.name + " the goal result is set to: " + goalLever);
    }

    void Start()
    {

        l1 = this.transform.Find("Lever1").gameObject;
        l1_anim = l1.GetComponent<Animator>();

        l2 = this.transform.Find("Lever2").gameObject;
        l2_anim = l2.GetComponent<Animator>();

        l3 = this.transform.Find("Lever3").gameObject;
        l3_anim = l3.GetComponent<Animator>();

    }

    public void lever1()
    {
        
        if (l1_anim.GetBool("Pull")==false)
        {
            l1_anim.SetBool("Pull", true);
            //Debug.Log("Lever Pulled");
        }
        else
        {
            l1_anim.SetBool("Pull", false);
        }

        if (l2_anim.GetBool("Pull") == true)
        {
            l2_anim.SetBool("Pull", false);
            //Debug.Log("Lever Pulled");
        }


        if (l3_anim.GetBool("Pull") == true)
        {
            l3_anim.SetBool("Pull", false);
            //Debug.Log("Lever Pulled");
        }



        checkWin();


    }

    public void lever2()
    {
        if (l2_anim.GetBool("Pull") == false)
        {
            l2_anim.SetBool("Pull", true);
            //Debug.Log("Lever Pulled");
        }
        else
        {
            l2_anim.SetBool("Pull", false);
        }



        if (l1_anim.GetBool("Pull") == true)
        {
            l1_anim.SetBool("Pull", false);
            //Debug.Log("Lever Pulled");
        }


        if (l3_anim.GetBool("Pull") == true)
        {
            l3_anim.SetBool("Pull", false);
            //Debug.Log("Lever Pulled");
        }

        checkWin();
    }

    public void lever3()
    {
        if (l3_anim.GetBool("Pull") == false)
        {
            l3_anim.SetBool("Pull", true);
            //Debug.Log("Lever Pulled");
        }
        else
        {
            l3_anim.SetBool("Pull", false);
        }



        if (l2_anim.GetBool("Pull") == true)
        {
            l2_anim.SetBool("Pull", false);
            //Debug.Log("Lever Pulled");
        }


        if (l1_anim.GetBool("Pull") == true)
        {
            l1_anim.SetBool("Pull", false);
            //Debug.Log("Lever Pulled");
        }

        checkWin();
    }

    private void checkWin()
    {

        if (goalLever == 1)
        {
            if (l1_anim.GetBool("Pull") == true && l2_anim.GetBool("Pull") == false && l3_anim.GetBool("Pull") == false)
            {
                results.SetActive(true);
                Invoke("taskDone", 0.5f);
            }
            else
            {
                results.SetActive(false);
            }
        }


        else if (goalLever == 2)
        {
            if (l1_anim.GetBool("Pull") == false && l2_anim.GetBool("Pull") == true && l3_anim.GetBool("Pull") == false)
            {
                results.SetActive(true);
                Invoke("taskDone", 0.5f);
            }
            else
            {
                results.SetActive(false);
            }
        }


        else if (goalLever == 3)
        {
            if (l1_anim.GetBool("Pull") == false && l2_anim.GetBool("Pull") == false && l3_anim.GetBool("Pull") == true)
            {
                results.SetActive(true);
                Invoke("taskDone", 0.5f);
            }
            else
            {
                results.SetActive(false);
            }
        }
    }

    public void taskDone()
    {
        GM.inTask = false;
        RM.startCycle(duration, taskType);
        //Debug.Log("Nutrition task is done");
        this.gameObject.SetActive(false);


    }



    
}
