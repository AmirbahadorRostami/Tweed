using System.Collections;
using System.Collections.Generic;
using UnityEngine;



/// <summary>
/// gets the state of each plant and trigger tasks accrodingly
/// 
/// 
/// 
///  go throgh the list of plants
///  check if any of the boolean flags are on
///  if on, a task is should be initlized for execution.
///  what is a task?
///  a mini game prefab
///  runs it's init function on instantiton 
/// 
/// 
/// 
/// keep track of how many task are done for this room
/// 
/// talk to send metrics to game manager
/// 
/// 
/// 
/// </summary>


public class RoomManager : MonoBehaviour
{

    public GameObject Player;
    // room assets
    public GameObject lightTask;
    public GameObject waterTask;
    public GameObject nutritionTask;
    public GameObject cropTask;

    public GameObject trimTask;
    public float alertDelayTime = 25f;
    private bool lightAlertWaiting = false;
    private bool nutritionAlertWaiting = false;
    private bool waterAlertWaiting = false;


    //public GameObject Plant;
    public GameObject wateringMaschine;
    public GameObject lightMaschine;
    public GameObject nutritionMaschine;
    public PlantManager plant { get; set; }

    private Animator waterAnimator;
    private Animator nutriAnimator;
    private Animator lightAnimator;


    private GameManager GM;
    private UiTaskList taskList;

    
    private GameObject sprinkler;
    private GameObject hose;
    private GameObject lighter;
    //private GameObject growLight;
   
    public bool inlightTask = false;
    public bool inWaterTask = false;
    public bool inNutritionTask = false;
    public bool inCropTask = false;
    public bool inTrimTask = false;

    public int numberOfTasksDone = 0;
    public int numberOfBuds = 0;


    public bool lightTaskInitlized = false;
    public bool waterTaskInitlized = false;
    public bool nutrientTaskInitlized = false;
    public bool trimTaskInitlized = false;
    public bool croppTaskInitlized = false;

    // Start is called before the first frame update
    void Awake()
    {
        Player = GameObject.FindGameObjectWithTag("Player");
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
        taskList = GameObject.FindGameObjectWithTag("TaskList").GetComponent<UiTaskList>();
        plant = this.GetComponentInChildren<PlantManager>();

        
        waterAnimator = wateringMaschine.GetComponentInChildren<Animator>();
        nutriAnimator = nutritionMaschine.GetComponentInChildren<Animator>();
        lightAnimator = lightMaschine.GetComponentInChildren<Animator>();
        
        
        sprinkler = this.transform.Find("Sprinkler").gameObject;
        hose = this.transform.Find("Hose").gameObject;
        lighter = this.transform.Find("Lighter").gameObject;
       
    }

    private void Start()
    {
        InvokeRepeating("UpdateRoom", 0.3f, 1f);
    }

    //Create a gap for alerts

    private void LightAlert()
    {
        lightAlertWaiting = false;
        if(plant.needLight && !plant.inLightCycle && !inlightTask)
            lightAnimator.SetBool("Alert", true);
    }

    private void NutritionAlert()
    {
        nutritionAlertWaiting = false;
        if (plant.needNutrition && !plant.inNuteriCycle && !inNutritionTask)
            nutriAnimator.SetBool("Alert", true);
    }

    private void WaterAlert()
    {
        waterAlertWaiting = false;
        if (plant.needWater && !plant.inWaterCycle && !inWaterTask)
            waterAnimator.SetBool("Alert", true);
    }

    //check if the plant needs anything:

    private void UpdateRoom()
    {
        // room should check plant 
        // if the plant needs light and not currenlty in a light cycle and a task is not initlized
        // initlize task 

        if (plant.needLight && !plant.inLightCycle && !inlightTask)
        {

            // request task to be done
            // light task initilized
            if (!lightTaskInitlized)
            {
                Task lightTask = new Task();
                lightTask.plant = this.plant.name;
                lightTask.task = TaskType.light;
                lightTask.initTime = GM.time;
                taskList.addTask(lightTask);

                lightTaskInitlized = true;
            }

            
            //lightMaschine.transform.GetChild(0).gameObject.SetActive(true);
            lightMaschine.transform.GetChild(0).GetComponent<TriggerLightTask>().isOn = true;

            if (!lightAlertWaiting)
            {
                LightAlert();
            }
            // when task done 
            // start cycle for set amount of time

        }
        else
        {
            lightMaschine.transform.GetChild(0).GetComponent<TriggerLightTask>().isOn = false;
            //lightMaschine.transform.GetChild(0).gameObject.SetActive(false);
        }


        if (plant.needWater && !plant.inWaterCycle && !inWaterTask)
        {
            //water task initilized
            if (!waterTaskInitlized)
            {
                Task waterTask = new Task();
                waterTask.plant = this.plant.name;
                waterTask.task = TaskType.water;
                waterTask.initTime = GM.time;
                taskList.addTask(waterTask);

                waterTaskInitlized = true;
            }
            // request task to be done
            // enable the trigger area for starting the task
            //wateringMaschine.transform.GetChild(0).gameObject.SetActive(true);
            wateringMaschine.transform.GetChild(0).GetComponent<TriggerWaterTask>().isOn = true;
            if (!waterAlertWaiting)
            {
                WaterAlert();
            }
            // when task done 
            // start cycle for set amount of time


        }
        else
        {
            wateringMaschine.transform.GetChild(0).GetComponent<TriggerWaterTask>().isOn = false;

            //wateringMaschine.transform.GetChild(0).gameObject.SetActive(false);
        }



        if (plant.needNutrition && !plant.inNuteriCycle && !inNutritionTask)
        {


            // nutrition task initilized
            if (!nutrientTaskInitlized)
            {
                Task nutrientTask = new Task();
                nutrientTask.plant = this.plant.name;
                nutrientTask.task = TaskType.nutrition;
                nutrientTask.initTime = GM.time;
                taskList.addTask(nutrientTask);

                nutrientTaskInitlized = true;
            }

            // request task to be done
            // when task done
            //nutritionMaschine.transform.GetChild(0).gameObject.SetActive(true);
            nutritionMaschine.transform.GetChild(0).GetComponent<TriggerNutriTask>().isOn = true;

            if (!nutritionAlertWaiting)
            {
                NutritionAlert();
            }
            // start cycle for set amount of time

        }
        else
        {
            nutritionMaschine.transform.GetChild(0).GetComponent<TriggerNutriTask>().isOn = false;

            //nutritionMaschine.transform.GetChild(0).gameObject.SetActive(false);
        }

        // init and enable Trim task
        if ((plant.healthBar > plant.maxHealthBar * plant.stateUpgradeThresh) && plant.state == PlantManager.State.vegetative)
        {

            if (!trimTaskInitlized)
            {
                Task tt = new Task();
                tt.plant = this.plant.name;
                tt.task = TaskType.trim;
                tt.initTime = GM.time;
                taskList.addTask(tt);

                plant.TriggerEnabler(TriggerCropTask.cropOrTrim.trim, true);
                trimTaskInitlized = true; 
            }

        }
        //else
        //{
        //    Task tt = new Task();
        //    tt.plant = this.plant.name;
        //    tt.task = TaskType.trim;
        //    tt.initTime = GM.time;
        //    taskList.removeTask(tt);
        //    trimTaskInitlized = false;

        //    plant.TriggerEnabler(TriggerCropTask.cropOrTrim.trim, false);
        //}


        // init and enable cropTask
        if (!inCropTask && GM.level == 3 && plant.state == PlantManager.State.ready && !croppTaskInitlized)
        {
            //crop should be enabled
            Task ct = new Task();
            ct.plant = this.plant.name;
            ct.task = TaskType.crop;
            ct.initTime = GM.time;
            taskList.addTask(ct);
            
            plant.TriggerEnabler(TriggerCropTask.cropOrTrim.crop, true);
            croppTaskInitlized = true;
        }
        //else
        //{
        //    Task ct = new Task();
        //    ct.plant = this.plant.name;
        //    ct.task = TaskType.crop;
        //    ct.initTime = GM.time;
        //    taskList.removeTask(ct);
        //    croppTaskInitlized = false;

        //    plant.TriggerEnabler(TriggerCropTask.cropOrTrim.crop, false);
        //}


    }

    /// <summary>
    /// run this function when character walks into the trigger area of the 
    /// watering maschine
    /// </summary>
    public void startWateringTask()
    {

        if (!GM.inTransition)
        {
            // remove task from UI list
            Task removeWaterTask = new Task();
            removeWaterTask.plant = this.plant.name;
            removeWaterTask.task = TaskType.water;
            taskList.removeTask(removeWaterTask);



            waterTaskInitlized = false;
            Player.GetComponentInChildren<PlayerMovement>().Active = false;

            waterTask.SetActive(true);
            waterTask.GetComponent<WateringTask>().SetRoom(this);
            inWaterTask = true;

        }


    }

    public void startLightTask()
    {

        if (!GM.inTransition)
        {
            // remove task from UI list
            Task removeLightTask = new Task();
            removeLightTask.plant = this.plant.name;
            removeLightTask.task = TaskType.light;
            taskList.removeTask(removeLightTask);



            lightTaskInitlized = false;

            Player.GetComponentInChildren<PlayerMovement>().Active = false;

            lightTask.SetActive(true);
            lightTask.GetComponent<LightingTask>().SetRoom(this);
            inlightTask = true;
        }
    }

    public void startNutriTask()
    {
        if (!GM.inTransition)
        {
            // remove task from UI list
            Task removeNutriTask = new Task();
            removeNutriTask.plant = this.plant.name;
            removeNutriTask.task = TaskType.nutrition;
            taskList.removeTask(removeNutriTask);


            nutrientTaskInitlized = false;
            Player.GetComponentInChildren<PlayerMovement>().Active = false;

            nutritionTask.SetActive(true);
            nutritionTask.GetComponent<NutritionTask>().SetRoom(this);
            inNutritionTask = true;

        }

    }

    public void startCropTask()
    {
        if (!GM.inTransition)
        {
            // remove task from UI list
            Task ct = new Task();
            ct.plant = this.plant.name;
            ct.task = TaskType.crop;
            ct.initTime = GM.time;
            taskList.removeTask(ct);

            
            croppTaskInitlized = false;
            Player.GetComponentInChildren<PlayerMovement>().Active = false;

            cropTask.SetActive(true);
            cropTask.GetComponent<CropTask>().SetRoom(this);
            inCropTask = true;
        }
    }

    public void startTrimTask()
    {

        if (!GM.inTransition)
        {
            // remove task from UI list
            Task tt = new Task();
            tt.plant = this.plant.name;
            tt.task = TaskType.trim;
            tt.initTime = GM.time;
            taskList.removeTask(tt);
            trimTaskInitlized = false;
            Player.GetComponentInChildren<PlayerMovement>().Active = false;

            trimTask.SetActive(true);
            trimTask.GetComponent<TrimTask>().SetRoom(this);
            inTrimTask = true;
        }
    }

    public void startCycle(float d, TaskType t)
    {
        //Debug.Log("CYCLE STARTS NOW");
        playerActionDoneAnimate();

        if (t.Equals(TaskType.light))
        {
            Animator animator = lighter.GetComponent<Animator>();
            animator.SetTrigger("Start");
            //growLight.SetActive(true);
            // task is done
            inlightTask = false;
            //start a cycle
            plant.inLightCycle = true;
            lightAnimator.SetBool("IsActive", true);
            StartCoroutine(cycleIsOver(d, t));
        }
        else if (t.Equals(TaskType.water))
        {
            
            //start sprinkler
            Animator animator = sprinkler.GetComponent<Animator>();
            animator.SetTrigger("Start");

            // task is done
            inWaterTask = false;
            // start a cycle
            plant.inWaterCycle = true;


            
            waterAnimator.SetBool("IsActive", true);
            StartCoroutine(cycleIsOver(d, t));
        }
        else if (t.Equals(TaskType.nutrition))
        {
            // task is done
            //RE-ENABLE
            Animator animator = hose.GetComponent<Animator>();
            animator.SetTrigger("Start");
            //RE-ENABLE
            inNutritionTask = false;
            // start a Cycle
            plant.inNuteriCycle = true;
            ////RE-ENABLE
            nutriAnimator.SetBool("IsActive", true);
            ////RE-ENABLE
            StartCoroutine(cycleIsOver(d, t));
        }
        else
        {
            Debug.Log("No Matching type found");
        }
        
    }


    //Reset everything
    public void ResetRoom()
    {
        lightAnimator.SetBool("Alert", false);
        plant.inLightCycle = false;
        lightAnimator.SetBool("IsActive", false);
        lightAnimator.Rebind();
        lightAnimator.Update(0f);

        waterAnimator.SetBool("Alert", false);
        plant.inWaterCycle = false;
        waterAnimator.SetBool("IsActive", false);
        waterAnimator.Rebind();
        waterAnimator.Update(0f);

        nutriAnimator.SetBool("Alert", false);
        nutriAnimator.SetBool("IsActive", false);
        nutriAnimator.Rebind();
        nutriAnimator.Update(0f);
        plant.inNuteriCycle = false;

        Animator animator = hose.GetComponent<Animator>();
        animator.Rebind();
        animator.Update(0f);

        animator = sprinkler.GetComponent<Animator>();
        animator.Rebind();
        animator.Update(0f);

        animator = lighter.GetComponent<Animator>();
        animator.Rebind();
        animator.Update(0f);

        plant.TriggerEnabler(TriggerCropTask.cropOrTrim.crop, false);
        plant.TriggerEnabler(TriggerCropTask.cropOrTrim.trim, false);
        croppTaskInitlized = false;
        trimTaskInitlized = false;
        //CancelInvoke();


    }



    IEnumerator cycleIsOver(float delayTime , TaskType t)
    {

        yield return new WaitForSeconds(delayTime);
        
        // Debug.Log("CYCLE IS OVER NOW");

        // keep track of how many tasks are done in this room
        numberOfTasksDone++;

        if (t.Equals(TaskType.light))
        {
            //growLight.SetActive(false);
            lightAnimator.SetBool("Alert", false);

            plant.inLightCycle = false;
            lightAnimator.SetBool("IsActive", false);

        }
        else if (t.Equals(TaskType.water))
        {
            waterAnimator.SetBool("Alert", false);

            plant.inWaterCycle = false;
            waterAnimator.SetBool("IsActive", false);


        }
        else if (t.Equals(TaskType.nutrition))
        {
            nutriAnimator.SetBool("Alert", false);

            nutriAnimator.SetBool("IsActive", false);
            plant.inNuteriCycle = false; 
        }
    }

    public void playerActionDoneAnimate()
    {
        Animator playerAnimator = Player.GetComponentInChildren<Animator>();
        Player.GetComponentInChildren<PlayerMovement>().Active = true;

        playerAnimator.SetTrigger("Action Done");
    }
    public void plantCropped()
    {
        playerActionDoneAnimate();
        inCropTask = false;
        //set plant back to seed state
        plant.isCropped = true;
    }
    public void plantTrimmed()
    {
        playerActionDoneAnimate();

        inTrimTask = false;
        //forward plant to flower state
        plant.isTrimmed = true;
    }

}
public enum TaskType
{
    light,
    nutrition,
    water,
    trim,
    crop
}

public class Task
{
    public string plant;
    public TaskType task;
    public float initTime;
}