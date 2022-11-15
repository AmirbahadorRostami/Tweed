using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ContinueLevel : MonoBehaviour
{

    public Button CashOut;

    GameManager GM;

    private void Awake()
    {
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
    }



    void OnEnable()
    {
        Animator animator = this.GetComponent<Animator>();
        animator.SetTrigger("Activate");


        if (GM.practiceMode)
        {
            CashOut.interactable = false;
        }

    }

}
