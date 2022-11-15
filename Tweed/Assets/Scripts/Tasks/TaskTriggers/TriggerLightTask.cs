using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TriggerLightTask : MonoBehaviour
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
        tutorials.showTutorial("Light");

        taskButton.GetComponent<TaskButton>().clearButton();
        taskButton.GetComponent<Button>().onClick.AddListener(delegate { OpenLightTask(); });
        taskButton.GetComponent<TaskButton>().setButtonType(TaskButton.buttonType.light);

        this.transform.GetChild(0).gameObject.SetActive(true);
        }
    }

    public void OnTriggerExit(Collider collision)
    {
        if (isOn)
        {
            taskButton.GetComponent<TaskButton>().idleButton();
            this.transform.GetChild(0).gameObject.SetActive(false);
        }
    }


    public void OpenLightTask()
    {

        StartCoroutine("waitAndOpen");
    }

    IEnumerator waitAndOpen()
    {
        yield return new WaitForSeconds(0.5f);

        Room.GetComponent<RoomManager>().startLightTask();

        taskButton.GetComponent<TaskButton>().idleButton();

        this.transform.GetChild(0).gameObject.SetActive(false);
    }
}
