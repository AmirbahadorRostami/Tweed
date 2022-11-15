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
    /// (Clone Stage to Vegetative) 
    /// Nutrients, water and lighting
    /// 
    /// Level 2 ? 4 Rooms(
    ///     2 x Clone Stage to Vegetative
    ///     2 x Vegetative to Flowering 
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
    /// 
    /// 
    /// 
    /// 
    /// </summary>


    private NetworkManager NM;
    
    public RoomManager [] Rooms;
    public PlantManager[] Plants = new PlantManager[4];

    public GameObject Grid;
    public GameObject ContinuePage;

    public int numberOfTasksDone = 0;

    //global time of the game
    public float time = 0f;
    public int level = 0;



    /// <summary>
    /// check the state of each plant in the rooms and based on the time rule and state rule determain
    /// if should progress to the next level or not
    /// 
    /// 
    /// rules for passing a level:
    /// 
    ///     1_ 2 plants go from seed to vegetative state with helath of 70% above and under 1 Minute Time
    ///     
    ///     2_ 4 Plants (2 x Vegetative to Flowering & 2 x Clone Stage to Vegetative) with health above 70% under 2 Minute
    ///     
    ///     3_ 4 Plants (2 x vegetative to processing & 2 x flowering to processing) with all plant health above 70% under 2 mintues
    /// 
    ///     
    ///     
    /// 
    /// number of tasks completed is used to calculate the score
    /// 
    /// 
    ///
    /// 
    /// 
    /// </summary>




    // Start is called before the first frame update
    void Awake()
    {
        NM = this.GetComponent<NetworkManager>();
        level = 1;

        for (int r = 0; r < Rooms.Length; r++)
        {
            Plants[r] = Rooms[r].Plant.GetComponent<PlantManager>();
            Debug.Log("Plant Manager regsitery point:  " + Plants[r].state);
        }


    }



    /// <summary>
    ///  
    /// in each frame check :
    ///     all plants state
    ///     all plants bars
    ///     all tasks done in each room
    ///     
    ///  
    /// 
    /// </summary>



    // Update is called once per frame
    void FixedUpdate()
    {

        time += Time.fixedDeltaTime;


        // room 1 and room 2 == level 1
        // room 3 and room 4 == level 2 
        //       room 5      == level 3
        float Room_1_healthBar = Plants[0].healthBar;
        float Room_2_healthBar = Plants[1].healthBar;
        float Room_3_healthBar = Plants[2].healthBar;
        float Room_4_healthBar = Plants[3].healthBar;

        // number of tasks done in room 1,2,3,4
        int Room_1_numberOfTasksDone = Rooms[0].numberOfTasksDone;
        int Room_2_numberOfTasksDone = Rooms[1].numberOfTasksDone;
        int Room_3_numberOfTasksDone = Rooms[2].numberOfTasksDone;
        int Room_4_numberOfTasksDone = Rooms[3].numberOfTasksDone;


        PlantManager.State Room_1_state = Plants[0].state;
        PlantManager.State Room_2_state = Plants[1].state;
        PlantManager.State Room_3_state = Plants[2].state;
        PlantManager.State Room_4_state = Plants[3].state;

        /*
            for (int r = 0; r < Rooms.Length; r++)
            {               
                Debug.Log(Rooms[r].name + " waterBar : " + waterBar);
                Debug.Log(Rooms[r].name + " nutriBar : " + nutriBar);
                Debug.Log(Rooms[r].name + " lightBar : " + lightBar);
                Debug.Log(Rooms[r].name + " Number of tasks done: " + Rooms[r].numberOfTasksDone);
            }

        */

        // if the plant state goals meets level requirements (passed rule two)
        // if the number of tasks needed to be done is reached
        // all rules apply within time limit


        switch (level)
        {
            case (1):



                // missing the Time rule
                if(
                    (Room_1_state == PlantManager.State.vegetative && Room_1_numberOfTasksDone < 5)
                    &&
                    (Room_2_state ==  PlantManager.State.vegetative && Room_2_numberOfTasksDone < 5)
                   )
                {
                    //level up
                    level++;

                    ContinuePage.SetActive(true);

                    // end of level stuff
                    Grid.transform.GetChild(1).gameObject.SetActive(true);
                }
                break;


            case (2):

                // missing the Time rule
                if (
                    (Room_1_state == PlantManager.State.flower && Room_1_numberOfTasksDone < 10)
                    &&
                    (Room_2_state == PlantManager.State.flower && Room_2_numberOfTasksDone < 10)                    
                    &&
                    (Room_3_state == PlantManager.State.vegetative && Room_2_numberOfTasksDone < 10)
                    &&
                    (Room_4_state == PlantManager.State.vegetative && Room_2_numberOfTasksDone < 10)
                   )
                {
                    //level up
                    level++;

                    ContinuePage.SetActive(true);
                    // end of level stuff
                    Grid.transform.GetChild(0).gameObject.SetActive(true);

                }

                break;
            case (3):

                // missing the Time rule
                if (
                    (Room_1_state == PlantManager.State.readyToProcess && Room_1_numberOfTasksDone < 20)
                    &&
                    (Room_2_state == PlantManager.State.readyToProcess && Room_2_numberOfTasksDone < 20)
                    &&
                    (Room_3_state == PlantManager.State.flower && Room_3_numberOfTasksDone < 20)
                    &&
                    (Room_4_state == PlantManager.State.flower && Room_4_numberOfTasksDone < 20)
                   )
                {
                    //level up
                    level++;

                    // end of level stuff


                }


                break;

        }

        //Debug.Log("the time is: "+ time);
        //Debug.Log(Time.fixedDeltaTime);
    }
}
