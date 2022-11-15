using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TriggerNutriTask : MonoBehaviour
{
    private GameObject Room;

    public GameObject taskButton;

    Tutorials tutorials;

    public bool isOn = false;

    private void Awake()
    {
        tutorials = GameObject.Find("Tutorials").GetComponent<Tutorials>();
        taskButton = GameObject.FindGameObjectWithTag("TaskButton");
        
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

            tutorials.showTutorial("Nutrition");
            taskButton.GetComponent<TaskButton>().clearButton();     
            taskButton.GetComponent<Button>().onClick.AddListener(delegate { OpenNutritionTask(); });
            taskButton.GetComponent<TaskButton>().setButtonType(TaskButton.buttonType.nutrient);

            this.transform.GetChild(0).gameObject.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider collision)
    {
        if (isOn)
        {
            taskButton.GetComponent<TaskButton>().idleButton();
            //taskButton.SetActive(false);

            this.transform.GetChild(0).gameObject.SetActive(false);
        }
    }


    public void OpenNutritionTask()
    {
        StartCoroutine("waitAndOpen");
    }

    IEnumerator waitAndOpen()
    {
        yield return new WaitForSeconds(0.5f);

        Room.GetComponent<RoomManager>().startNutriTask();

        taskButton.GetComponent<TaskButton>().idleButton();

        this.transform.GetChild(0).gameObject.SetActive(false);
    }

}
