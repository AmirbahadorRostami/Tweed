using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcessingRoomManager : MonoBehaviour
{

    /// <summary>
    /// 
    ///
    /// when plant reaches ready state create an unprocessed bud object and pass it to this room
    /// 
    /// do a processing task 
    /// 
    /// 
    /// </summary>


    GameManager GM;
    GameObject Bins;
    SpriteRenderer bin_SP;


    public List<Bud> buds = new List<Bud>();
    public GameObject ProcessingTask;
    public bool inProcessingTask;

    public int numberOfProcessedBuds = 0;
    public Sprite Bin_Empty;
    public Sprite Bin_Full;


    private GameObject processingMachine;
    private GameObject Player;
    public int UnprocessedBudCount = 0;





    // Start is called before the first frame update
    void Awake()
    {

        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
        Bins = this.transform.Find("Bins").gameObject;
        Player = GameObject.FindGameObjectWithTag("Player");

        processingMachine = this.transform.GetChild(0).gameObject;

    }

    private void Start()
    {
        InvokeRepeating("UpdateRoom", 0.3f, 1f);
    }

    // Update is called once per frame
    void UpdateRoom()
    {
        UnprocessedBudCount = 0;
        foreach (Bud bud in buds)
        {
            if (bud.isProcessed == false)
            {
                UnprocessedBudCount++;
            }

        }

        if (UnprocessedBudCount > 0 && !inProcessingTask)
        {
            // init a processing task
            processingMachine.transform.GetChild(0).gameObject.SetActive(true);
            //processingMachine.transform.GetChild(0).GetComponent<ProcessingTrigger>().isOn = true;
        }
        else
        {
            processingMachine.transform.GetChild(0).gameObject.SetActive(false);
            //processingMachine.transform.GetChild(0).GetComponent<ProcessingTrigger>().isOn = false;

        }
    }

    public void updateBinSprite()
    {

        // check if there is any buds
        if (buds.Count == 0 || buds == null)
        {
            return;
        }

        if (buds.Count >= 1)
        {
            if (buds[0].isProcessed)
            {
                Bins.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite = Bin_Empty;
            }
            else
            {
                Bins.transform.GetChild(0).GetComponent<SpriteRenderer>().sprite = Bin_Full;
            }
        }

        if (buds.Count >= 2)
        {
            if (buds[1].isProcessed)
            {
                Bins.transform.GetChild(1).GetComponent<SpriteRenderer>().sprite = Bin_Empty;
            }
            else
            {
                Bins.transform.GetChild(1).GetComponent<SpriteRenderer>().sprite = Bin_Full;
            }
        }

        if (buds.Count >= 3)
        {
            if (buds[2].isProcessed)
            {
                Bins.transform.GetChild(2).GetComponent<SpriteRenderer>().sprite = Bin_Empty;
            }
            else
            {
                Bins.transform.GetChild(2).GetComponent<SpriteRenderer>().sprite = Bin_Full;
            }
        }

        if (buds.Count >= 4)
        {
            if (buds[3].isProcessed)
            {
                Bins.transform.GetChild(3).GetComponent<SpriteRenderer>().sprite = Bin_Empty;
            }
            else
            {
                Bins.transform.GetChild(3).GetComponent<SpriteRenderer>().sprite = Bin_Full;
            }

        }



    }


    public void startProcessingTask()
    {
        Player.GetComponentInChildren<PlayerMovement>().Active = false;

        ProcessingTask.SetActive(true);
        inProcessingTask = true;
    }


    public void Process()
    {

        Animator animator = processingMachine.GetComponent<Animator>();
        foreach(Bud bud in buds)
        {
            if (!bud.isProcessed)
            {
                animator.SetTrigger(bud.budType);

                bud.isProcessed = true;
                break;
            }
        }

        numberOfProcessedBuds++;

        if (numberOfProcessedBuds >= 4)
        {
            numberOfProcessedBuds = 0;
            return;
        }


    }


}

