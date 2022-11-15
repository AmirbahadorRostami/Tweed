using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ProcessingTrigger : MonoBehaviour
{
   

    public GameObject taskButton;
    public GameObject machine;
    private GameObject PRM;
    public bool isOn = false;
    

    private void Awake()
    {
        taskButton = GameObject.Find("TaskButton");
        PRM = GameObject.FindGameObjectWithTag("processingRoom");
        
    }

    private void OnDisable()
    {
        this.transform.GetChild(0).gameObject.SetActive(false);
    }

    private void OnTriggerEnter(Collider collision)
    {
       
            taskButton.GetComponent<TaskButton>().setButtonType(TaskButton.buttonType.process);
            taskButton.GetComponent<TaskButton>().clearButton();
            taskButton.GetComponent<Button>().onClick.AddListener(delegate { openProcessingTask(); });
            this.transform.GetChild(0).gameObject.SetActive(true);
        
    }

    private void OnTriggerExit(Collider collision)
    {
            taskButton.GetComponent<TaskButton>().idleButton();

            this.transform.GetChild(0).gameObject.SetActive(false);
        
    }

    public void openProcessingTask()
    {
        StartCoroutine("waitAndOpen");
    }

    IEnumerator waitAndOpen()
    {
        yield return new WaitForSeconds(0.5f);

        PRM.GetComponent<ProcessingRoomManager>().startProcessingTask();

        taskButton.GetComponent<TaskButton>().idleButton();

        this.transform.GetChild(0).gameObject.SetActive(false);
    }


}
