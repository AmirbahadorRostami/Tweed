using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lighter : MonoBehaviour
{
    AudioSource AS;
    // Start is called before the first frame update
    void Start()
    {
        AS = this.GetComponentInChildren<AudioSource>();
    }

    public void PlayAudio()
    {
        AS.Play();
    }
}
