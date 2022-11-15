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
        flower,
        process
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
    public float waterBar;
    public float nutriBar;
    public float lightBar;


    public bool isTrimmed;
    public bool isCropped;


    // Max meter values 
    public float maxWaterBar = 60f;    
    public float maxNutriBar = 50f;
    public float maxLightBar = 48f;

    public float maxHealthBar;


    public float increaseMultiplier = 1f;
    public float stateUpgradeThresh = 0.7f;
    public float stateUpgradeCost = 0.8f;

    public float needTriggerThreshhold = 0.6f;


    private SpriteRenderer SP;


    // Start is called before the first frame update
    void Start()
    {
        GM = GameObject.Find("Managers").GetComponent<GameManager>();
        SP = this.GetComponent<SpriteRenderer>();
        RM = this.GetComponentInParent<RoomManager>();

        maxHealthBar = (maxLightBar + maxNutriBar + maxWaterBar) / 3;
        Debug.Log("Thresh for state change" + maxHealthBar * 0.7);

        // start the plant with seed state
        this.state = State.clone;
        isTrimmed = false;

        foreach (Sprite sprite in plantPngs)
        {
            if (sprite.name == "tweed_amongusgame_" + state)
            {
                SP.sprite = sprite;
                break;

            }
            
        }
    }

    private void FixedUpdate()
    {

        if (GM.inTransition)
        {
            return;
        }


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
            waterBar += Time.fixedDeltaTime * increaseMultiplier;
        }
        else
        {
            // deduct some amount from all bars every frame
            waterBar -= Time.fixedDeltaTime * Random.Range(0f, 1f);
        }

        if (inNuteriCycle)
        {
            // accumulate nutri
            nutriBar += Time.fixedDeltaTime * increaseMultiplier;
        }
        else
        {        
            // deduct some amount from all bars every frame
            nutriBar -= Time.fixedDeltaTime * Random.Range(0f, 1f);
        }

        if (inLightCycle)
        {
            // accumulate light
            lightBar += Time.fixedDeltaTime * increaseMultiplier;
        }
        else
        {
            // deduct some amount from all bars every frame
            lightBar -= Time.fixedDeltaTime * Random.Range(0f, 1f);
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



                if (this.healthBar > maxHealthBar * stateUpgradeThresh)
                {

                    if(RM.inTrimTask != true)
                    {
                        TriggerEnabler(TriggerCropTask.cropOrTrim.trim, true);
                    }
                    
                }
                else
                {
                    TriggerEnabler(TriggerCropTask.cropOrTrim.trim, false);
                }


                if (isTrimmed)
                {
                    TriggerEnabler(TriggerCropTask.cropOrTrim.trim, false);
                    this.state = State.flower;
                    this.waterBar = this.waterBar * stateUpgradeCost;
                    this.lightBar = this.lightBar * stateUpgradeCost;
                    this.nutriBar = this.nutriBar * stateUpgradeCost;
                    isTrimmed = false;
                }

                
                break;


            case (State.flower):

                if (this.healthBar > maxHealthBar * stateUpgradeThresh)
                {
                    this.state = State.process;
                    this.waterBar = this.waterBar * stateUpgradeCost;
                    this.lightBar = this.lightBar * stateUpgradeCost;
                    this.nutriBar = this.nutriBar * stateUpgradeCost;
                }
                break;

            case (State.process):

                if(RM.inCropTask != true)
                {

                    TriggerEnabler(TriggerCropTask.cropOrTrim.crop, true);
                }
                


                if (isCropped)
                {
                    TriggerEnabler(TriggerCropTask.cropOrTrim.crop, false);
                    this.state = State.clone;
                    this.waterBar = this.waterBar * stateUpgradeCost;
                    this.lightBar = this.lightBar * stateUpgradeCost;
                    this.nutriBar = this.nutriBar * stateUpgradeCost;
                    isCropped = false;
                }
                break;

        }


        Mathf.Clamp(healthBar, 0, maxHealthBar);
        Mathf.Clamp(waterBar, 0, maxWaterBar);
        Mathf.Clamp(nutriBar, 0, maxNutriBar);
        Mathf.Clamp(lightBar, 0, maxNutriBar);


        

    }

    void TriggerEnabler (TriggerCropTask.cropOrTrim COT, bool status)
    {
        if (!this.transform.GetChild(0).gameObject.activeSelf && status ==true)
        {
            this.transform.GetChild(0).gameObject.SetActive(status);
            this.transform.GetChild(0).GetComponent<TriggerCropTask>().cot = COT;
        }

        if (this.transform.GetChild(0).gameObject.activeSelf && status == false)
        {
            this.transform.GetChild(0).gameObject.SetActive(status);
            this.transform.GetChild(0).GetComponent<TriggerCropTask>().cot = COT;
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

    private void changeSprite()
    {

        string currentSpriteName = SP.sprite.name;
        string spriteToBe = "tweed_amongusgame_" + state;

        if (healthBar < maxHealthBar / 2)
        {

            spriteToBe = spriteToBe + "_dying";

        }
 
        if (selected)
        {
            spriteToBe = spriteToBe + "_selected";
        }

        if (spriteToBe == currentSpriteName)
        {
            return;
        }


        foreach (Sprite sprite in plantPngs)
        {
            if (sprite.name == spriteToBe)
            {
                SP.sprite = sprite;

            }
        }
    }

    private void Update()
    {
        // change sprite based on current state
        changeSprite(); 
    }

}
