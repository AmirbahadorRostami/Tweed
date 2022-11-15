using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sprinkler : MonoBehaviour
{
    AudioSource AS;
    // Start is called before the first frame update
    void Start()
    {
        AS = this.GetComponentInChildren<AudioSource>();   
    }

    public void PlayAudio()
    {
        AS.time = 2.5f;
        AS.Play();
    }


}
