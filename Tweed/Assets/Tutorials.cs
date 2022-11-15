using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutorials : MonoBehaviour
{

    GameManager GM;
    public bool nutritionShown = false;
    public bool waterShown = false;
    public bool lightShown = false;
    public bool trimShown = false;
    public bool dyingShown = false;
    public bool firstTaskShown = false;
    public bool tutorialSkipped = false;


    private void Awake()
    {
        GM = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    public void showTutorial(string name)
    {
        if (!tutorialSkipped)
        {
            if (name == "Nutrition" && !nutritionShown)
            {
                GM.HideUI();
                GM.inTransition = true;
                this.transform.Find("01-04").gameObject.SetActive(true);
                nutritionShown = true;
            }

            else if (name == "Water" && !waterShown)
            {
                GM.HideUI();
                GM.inTransition = true;
                this.transform.Find("01-05").gameObject.SetActive(true);
                waterShown = true;

            }

            else if (name == "Light" && !lightShown)
            {
                GM.HideUI();
                GM.inTransition = true;
                this.transform.Find("01-06").gameObject.SetActive(true);
                lightShown = true;

            }

            else if (name == "Trim" && !trimShown)
            {
                GM.HideUI();
                GM.inTransition = true;
                this.transform.Find("01-07").gameObject.SetActive(true);
                trimShown = true;

            }

            else if (name == "Dying" && !dyingShown)
            {
                GM.HideUI();
                GM.inTransition = true;
                this.transform.Find("01-08").gameObject.SetActive(true);
                dyingShown = true;

            }

            else if (name == "FirstTask" && !firstTaskShown)
            {
                GM.HideUI();
                GM.inTransition = true;
                this.transform.Find("01-09").gameObject.SetActive(true);
                firstTaskShown = true;
            }
        }
        
    }

    //bool if the skip is clicked in a task tutorial or in an intro tutorial
    public void TutorialSkipped(bool taskTutorial)
    {
        tutorialSkipped = true;
        if (taskTutorial)
        {
            GM.inTransition = false;
            GM.ShowUI();
        }
        else
        {
            GM.StartLevel();
        }

    }

    public void TaskTutorialShown()
    {
        if (firstTaskShown)
        {
            GM.inTransition = false;
            GM.ShowUI();
        }

        else
        {
            showTutorial("FirstTask");
        }

    }

    public void TutorialShown()
    {
        GM.inTransition = false;
        GM.ShowUI();
    }
}
