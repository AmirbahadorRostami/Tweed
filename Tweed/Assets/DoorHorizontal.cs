using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoorHorizontal : MonoBehaviour
{
    private GameObject obstacle;
    Animator animator;
    AudioSource AS;
    public bool opens = false;
    public Sprite openSprite;
    public Sprite closeSprite;

    // Start is called before the first frame update
    void Awake()
    {
        obstacle = this.transform.GetChild(0).gameObject;
    }
    public void Open()
    {
        this.gameObject.GetComponent<SpriteRenderer>().sprite = openSprite;
        obstacle.SetActive(false);
    }

    public void close()
    {
        this.gameObject.GetComponent<SpriteRenderer>().sprite = closeSprite;
        obstacle.SetActive(true);
    }

}
