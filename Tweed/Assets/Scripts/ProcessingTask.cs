using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcessingTask : MonoBehaviour
{

    public ProcessingRoomManager PRM;
    private GameObject Player;

    private Bud budToProcess { get; set; }

    private void Start()
    {
        Player = GameObject.FindGameObjectWithTag("Player");
    }


    public void BudTapped()
    {
        Invoke("TaskDone", 1f);
    }


    private void TaskDone()
    {

        this.gameObject.SetActive(false);
        PRM.Process();
        Player.GetComponent<PlayerMovement>().Active = true;
    }


    // Update is called once per frame

}
