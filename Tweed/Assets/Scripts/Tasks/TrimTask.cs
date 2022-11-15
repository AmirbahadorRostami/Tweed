using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrimTask : MonoBehaviour
{
    public int budCount = 0;

    private RoomManager RM;


    public void budTapped()
    {
        budCount++;
        if (budCount >= 3)  
        {
            taskDone();


        }
    }
    // Start is called before the first frame update
    void OnEnable()
    {
        //Debug.Log("I'm enabled");
        budCount = 0;
        foreach (Transform child in this.transform)
        {
            if (child.tag == "BudParent")
            {
                child.gameObject.SetActive(true);
            }
        }
    }

    private void Start()
    {
        foreach (Transform child in this.transform)
        {
            if (child.tag == "BudParent")
            {
                child.gameObject.SetActive(true);
            }
        }
    }

    private void taskDone()
    {
        RM.plantTrimmed();
        this.gameObject.SetActive(false);
    }

    public void SetRoom(RoomManager room)
    {
        RM = room;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
