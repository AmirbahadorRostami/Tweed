using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProcessingMachine : MonoBehaviour
{
    private ProcessingRoomManager PRM;

    // Start is called before the first frame update
    void Start()
    {
        PRM = this.GetComponentInParent<ProcessingRoomManager>();
    }

    public void ProcessEnded()
    {


        PRM.inProcessingTask = false;

        //update the bins 
        PRM.updateBinSprite();
    }



}
