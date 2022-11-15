using System.Collections;
using System.Collections.Generic;
using UnityEngine;



/// <summary>
/// manage and saves the states and required properties for plants
/// </summary>



/// <summary>
/// 
/// how an event is triggred :
/// 
/// 
/// if any of plant vital meters (maybe just the healthBar)fall bellow a threshhold 
///        turn on boolean flags which results in the room manager to start a task
///        
/// 
/// 
/// 
/// 
/// 3 varible attributes to consider 
///     light
///     nutrition
///     water
/// 
/// 
/// 
/// 
/// we can deduct a specific amount each physical frame from every attribute
/// the amount can varry based on the specific property varible to cause randomness in the system
/// 
/// 
/// the plant can change its state when health bar reaches a level
/// 
/// 
/// 
/// goals for each level 
/// 
///     level 1 - take two rooms worth of plants from clone stage to vegetative
///             - 
///     
/// 
///     level 2 - take two rooms worth of plants from clone stage to vegetative
///             - take two rooms worth of plants from clone vegtative to flowring
///             
/// 
///     level 3 - take two rooms worth of plants from clone stage to vegetative
///             - take two rooms worth of plants from clone vegtative to flowring
///             - PRJ processor 
///             
/// 
/// 
/// 
///     
/// 
/// 
/// 
/// </summary>

// Clamp Plant Bars 0 - MaxBar

public class PlantManager : MonoBehaviour
{

    public enum State
    {
        seed,
        clone,
        vegetative,
        flowering,
        ready
    }

    public GameManager GM;
    public RoomManager RM;


    public Sprite[] plantPngs;


    public State state;
    private bool selected = false;

    public bool inWaterCycle;
    public bool inLightCycle;
    public bool inNuteriCycle;

    // flags for what the plant needs
    public bool needWater;
    public bool needNutrition;
    public bool needLight;

    //plant vital meters
    public float healthBar;
    public float waterBar { get; set; }
    public float nutriBar { get; set; }
    public float lightBar { get; set; }


    public bool isTrimmed;
    public bool isCropped;


    // Max meter values 
    public float maxWaterBar { get; set; }//= 0;    
    public float maxNutriBar { get; set; } //= 0;
    public float maxLightBar { get; set; } //= 0;

    public float maxHealthBar { get; set; }


    public float increaseMultiplier { get; set; }//= 0;
    public float decreseMultiplier { get; set; }//= 0;
    public float stateUpgradeThresh { get; set; }//= 0;
    public float stateUpgradeCost { get; set; }//= 0;
    public float needTriggerThreshhold { get; set; } //= 0;


    private SpriteRenderer SPTop;
    private SpriteRenderer SPMid;
    private SpriteRenderer SPBot;
    private SpriteRenderer SPTopBox;
    private SpriteRenderer SPMidBox;
    private SpriteRenderer SPBotBox;

    private Animator animator;
    private ProcessingRoomManager PRM;
    public GameObject boxMid;
    public GameObject boxTop;
    public GameObject boxBot;

    public GameObject plantMid;
    public GameObject plantTop;
    public GameObject plantBot;

    Tutorials tutorials;

    // Start is called before the first frame update
    void Awake()
    {
        animator = this.GetComponentInChildren<Animator>();
        tutorials = GameObject.Find("Tutorials").GetComponent<Tutorials>();

        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
        PRM = GameObject.FindGameObjectWithTag("processingRoom").GetComponent<ProcessingRoomManager>();


        RM = this.GetComponentInParent<RoomManager>();
        SPTop = plantTop.GetComponent<SpriteRenderer>();
        SPMid = plantMid.GetComponent<SpriteRenderer>();
        SPBot = plantBot.GetComponent<SpriteRenderer>();

        SPTopBox = boxTop.GetComponent<SpriteRenderer>();
        SPMidBox = boxMid.GetComponent<SpriteRenderer>();
        SPBotBox = boxBot.GetComponent<SpriteRenderer>();

    }

    private void Start()
    {
        // start the plant with seed state
        this.state = State.clone;
        isTrimmed = false;
        changeSprite();
        maxHealthBar = (maxLightBar + maxNutriBar + maxWaterBar) / 3;



        //Debug.Log("increaseMultiplier: " + increaseMultiplier);
        //Debug.Log("decreseMultiplier: " + decreseMultiplier);

        InvokeRepeating("UpdatePlant", 0.1f, 1f);
    }

    private void UpdatePlant()
    {

        if (GM.inTransition)
        {
            return;
        }


        healthBar = Mathf.Clamp(healthBar, 0, maxHealthBar);
        waterBar = Mathf.Clamp(waterBar, 0, maxWaterBar);
        nutriBar = Mathf.Clamp(nutriBar, 0, maxNutriBar);
        lightBar = Mathf.Clamp(lightBar, 0, maxNutriBar);

        healthBar = (lightBar + nutriBar + waterBar) / 3;



        // check meter values and respecting boolean flags on/off
        if (nutriBar < maxNutriBar * needTriggerThreshhold)
        {
            needNutrition = true;
        }
        else
        {
            needNutrition = false;
        }


        if(lightBar < maxLightBar * needTriggerThreshhold)
        {
            needLight = true;
        }
        else
        {
            needLight = false;
        }


        if(waterBar < maxWaterBar * needTriggerThreshhold)
        {
            needWater = true;
        }
        else
        {
            needWater = false;
        }


        if (inWaterCycle)
        {   
            // accumulate water
            waterBar += (Time.fixedDeltaTime * increaseMultiplier);
        }

        if(!inWaterCycle && !GM.inTask && GM.level != 3)
        {
            // deduct some amount from all bars every frame
            waterBar -= (Time.fixedDeltaTime * decreseMultiplier);
        }

        if (inNuteriCycle)
        {
            // accumulate nutri
            nutriBar += (Time.fixedDeltaTime * increaseMultiplier);
        }

        if(!inNuteriCycle && !GM.inTask && GM.level != 3)
        {        
            // deduct some amount from all bars every frame
            nutriBar -= (Time.fixedDeltaTime * decreseMultiplier);
        }

        if (inLightCycle)
        {
            // accumulate light
            lightBar += (Time.fixedDeltaTime * increaseMultiplier);
        }

        if(!inLightCycle && !GM.inTask && GM.level != 3)
        {
            // deduct some amount from all bars every frame
            lightBar -= (Time.fixedDeltaTime * decreseMultiplier);
        }

        
        
        switch (this.state)
        {
            case (State.clone):

                if (this.healthBar > maxHealthBar * stateUpgradeThresh)
                {
                    this.state = State.vegetative;
                    this.waterBar = this.waterBar * stateUpgradeCost;
                    this.lightBar = this.lightBar * stateUpgradeCost;
                    this.nutriBar = this.nutriBar * stateUpgradeCost;

                }
                break;

            case (State.vegetative):

                if (isTrimmed)
                {
                    isTrimmed = false;
                    animator.SetTrigger("Trim");
                    TriggerEnabler(TriggerCropTask.cropOrTrim.trim, false);
                    this.state = State.flowering;
                    this.waterBar = this.waterBar * stateUpgradeCost;
                    this.lightBar = this.lightBar * stateUpgradeCost;
                    this.nutriBar = this.nutriBar * stateUpgradeCost;
                    
                }

                
                break;


            case (State.flowering):

                if (this.healthBar > maxHealthBar * stateUpgradeThresh && GM.level > 1)
                {
                    this.state = State.ready;
                    this.waterBar = this.waterBar * stateUpgradeCost;
                    this.lightBar = this.lightBar * stateUpgradeCost;
                    this.nutriBar = this.nutriBar * stateUpgradeCost;
                }
                break;

            case (State.ready):



                if (isCropped)
                {
                    isCropped = false;
                    TriggerEnabler(TriggerCropTask.cropOrTrim.crop, false);
                    
                    // create an unprocessed bud with the health 
                    Bud bud = new Bud();
                    bud.health = this.healthBar;
                    bud.budType = this.gameObject.name;
                    bud.isProcessed = false;
                    
                    PRM.buds.Add(bud);
                    PRM.updateBinSprite();

                    this.state = State.clone;
                    this.waterBar = this.waterBar * stateUpgradeCost;
                    this.lightBar = this.lightBar * stateUpgradeCost;
                    this.nutriBar = this.nutriBar * stateUpgradeCost;
                    
                }
                break;

        }


    }

    private void Update()
    {

        // change sprite based on current state
        changeSprite();

    }

    public void TriggerEnabler (TriggerCropTask.cropOrTrim COT, bool status)
    {
        if (!this.transform.GetChild(0).gameObject.activeSelf && status ==true)
        {
            this.transform.GetChild(0).gameObject.SetActive(status);
            //this.transform.GetChild(0).GetComponent<TriggerCropTask>().isOn = status;
            this.transform.GetChild(0).GetComponent<TriggerCropTask>().cot = COT;
        }

        if (this.transform.GetChild(0).gameObject.activeSelf && status == false)
        {
            this.transform.GetChild(0).gameObject.SetActive(status);
            //this.transform.GetChild(0).GetComponent<TriggerCropTask>().isOn = status;
            this.transform.GetChild(0).GetComponent<TriggerCropTask>().cot = COT;
        }

    }

    private void changeSprite()
    {

        string currentSpriteName = SPMid.sprite.name;
        string spriteToBe = "" + state;
        string boxSpriteToBe;

        if (healthBar < maxHealthBar / 2)
        {
            ////show tutorial
            //if (GM.time >= 10f)
            //{
            //    tutorials.showTutorial("Dying");
            //}


            spriteToBe = spriteToBe + "_dying";

        }

        if (selected)
        {
            spriteToBe = spriteToBe + "_select";
        }

        if (spriteToBe == currentSpriteName)
        {
            return;
        }

        boxSpriteToBe = spriteToBe + "_box";
        foreach (Sprite sprite in plantPngs)
        {
            if (sprite.name == spriteToBe + "_top")
            {
                SPTop.sprite = sprite;
                SPMid.sprite = sprite;
                SPBot.sprite = sprite;

            }
            else if(sprite.name == boxSpriteToBe)
            {
                SPBotBox.sprite = sprite;
                SPMidBox.sprite = sprite;
                SPTopBox.sprite = sprite;

            }
        }
    }

    public void enableSelected()
    {
        selected = true;

    }

    public void disableSelected()
    {
        selected = false;
    }


}

public class Bud
{
    public float health;
    public string budType;
    public bool isProcessed = false;
}
