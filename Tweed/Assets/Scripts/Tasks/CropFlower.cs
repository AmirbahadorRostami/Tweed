using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CropFlower : MonoBehaviour
{
    public GameObject Task;

    public void Crop()
    {
       // Debug.Log("CROPPED ONE FLOWER");
        if (Task.GetComponent<CropTask>() != null)
        {
            Task.GetComponent<CropTask>().budTapped();
        }
        else
        {
            Task.GetComponent<TrimTask>().budTapped();
        }
        this.transform.parent.gameObject.SetActive(false);
        
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
