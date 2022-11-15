using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{
    private GameObject obstacle;
    Animator animator;
    AudioSource AS;
    public bool opens = false;
    // Start is called before the first frame update
    void Start()
    {
        AS = this.GetComponentInChildren<AudioSource>();
        animator = this.GetComponent<Animator>();
        obstacle = this.transform.GetChild(0).gameObject;
    }


    private void OnTriggerEnter(Collider other)
    {
        if (opens)
        {
            animator.SetBool("Open", true);

        }
    }


    private void OnTriggerExit(Collider other)
    {
        if (opens)
        {
            animator.SetBool("Open", false);

        }
    }


    public void Open()
    {
        AS.Play();
        obstacle.SetActive(false);
    }


    public void Close()
    {
        AS.Play();

        obstacle.SetActive(true);
    }
}
