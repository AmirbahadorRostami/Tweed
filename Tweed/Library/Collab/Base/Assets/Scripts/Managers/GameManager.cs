using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour
{

    /// <summary>
    /// controls the state of the game based on rooms
    /// switches btween levels
    /// communication with the server
    /// 
    /// 
    /// Level 1 ? 2 Rooms 
    /// (Clone Stage to flowring) 
    /// Nutrients, water and lighting
    /// 
    /// Level 2 ? 4 Rooms(
    ///     2 x Clone Stage to ready
    ///     2 x flowring to ready 
    ///     
    /// tasks:
    /// Nutrients, water, and lighting ? wrench
    /// 
    /// Level 3 ? 5 Rooms(
    ///         2 x Vegetative to processing 
    ///         2 x Flowering to processing
    ///         1 x PRJ processor
    ///         )
    ///         
    /// tasks:
    /// Nutrients, water, lighting and processing ? wrench
    /// 
    /// 
    /// 
    /// TODO::>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
    ///      
    ///     end of game direct to another URL
    ///     
    ///     move back charchter to middle hallway
    /// 
    /// 
    /// </summary>


    private NetworkManager NM;
    private AudioSource audio;
    private GameObject Player;


    public gameData userData { get; set; }

    // pairs of prize percentages for the wheel
    public List< Dictionary<string, float> > prizePercentage { get; set; }


    public List <RoomManager> Rooms;
    public List <PlantManager> Plants;
    public ProcessingRoomManager PRM;
    

    public GameObject Grid;
    public GameObject levelPassed;
    public GameObject levelFailed;
    public GameObject Gamefinished;
    public GameObject tutorials;
    public GameObject allTasks;
    

    public GameObject Announcer;
    public GameObject UI_TaskList;
    public GameObject UI_Button;
    public GameObject UI_MoveStick;
    

    public int numberOfTasksDone = 0;

    public GameObject nutritionTask;
    public GameObject waterTask;
    public GameObject lightingTask;


    [Header("Plant Settings")]
    public float maxWaterBar = 100f;
    public float maxNutriBar = 100f;
    public float maxLightBar = 100f;
    public float maxHealthBar;
    public float increaseMultiplier = 1f;
    public float decreseMultiplier = 0.8f;
    public float stateUpgradeThresh = 0.7f;
    public float stateUpgradeCost = 0.8f;
    public float needTriggerThreshhold = 0.6f;

    public float waterBar =  60f;
    public float nuterBar =  50f;
    public float lightBar =  48f;



    [Header("Global Game Info:")]
    public float time = 0f;
    public int level = 0;
    public int wheelNum;


    public bool inTransition { get; set; }
    public bool inTask { get; set; }
    public bool practiceMode { get; set; }


    //float Room_1_healthBar;
    int Room_1_numberOfTasksDone;
    PlantManager.State Room_1_state;

    //float Room_2_healthBar;
    int Room_2_numberOfTasksDone;
    PlantManager.State Room_2_state;

    //float Room_3_healthBar;
    int Room_3_numberOfTasksDone;
    PlantManager.State Room_3_state;

    //float Room_4_healthBar;
    int Room_4_numberOfTasksDone;
    PlantManager.State Room_4_state;


    [Header("In level audio")]
    public AudioClip[] inGameAudio;




    private void Awake()
    {
        //Application.targetFrameRate = 30;
    }


    private void Start()
    {

        NM = this.GetComponent<NetworkManager>();
        audio = this.GetComponent<AudioSource>();
        Player = GameObject.FindGameObjectWithTag("Player");
        // re-enable for 3rd level
        PRM = GameObject.FindGameObjectWithTag("processingRoom").GetComponent<ProcessingRoomManager>();

        for (int r = 0; r < Rooms.Count; r++)
        {

            Plants[r] = Rooms[r].plant;
            Debug.Log("Plant Manager regsitery point:  " + Plants[r].state);


            Plants[r].maxHealthBar = this.maxHealthBar;
            Plants[r].maxLightBar = this.maxLightBar;
            Plants[r].maxWaterBar = this.maxWaterBar;
            Plants[r].maxNutriBar = this.maxNutriBar;

            Plants[r].waterBar = this.waterBar + Random.RandomRange(0, 10);
            Plants[r].nutriBar = this.nuterBar + Random.RandomRange(0, 10);
            Plants[r].lightBar = this.lightBar + Random.RandomRange(0, 10);



            Plants[r].increaseMultiplier = this.increaseMultiplier;
            Plants[r].decreseMultiplier = this.decreseMultiplier;
            Plants[r].stateUpgradeThresh = this.stateUpgradeThresh;
            Plants[r].stateUpgradeCost = this.stateUpgradeCost;
            Plants[r].needTriggerThreshhold = this.needTriggerThreshhold;
        }

        // get data from server
        NM.GET();


        level = 1;
        inTransition = true;
        inTask = false;

        // disable other levels
        Grid.transform.GetChild(0).gameObject.SetActive(true);
        Grid.transform.GetChild(1).gameObject.SetActive(false);

        //doors should not open
        Grid.transform.GetChild(3).GetComponent<DoorHorizontal>().close();
        Grid.transform.GetChild(4).GetComponent<DoorHorizontal>().close();


        // level 1 audio 
        audio.clip = inGameAudio[0];


        //start with Tutorials
        //StartLevel();
        tutorials.transform.GetChild(0).gameObject.SetActive(true);
        UI_TaskList.SetActive(false);
        UI_MoveStick.SetActive(false);
        UI_Button.SetActive(false);

        InvokeRepeating("UpdateGame", 0.5f,1f);
    }

    /// <summary>
    ///  
    /// in each frame check :
    ///     all plants state
    ///     all plants bars
    ///     all tasks done in each room
    ///
    /// </summary>

    public void ShowTutorial()
    {
        UI_TaskList.SetActive(false);
        UI_MoveStick.SetActive(false);
        UI_Button.SetActive(false);

        if (level == 2)
        {
            tutorials.transform.Find("02-01").gameObject.SetActive(true);
        }

        else if(level == 3)
        {
            tutorials.transform.Find("03-01").gameObject.SetActive(true);
        }
    }

    public void StartLevel()
    {

        inTransition = false;
        wheelNum = level;
        time = 0;
        audio.Play();
        Player.GetComponent<PlayerMovement>().Active = true;
        Player.transform.position = new Vector3(-2.5f, -8f, 0f);

        UI_TaskList.SetActive(true);
        UI_MoveStick.SetActive(true);
        UI_Button.SetActive(true);
        Announcer.transform.GetChild(level - 1).gameObject.SetActive(true);


        //reset plants cycles, so that they don't continue exsiting cycles when the levels reset
        for(int i = 0; i <=3; i++)
        {

            Rooms[i].ResetRoom();
        }




        if (level == 1)
        {

            Rooms[0].numberOfTasksDone = 0;
            Rooms[1].numberOfTasksDone = 0;


            Plants[0].waterBar = this.waterBar + Random.RandomRange(1, 5); 
            Plants[0].nutriBar = this.nuterBar + Random.RandomRange(1, 5); 
            Plants[0].lightBar = this.lightBar + Random.RandomRange(1, 5);

            Plants[1].waterBar = this.waterBar + Random.RandomRange(1, 5);
            Plants[1].nutriBar = this.nuterBar + Random.RandomRange(1, 5);
            Plants[1].lightBar = this.lightBar + Random.RandomRange(1, 5);


            Plants[0].state = PlantManager.State.clone;
            Plants[1].state = PlantManager.State.clone;

            // reset plant cycle


            nutritionTask.GetComponent<NutritionTask>().duration = 20f;
            waterTask.GetComponent<WateringTask>().Duration = 20f;
            lightingTask.GetComponent<LightingTask>().Duration = 20f;

        }
        else
        {
            nutritionTask.GetComponent<NutritionTask>().duration = 45f;
            waterTask.GetComponent<WateringTask>().Duration = 45f;
            lightingTask.GetComponent<LightingTask>().Duration = 45f;


            //reset number of tasks done
            Rooms[0].numberOfTasksDone = 0;
            Rooms[1].numberOfTasksDone = 0;
            Rooms[2].numberOfTasksDone = 0;
            Rooms[3].numberOfTasksDone = 0;


            Plants[0].waterBar = this.waterBar + Random.RandomRange(1, 5);
            Plants[0].nutriBar = this.nuterBar + Random.RandomRange(1, 5);
            Plants[0].lightBar = this.lightBar + Random.RandomRange(1, 5);

            Plants[1].waterBar = this.waterBar + Random.RandomRange(1, 5);
            Plants[1].nutriBar = this.nuterBar + Random.RandomRange(1, 5);
            Plants[1].lightBar = this.lightBar + Random.RandomRange(1, 5);

            Plants[2].waterBar = this.waterBar + Random.RandomRange(1, 5);
            Plants[2].nutriBar = this.nuterBar + Random.RandomRange(1, 5);
            Plants[2].lightBar = this.lightBar + Random.RandomRange(1, 5);

            Plants[3].waterBar = this.waterBar + Random.RandomRange(1, 5);
            Plants[3].nutriBar = this.nuterBar + Random.RandomRange(1, 5);
            Plants[3].lightBar = this.lightBar + Random.RandomRange(1, 5);


            if(level == 2)
            {
                Plants[0].state = PlantManager.State.flowering; 
                Plants[1].state = PlantManager.State.flowering;
                Plants[2].state = PlantManager.State.clone;
                Plants[3].state = PlantManager.State.clone;


                Plants[0].increaseMultiplier = 120f;
                Plants[1].increaseMultiplier = 120f;
                Plants[2].increaseMultiplier = 120f;
                Plants[3].increaseMultiplier = 120f;


            }
            else if(level == 3)
            {
                Plants[0].state = PlantManager.State.ready;
                Plants[1].state = PlantManager.State.ready;
                Plants[2].state = PlantManager.State.ready;
                Plants[3].state = PlantManager.State.ready;

            }



        }


    }

    public void UpdateGame()
    {

        //Debug.Log("Time: " + time);

        // room 1 and room 2 == level 1
        // room 3 and room 4 == level 2 
        //       room 5      == level 3

        if (Rooms[0].isActiveAndEnabled)
        {
            //Room_1_healthBar = Plants[0].healthBar;
            Room_1_numberOfTasksDone = Rooms[0].numberOfTasksDone;
            Room_1_state = Plants[0].state;
        }

        if (Rooms[1].isActiveAndEnabled)
        {
            //Room_2_healthBar = Plants[1].healthBar;
            Room_2_numberOfTasksDone = Rooms[1].numberOfTasksDone;
            Room_2_state = Plants[1].state;
        }

        if (Rooms[2].isActiveAndEnabled)
        {
            //Room_3_healthBar = Plants[2].healthBar;
            Room_3_numberOfTasksDone = Rooms[2].numberOfTasksDone;
            Room_3_state = Plants[2].state;
        }

        if (Rooms[3].isActiveAndEnabled)
        {
            //Room_4_healthBar = Plants[3].healthBar;
            Room_4_numberOfTasksDone = Rooms[3].numberOfTasksDone;
            Room_4_state = Plants[3].state;
        }



        // if the plant state goals meets level requirements (passed rule two)
        // if the number of tasks needed to be done is reached
        // all rules apply within time limit

        if (!inTask)
        {
            switch (level)
            {
                case (1):


                    // if pass level

                    if (
                        (Room_1_state.Equals(PlantManager.State.flowering) && Room_1_numberOfTasksDone >= 2)
                        &&
                        (Room_2_state.Equals(PlantManager.State.flowering) && Room_2_numberOfTasksDone >= 2)
                       )
                    {
                        QuitTasks();
                        // set the game state to in transisiton mode
                        inTransition = true;
                        UI_TaskList.SetActive(false);

                        level++;

                        // trun on the Continue page 
                        levelPassed.SetActive(true);

                        // pause in game audio
                        audio.Pause();

                        //enable the next level 
                        Grid.transform.GetChild(1).gameObject.SetActive(true);

                        Player.GetComponent<PlayerMovement>().Active = false;

                        // end of level stuff

                        // set up the audio clip for the next level
                        audio.clip = inGameAudio[1];

                        // enable the script for the door btween level 1 and 2
                        Grid.transform.GetChild(4).GetComponent<DoorHorizontal>().Open();




                    }

                    // if fail level
                    // missing the health
                    if (time >= 100f)
                    {
                        QuitTasks();
                        // set the game state to in transisiton mode
                        inTransition = true;
                        UI_TaskList.SetActive(false);
                        Player.GetComponent<PlayerMovement>().Active = false;
                        levelFailed.SetActive(true);
                    }

                    break;


                case (2):


                    // if pass level

                    if (
                        (Room_1_state == PlantManager.State.ready && Room_1_numberOfTasksDone >= 2)
                        &&
                        (Room_2_state == PlantManager.State.ready && Room_2_numberOfTasksDone >= 2)
                        &&
                        (Room_3_state == PlantManager.State.ready && Room_3_numberOfTasksDone >= 2)
                        &&
                        (Room_4_state == PlantManager.State.ready && Room_4_numberOfTasksDone >= 2)
                       )
                    {


                        QuitTasks();
                        // set the game state to in transisiton mode
                        inTransition = true;
                        UI_TaskList.SetActive(false);

                        //level up
                        level++;

                        levelPassed.SetActive(true);
                        // end of level stuff

                        Player.GetComponent<PlayerMovement>().Active = false;

                        // pause in game audio
                        audio.Pause();

                        // enable the script for the door btween level 2 and 3
                        Grid.transform.GetChild(3).GetComponent<DoorHorizontal>().Open();
                        // enable the next level(processing room)
                        Grid.transform.GetChild(0).gameObject.SetActive(true);


                        // set up the audio clip for the next level
                        audio.clip = inGameAudio[2];


                    }



                    // if fail level
                    // missing the health rule

                    if (time >= 200f)
                    {
                        QuitTasks();
                        inTransition = true;
                        UI_TaskList.SetActive(false);
                        levelFailed.SetActive(true);

                        Player.GetComponent<PlayerMovement>().Active = false;

                        // reset number of tasks done
                        Rooms[0].numberOfTasksDone = 0;
                        Rooms[1].numberOfTasksDone = 0;
                        Rooms[2].numberOfTasksDone = 0;
                        Rooms[3].numberOfTasksDone = 0;

                    }

                    break;
                case (3):


                    if (PRM.buds.Count == 4)
                    {
                        // level 3 done S
                        // missing the Time rule
                        if (
                            (PRM.buds[0].isProcessed)
                            &&
                            (PRM.buds[1].isProcessed)
                            &&
                            (PRM.buds[2].isProcessed)
                            &&
                            (PRM.buds[3].isProcessed)
                           )
                        {
                            //finish game stage


                            // set the game state to in transisiton mode
                            QuitTasks();
                            inTransition = true;
                            UI_TaskList.SetActive(false);
                            Player.GetComponent<PlayerMovement>().Active = false;
                            Gamefinished.SetActive(true);
                            Gamefinished.GetComponent<EndingScreen>().SetGrade(PRM.buds);

                        }
                    }

                    if (time >= 250f)
                    {

                        QuitTasks();
                        inTransition = true;
                        UI_TaskList.SetActive(false);
                        levelFailed.SetActive(true);
                        Player.GetComponent<PlayerMovement>().Active = false;


                        PRM.buds[0].isProcessed = false;
                        PRM.buds[1].isProcessed = false;
                        PRM.buds[2].isProcessed = false;
                        PRM.buds[3].isProcessed = false;

                    }



                    break;


            }
        }

    }




    // Update is called once per frame
    void FixedUpdate()
    {

        if (!inTransition)
        {
            time += Time.fixedDeltaTime;
        }

    }

    public void QuitTasks()
    {
        //allTasks.transform.GetChild(0).GetComponent<NutritionTask>().QuitTask();
        //allTasks.transform.GetChild(2).GetComponent<WateringTask>().QuitTask();
        //allTasks.transform.GetChild(1).GetComponent<LightingTask>().taskDone();
        //allTasks.transform.GetChild(5).GetComponent<ProcessingTask>().QuitTask();
        //allTasks.transform.GetChild(4).GetComponent<TrimTask>().QuitTask();
        //allTasks.transform.GetChild(3).GetComponent<CropTask>().QuitTask();
        //inTask = false;
        //Animator animator = Player.GetComponentInChildren<Animator>();
        //animator.Rebind();
        //animator.Update(0f);
        //Rooms[0].transform.GetChild(5).GetChild(2).GetChild(0).GetComponent<TriggerLightTask>().OnTriggerExit(Player.GetComponent<Collider>());
        //UI_Button.GetComponent<TaskButton>().clearButton();
    }

    public void QuitGame()
    {
        StartCoroutine("PostCrt", userData);

        //Application.Quit();
    }


}
