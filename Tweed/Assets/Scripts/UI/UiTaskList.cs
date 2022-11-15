using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Linq;

public class UiTaskList : MonoBehaviour 
{ 
    public GameManager GM;
    public Transform Content;
    public ProcessingRoomManager PRM;
    bool ProcessingAdded = false;
    private List<PlantManager> plants;
    private List<Task> taskList = new List<Task>();
    private List<string> stringList = new List<string>();
    Task processingTask = new Task();
    /// <summary>
    /// 
    /// 
    /// get all the avalible tasks from plants:
    /// 
    ///      if a plants need flag is on create a iteam saying which room needs what
    ///      
    /// 
    /// each task has 20 
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


        processingTask.plant = "ProcessingRoom";
        processingTask.task = TaskType.process;
        processingTask.initTime = 0;
        InvokeRepeating("checkProcessing", 0.3f, 1f);

        
    }

    void checkProcessing()
    {



        if (PRM.UnprocessedBudCount >= 1 && !ProcessingAdded)
        {
            
            addTask(processingTask);
            ProcessingAdded = true;

        }

        if(PRM.UnprocessedBudCount <= 0 && ProcessingAdded)
        {
            removeTask("ProcessingRoom", TaskType.process);
            ProcessingAdded = false;
        }
    }


    public void addTask(Task t)
    {
        taskList.Add(t);
        updateList();
    }


    public void removeTask(string plantname, TaskType type)
    {
        taskList.RemoveAll(Task => Task.plant == plantname && Task.task == type);
        updateList();
    }

    private void updateList()
    {

        // clear the list 
         stringList.Clear();


        foreach (Transform child in Content)
        {
            child.GetComponentInChildren<Text>().text = "";
        }


        taskList.Sort((a,b)=>a.initTime.CompareTo(b.initTime));

        // create string list based on task List
        foreach(Task t in taskList)
        {
            string taskItem;

            switch (t.task)
            {
                case (TaskType.light):
                    taskItem = t.plant + " needs Light";
                    stringList.Add(taskItem);
                    break;

                case (TaskType.nutrition):
                    taskItem = t.plant + " needs Nutrients";
                    stringList.Add(taskItem);
                    break;

                case (TaskType.water):
                    taskItem = t.plant + " needs Water";
                    stringList.Add(taskItem);
                    break;
                case (TaskType.trim):
                    taskItem = t.plant + " needs Trimming";
                    stringList.Add(taskItem);
                    break;
                case (TaskType.crop):
                    taskItem = t.plant + " needs Cropping";
                    stringList.Add(taskItem);
                    break;
                case (TaskType.process):
                    taskItem = "Bud needs Processing";
                    stringList.Add(taskItem);
                    break;
            }

        }



        if (stringList.Count > 0)
        {
            // only take the top 3 items in tasklist and add them to the list
            //int count = 0;
            for(int i = 0; i < Math.Min(3,stringList.Count); i++)
            {
                
                string [] temp = stringList[i].Split(' ');
                string output = "";

                Color PC = new Color();
                Color TC = new Color();


                if (temp[0].Equals("GG#4"))
                {
                    PC = new Vector4(0.82f, 1f, 0.80f,1f);
                }else if (temp[0].Equals("SkunkHaze"))
                {
                    PC = new Vector4(0.9803922f, 0.8745099f, 0.8941177f,1f);
                }else if (temp[0].Equals("ChemDawg"))
                {
                    PC = new Vector4(0.7176471f, 0.3568628f, 0.2941177f, 1f);
                }else if (temp[0].Equals("PowderedDonut"))
                {
                    PC = new Vector4(0.2862745f, 0.4745098f, 0.8509805f, 1f);
                }
                else if (temp[0].Equals("Bud"))
                {
                    PC = new Vector4(1f, 1f, 1f, 1f);
                }

                if (temp[2].Equals("Water"))
                {
                    TC = Color.blue;
                }else if (temp[2].Equals("Light"))
                {
                    TC = Color.yellow;
                }else if (temp[2].Equals("Nutrients"))
                {
                    TC = Color.red;
                }else if (temp[2].Equals("Trimming") || temp[2].Equals("Cropping"))
                {
                    TC = Color.green;
                }else if (temp[2].Equals("Processing"))
                {
                    TC = Color.cyan;
                }

                output = "<color=#" + ColorUtility.ToHtmlStringRGBA(PC) + ">" + temp[0].ToUpper() + "</color>" + " " + temp[1].ToUpper() + " " + "<color=#" + ColorUtility.ToHtmlStringRGBA(TC) + ">" + temp[2].ToUpper() + "</color>";

                Transform item = Content.GetChild(i);
                item.GetComponentInChildren<Text>().text = output;

            }

        }
    
    
    
    }





}

