using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UiTaskList : MonoBehaviour //, IPointerClickHandler
{

    //public GameObject item;
    public GameManager GM;
    public GameObject item;

    private Dropdown dp;
    private ScrollRect SR;
    private Transform Content;
    private PlantManager[] plants;
    //private List<Dropdown.OptionData> taskList = new List<Dropdown.OptionData>();
    private List<string> taskList = new List<string>();

    /// <summary>
    /// 
    /// 
    /// get all the avalible tasks from plants:
    /// 
    ///      if a plants need flag is on create a iteam saying which room needs what
    ///      
    /// 
    /// 
    /// 
    /// 
    /// </summary>


    // clear the list of items

    // for each plant 
    // get their need boolean 
    // if they need something
    // make a new item on the list


    // Start is called before the first frame update
    void Start()
    {
        plants = GM.Plants;

        SR = this.GetComponent<ScrollRect>();
        Content = SR.content;

        //dp = this.GetComponent<Dropdown>();
        //dp.interactable = false;

        InvokeRepeating("updateList", 1.0f, 1f);
    }


    /*

        public void updateList()
        {

            dp.ClearOptions();
            taskList.Clear();

            foreach (PlantManager p in plants)
            {


                if (p.needLight && !p.inLightCycle)
                {
                    Dropdown.OptionData taskItem = new Dropdown.OptionData();
                    taskItem.text = "plant in room " + p.RM.name + " needs Light";
                    taskList.Add(taskItem);
                }

                if (p.needWater && !p.inWaterCycle)
                {
                    Dropdown.OptionData taskItem = new Dropdown.OptionData();
                    taskItem.text = "plant in room " + p.RM.name + " needs water";
                    taskList.Add(taskItem);
                }

                if (p.needNutrition && !p.inNuteriCycle)
                {
                    Dropdown.OptionData taskItem = new Dropdown.OptionData();
                    taskItem.text = "plant in room " + p.RM.name + " needs nutrition";
                    taskList.Add(taskItem);
                }
            }

            taskList.Reverse();

            Debug.Log("number of tasks: " + taskList.Count);


            for (int i = 0; i < 3; i++)
            {
                dp.options.Add(taskList[i]);
            }

            dp.RefreshShownValue();
            dp.Show();
        }
    */



    private void updateList()
    {

        // clear the list 
        taskList.Clear();


        foreach (Transform child in Content)
        {
            child.GetComponentInChildren<Text>().text = "";
        }

        // get availble tasks
        foreach (PlantManager p in plants)
        {
            if (p.needLight && !p.inLightCycle)
            {
                string taskItem = "plant in room " + p.RM.name + " needs Light";
                taskList.Add(taskItem);
            }

            if (p.needWater && !p.inWaterCycle)
            {
                string taskItem = "plant in room " + p.RM.name + " needs water";
                taskList.Add(taskItem);
            }

            if (p.needNutrition && !p.inNuteriCycle)
            {
                string taskItem = "plant in room " + p.RM.name + " needs nutrition";
                taskList.Add(taskItem);
            }
        }


        if(taskList.Count >= 3)
        {
            taskList.RemoveRange(0, 3);
        }

        taskList.Reverse();
        

        if (taskList.Count > 0)
        {
            // only take the top 3 items in thasklist and add them to the list

            for(int i = 0; i < taskList.Count; i++)
            {

                Transform item = Content.GetChild(i);
                item.GetComponentInChildren<Text>().text = taskList[i];

            }

        }
    }





}
