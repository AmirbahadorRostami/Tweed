using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TriggerCropTask : MonoBehaviour
{

    private GameObject Room;
    public GameObject taskButton;
    public enum cropOrTrim
    {
        crop,
        trim
    }
    public cropOrTrim cot;

    public bool isOn = false;
    Tutorials tutorials;


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
    // Start is called before the first frame update
    void Start()
    {
        
    }




    private void OnTriggerEnter(Collider collision)
    {
        
            if(cot == cropOrTrim.crop)
            {


                taskButton.GetComponent<TaskButton>().setButtonType(TaskButton.buttonType.crop);
                //taskButton.GetComponentInChildren<Text>().text = "Crop";
                taskButton.GetComponent<TaskButton>().clearButton();
                taskButton.GetComponent<Button>().onClick.AddListener(delegate { OpenCropTask(); });

                //to show highlight
                transform.parent.GetComponent<PlantManager>().enableSelected();
            }

            else
            {
            tutorials.showTutorial("Trim");

            taskButton.GetComponent<TaskButton>().setButtonType(TaskButton.buttonType.trim);
                //taskButton.GetComponentInChildren<Text>().text = "Trim";
                taskButton.GetComponent<TaskButton>().clearButton();
                taskButton.GetComponent<Button>().onClick.AddListener(delegate { OpenTrimTask(); });

                //to show highlight
                transform.parent.GetComponent<PlantManager>().enableSelected();
            }

        

    }

    private void OnDisable()
    {
        taskButton.GetComponent<TaskButton>().idleButton();
        transform.parent.GetComponent<PlantManager>().disableSelected();
    }

    private void OnTriggerExit(Collider other)
    {
            taskButton.GetComponent<TaskButton>().idleButton();
            transform.parent.GetComponent<PlantManager>().disableSelected();
        
    }

    public void OpenTrimTask()
    {

        StartCoroutine("waitAndOpenTrimTask");

    }

    public void OpenCropTask()
    {

        StartCoroutine("waitAndOpenCropTask");

    }

    IEnumerator waitAndOpenCropTask()
    {
        yield return new WaitForSeconds(0.5f);

        Room.GetComponent<RoomManager>().startCropTask();

        taskButton.GetComponent<TaskButton>().idleButton();
        transform.parent.GetComponent<PlantManager>().disableSelected();
        this.gameObject.SetActive(false);
    }

    IEnumerator waitAndOpenTrimTask()
    {
        yield return new WaitForSeconds(0.5f);

        Room.GetComponent<RoomManager>().startTrimTask();

        taskButton.GetComponent<TaskButton>().idleButton();
        transform.parent.GetComponent<PlantManager>().disableSelected();
        this.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
