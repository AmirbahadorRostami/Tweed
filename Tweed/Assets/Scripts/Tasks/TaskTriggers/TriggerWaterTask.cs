using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TriggerWaterTask : MonoBehaviour
{
    private GameObject Room;

    public GameObject taskButton;
    public bool isOn = false;
    Tutorials tutorials;


    private void Awake()
    {
        taskButton = GameObject.FindGameObjectWithTag("TaskButton");
        tutorials = GameObject.Find("Tutorials").GetComponent<Tutorials>();


        Transform t = transform;
        while (t.parent != null)
        {
            if (t.parent.tag == "Room")
            {
                Room = t.parent.gameObject;
            }
            t = t.parent.transform;
        }

    }
    private void OnTriggerEnter(Collider collision)
    {
        if (isOn)
        {
            tutorials.showTutorial("Water");
            taskButton.GetComponent<TaskButton>().setButtonType(TaskButton.buttonType.water);
            taskButton.GetComponent<TaskButton>().clearButton();
            taskButton.GetComponent<Button>().onClick.AddListener(delegate {OpenWaterTask(); });
            this.transform.GetChild(0).gameObject.SetActive(true);
        }
        

    }

    private void OnTriggerExit(Collider collision)
    {
        if (isOn)
        { 
            taskButton.GetComponent<TaskButton>().idleButton();
            this.transform.GetChild(0).gameObject.SetActive(false);

        }
    }

    public void OpenWaterTask()
    {
        StartCoroutine("waitAndOpen");
    }


    IEnumerator waitAndOpen()
    {
        yield return new WaitForSeconds(0.5f);

        Room.GetComponent<RoomManager>().startWateringTask();
        this.transform.GetChild(0).gameObject.SetActive(false);
        taskButton.GetComponent<TaskButton>().idleButton();
    }



}
