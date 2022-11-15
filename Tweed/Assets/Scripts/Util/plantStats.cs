using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class plantStats : MonoBehaviour
{


    
    public RoomManager[] Rooms;

    public ProcessingRoomManager prsRoom;

    public PlantManager[] Plants;


    public Text Room1Text;
    public Text Room2Text;
    public Text Room3Text;
    public Text Room4Text;
    public Text Room5Text;

    public GameObject statsPanel;

/*
    [Header("Plant Settings")]
    public float maxWaterBar = 60f;
    public float maxNutriBar = 50f;
    public float maxLightBar = 48f;

    public float maxHealthBar;


    public float increaseMultiplier = 1f;
    public float decreseMultiplier = 0.8f;
    public float stateUpgradeThresh = 0.7f;
    public float stateUpgradeCost = 0.8f;

    public float needTriggerThreshhold = 0.6f;

*/
    float Room_1_healthBar;
    int Room_1_numberOfTasksDone;
    PlantManager.State Room_1_state;
    float Room_1_lightBar;
    float Room_1_waterBar;
    float Room_1_nutriBar;


    float Room_2_healthBar;
    int Room_2_numberOfTasksDone;
    PlantManager.State Room_2_state;
    float Room_2_lightBar;
    float Room_2_waterBar;
    float Room_2_nutriBar;



    float Room_3_healthBar;
    int Room_3_numberOfTasksDone;
    PlantManager.State Room_3_state;
    float Room_3_lightBar;
    float Room_3_waterBar;
    float Room_3_nutriBar;


    float Room_4_healthBar;
    int Room_4_numberOfTasksDone;
    PlantManager.State Room_4_state;
    float Room_4_lightBar;
    float Room_4_waterBar;
    float Room_4_nutriBar;


    int number_of_CroppedBuds;
    int number_of_ProcessedBuds;








    // Start is called before the first frame update
    void Start()
    {
/*        foreach(PlantManager p  in Plants)
        {
            p.maxHealthBar = this.maxHealthBar;
            p.maxLightBar = this.maxLightBar;
            p.maxWaterBar = this.maxWaterBar;
            p.maxNutriBar = this.maxNutriBar;

            p.increaseMultiplier = this.increaseMultiplier;
            p.decreseMultiplier = this.decreseMultiplier;
            p.stateUpgradeThresh = this.stateUpgradeThresh;
            p.stateUpgradeCost = this.stateUpgradeCost;
            p.needTriggerThreshhold = this.needTriggerThreshhold;


        }
*/
    }


    void Update()
    {
        if (Rooms[0].isActiveAndEnabled)
        {
            Room_1_healthBar = Plants[0].healthBar;
            Room_1_numberOfTasksDone = Rooms[0].numberOfTasksDone;
            Room_1_state = Plants[0].state;

            Room_1_lightBar = Plants[0].lightBar;
            Room_1_waterBar = Plants[0].waterBar;
            Room_1_nutriBar = Plants[0].nutriBar;
        }

        if (Rooms[1].isActiveAndEnabled)
        {
            Room_2_healthBar = Plants[1].healthBar;
            Room_2_numberOfTasksDone = Rooms[1].numberOfTasksDone;
            Room_2_state = Plants[1].state;

            Room_2_lightBar = Plants[1].lightBar;
            Room_2_waterBar = Plants[1].waterBar;
            Room_2_nutriBar = Plants[1].nutriBar;
        }

        if (Rooms[2].isActiveAndEnabled)
        {
            Room_3_healthBar = Plants[2].healthBar;
            Room_3_numberOfTasksDone = Rooms[2].numberOfTasksDone;
            Room_3_state = Plants[2].state;

            Room_3_lightBar = Plants[2].lightBar;
            Room_3_waterBar = Plants[2].waterBar;
            Room_3_nutriBar = Plants[2].nutriBar;
        }

        if (Rooms[3].isActiveAndEnabled)
        {
            Room_4_healthBar = Plants[3].healthBar;
            Room_4_numberOfTasksDone = Rooms[3].numberOfTasksDone;
            Room_4_state = Plants[3].state;

            Room_4_lightBar = Plants[3].lightBar;
            Room_4_waterBar = Plants[3].waterBar;
            Room_4_nutriBar = Plants[3].nutriBar;

        }



        if (prsRoom.isActiveAndEnabled)
        {
            number_of_CroppedBuds = prsRoom.buds.Count;
            number_of_ProcessedBuds = prsRoom.numberOfProcessedBuds;
        }



        string room_1_Stat = "Plant State: " + Room_1_state + "\r\n" +
                             "Plant Health: " + Room_1_healthBar + "\r\n" +
                             "Plant Light: " + Room_1_lightBar + "\r\n" +
                             "Plant Water: " + Room_1_waterBar + "\r\n" +
                             "Plant nutrition: " + Room_1_nutriBar + "\r\n" +
                             "Room Number of Tasks: " + Room_1_numberOfTasksDone + "\r\n";


        string room_2_Stat = "Plant State: " + Room_2_state + "\r\n" +
                             "Plant Health: " + Room_2_healthBar + "\r\n" +
                             "Plant Light: " + Room_2_lightBar + "\r\n" +
                             "Plant Water: " + Room_2_waterBar + "\r\n" +
                             "Plant nutrition: " + Room_2_nutriBar + "\r\n" +
                             "Room Number of Tasks: " + Room_2_numberOfTasksDone + "\r\n";

        string room_3_Stat = "Plant State: " + Room_3_state + "\r\n" +
                     "Plant Health: " + Room_3_healthBar + "\r\n" +
                             "Plant Light: " + Room_3_lightBar + "\r\n" +
                             "Plant Water: " + Room_3_waterBar + "\r\n" +
                             "Plant nutrition: " + Room_3_nutriBar + "\r\n" +
                     "Room Number of Tasks: " + Room_3_numberOfTasksDone + "\r\n";

        string room_4_Stat = "Plant State: " + Room_4_state + "\r\n" +
                     "Plant Health: " + Room_4_healthBar + "\r\n" +
                             "Plant Light: " + Room_4_lightBar + "\r\n" +
                             "Plant Water: " + Room_4_waterBar + "\r\n" +
                             "Plant nutrition: " + Room_4_nutriBar + "\r\n" +
                     "Room Number of Tasks: " + Room_4_numberOfTasksDone + "\r\n";


        string room_5_Stat = "number of cropped buds: " + number_of_CroppedBuds + "\r\n" +
                             "number of processed buds: " + number_of_ProcessedBuds;

        //Room1Text.text = room_1_Stat;
        //Room2Text.text = room_2_Stat;
        //Room3Text.text = room_3_Stat;
        //Room4Text.text = room_4_Stat;
        //Room5Text.text = room_5_Stat;


        //if (Input.GetKey(KeyCode.Tab))
        //{
        //    statsPanel.SetActive(true);
        //}
        //else
        //{
        //    statsPanel.SetActive(false);
        //}

    }



}
