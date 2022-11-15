using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WateringTask : MonoBehaviour
{
    /// <summary>
    /// Tapp the valve to rotate to the right amount
    /// 
    /// 3 turn 
    /// 
    /// 5 turn
    /// 
    /// 7 turn
    /// 
    /// </summary>


    GameObject waterValve;

 
    private bool turn = false;
    public int turnCount;
    public int goalTurn = 1;

    public float Duration = 15f;
    public Button turnButton;

    private GameManager GM;
    private RoomManager RM;

    public  GameObject Button;
    public GameObject results;
    private TaskType taskType = TaskType.water;

    private float spinned = 0;
    private float minSpinSpeed = 3f;
    public float speedMultiplier = 4f;
    float spinSpeed = 0;
    float degree = 0;

    public void SetRoom(RoomManager room)
    {
        RM = room;
        goalTurn = Random.Range(1, 3);

        //Debug.Log(this.gameObject.name + " the goal result is set to: " + goalTurn);

    }

    private void Awake()
    {
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
        waterValve = this.transform.Find("waterValve").gameObject;
    }



    private void Update()
    {
        if (turn)
        {
            Button.SetActive(false);
            KeepTurning();
        }
        else
        {
            Button.SetActive(true);
        }

    }

    void KeepTurning()
    {

        spinSpeed = minSpinSpeed + (degree - spinned) / degree * minSpinSpeed * speedMultiplier;

        if (spinned >= degree)
        {

            waterValve.transform.eulerAngles = new Vector3(0, 0, 0);

            spinSpeed = 0;
            turn = false;
            if(turnCount >= goalTurn)
            {
                turnButton.interactable = false;

                results.SetActive(true);
                Invoke("taskDone", 0.5f);
               
            }
            else
            {
                results.SetActive(false);
            }
            



        }

        else
        {

            waterValve.transform.RotateAround(waterValve.transform.position, Vector3.forward, spinSpeed);
        }

        spinned += spinSpeed;


    }

    private void OnEnable()
    {
        turnButton.interactable = true;
        GM.inTask = true;
        Reset();
    }

    public void turnValve()
    {
        turn = true;
        spinned = 0f;
        Spin();
    }

    public void taskDone()
    {

        //Debug.Log("cycle set to end the task at: " + (GM.time + Duration));
        GM.inTask = false;
        RM.startCycle(Duration, taskType);
        this.gameObject.SetActive(false);
       
    }

    public void Spin()
    {

        SpinOneRound();
    }

    public void Reset()
    {
        results.SetActive(false);
        spinned = 0f;
        turnCount = 0;
    }

    public void SpinOneRound()
    {
        turnCount++;
        degree = 360f;
        turn = true;
        
            
    }

}
