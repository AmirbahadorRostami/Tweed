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

    // room assets
    public GameObject lightTask;
    public GameObject waterTask;
    public GameObject nutritionTask;
    public GameObject cropTask;

    public GameObject Plant;
    public GameObject wateringMaschine;
    public GameObject lightMaschine;
    public GameObject nutritionMaschine;

    private Animator waterAnimator;
    private Animator nutriAnimator;
    private Animator lightAnimator;


    private GameManager GM;
    private GameObject canvas;
    private PlantManager plant;
    

    //Array of tasks
    //public GameObject[] Tasks;

    public bool inlightTask = false;
    public bool inWaterTask = false;
    public bool inNutritionTask = false;
    public bool inCropTask = false;

    public int numberOfTasksDone = 0;
    public int numberOfBuds = 0;

    //check if the plant needs anything:

    private void FixedUpdate()
    {
        // room should check plant 
        // Debug.Log("Time is: " + GM.time);

        // if the plant needs light and not currenlty in a light cycle and a task is not initlized to be done
        // initlize task to be started
        if (plant.needLight && !plant.inLightCycle && !inlightTask)
        {

            // request task to be done
            //Debug.Log("light task ready to be initilized");
            lightMaschine.transform.GetChild(0).gameObject.SetActive(true);

            // when task done 
            // start cycle for set amount of time

        }
        else
        {
            lightMaschine.transform.GetChild(0).gameObject.SetActive(false);
        }


        if (plant.needWater && !plant.inWaterCycle && !inWaterTask)
        {
            //Debug.Log("water task ready to be initilized");
            // request task to be done
            // enable the trigger area for starting the task
            wateringMaschine.transform.GetChild(0).gameObject.SetActive(true);

            // when task done 
            // start cycle for set amount of time


        }
        else
        {
            wateringMaschine.transform.GetChild(0).gameObject.SetActive(false);
        }



        if (plant.needNutrition && !plant.inNuteriCycle && !inNutritionTask)
        {


            //Debug.Log("nutrition task ready to be initilized");
            // request task to be done
            // when task done
            nutritionMaschine.transform.GetChild(0).gameObject.SetActive(true);
            // start cycle for set amount of time

        }
        else
        {
            nutritionMaschine.transform.GetChild(0).gameObject.SetActive(false);
        }



    }

    /// <summary>
    /// run this function when character walks into the trigger area of the 
    /// watering maschine
    /// </summary>
    public void startWateringTask()
    {

        waterTask.SetActive(true);
        waterTask.GetComponent<WateringTask>().SetRoom(this);
        inWaterTask = true;

    }

    public void startLightTask()
    {
        lightTask.SetActive(true);
        lightTask.GetComponent<LightingTask>().SetRoom(this);
        inlightTask = true;
    }

    public void startNutriTask()
    {
        nutritionTask.SetActive(true);
        nutritionTask.GetComponent<NutritionTask>().SetRoom(this);
        inNutritionTask = true;
    }

    public void startCropTask()
    {
        cropTask.SetActive(true);
        cropTask.GetComponent<CropTask>().SetRoom(this);
        //cropTask.GetComponent<NutritionTask>().SetRoom(this);
        inCropTask = true;
    }

    public void startCycle(float d, TaskType t)
    {
        Debug.Log("CYCLE STARTS NOW");

        if (t.Equals(TaskType.light))
        {
            // task is done
            inlightTask = false;
            //start a cycle
            plant.inLightCycle = true;
            lightAnimator.SetBool("IsActive", true);
            StartCoroutine(cycleIsOver(d, t));
        }
        else if (t.Equals(TaskType.water))
        {
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
            inNutritionTask = false;
            // start a Cycle
            plant.inNuteriCycle = true;
            nutriAnimator.SetBool("IsActive", true);
            StartCoroutine(cycleIsOver(d, t));
        }
        else
        {
            Debug.Log("No Matching type found");
        }
        
    }

    IEnumerator cycleIsOver(float delayTime , TaskType t)
    {

        yield return new WaitForSeconds(delayTime);
        
        Debug.Log("CYCLE IS OVER NOW");

        // keep track of how many tasks are done in this room
        numberOfTasksDone++;

        if (t.Equals(TaskType.light))
        {
            Plant.GetComponent<PlantManager>().inLightCycle = false;
            lightAnimator.SetBool("IsActive", false);
        }
        else if (t.Equals(TaskType.water))
        {
            Plant.GetComponent<PlantManager>().inWaterCycle = false;
            waterAnimator.SetBool("IsActive", false);
        }
        else if (t.Equals(TaskType.nutrition))
        {

            nutriAnimator.SetBool("IsActive", false);
            Plant.GetComponent<PlantManager>().inNuteriCycle = false; 
        }
    }

    public void plantCropped()
    {
        //set plant back to seed state
    }
    public void plantTrimmed()
    {
        //forward plant to flower state
        plant.isTrimmed = true;
    }


    // Start is called before the first frame update
    void Start()
    {
        GM = GameObject.Find("Managers").GetComponent<GameManager>();
        canvas = GameObject.Find("Canvas").gameObject;
        plant = Plant.GetComponent<PlantManager>();
        waterAnimator = wateringMaschine.GetComponentInChildren<Animator>();
        nutriAnimator = nutritionMaschine.GetComponentInChildren<Animator>();
        lightAnimator = lightMaschine.GetComponentInChildren<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
