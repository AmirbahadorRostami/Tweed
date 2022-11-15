using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndingScreen : MonoBehaviour
{


    void OnEnable()
    {
        Animator animator = this.GetComponent<Animator>();
        animator.SetTrigger("Activate");
    }

    public void SetGrade(List <Bud> buds)
    {
        float avgHealth = 0;
        foreach(Bud bud in buds)
        {
            avgHealth += bud.health;
        }
        avgHealth = avgHealth / buds.Count;

        GameObject grade = this.transform.GetChild(0).gameObject.transform.GetChild(0).gameObject;

        if (avgHealth > 90f)
        {
            grade.transform.GetChild(0).gameObject.SetActive(true);
        }

        else if (avgHealth > 80f)
        {
            grade.transform.GetChild(1).gameObject.SetActive(true);
        }

        else if (avgHealth > 60f)
        {
            grade.transform.GetChild(2).gameObject.SetActive(true);
        }

        else
        {
            grade.transform.GetChild(3).gameObject.SetActive(true);
        }

    }
}
