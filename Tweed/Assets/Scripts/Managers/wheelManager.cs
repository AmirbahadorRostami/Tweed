using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wheelManager : MonoBehaviour
{

    GameManager GM;

    private void Start()
    {
        GM = GameObject.FindGameObjectWithTag("Managers").GetComponent<GameManager>();
    }

    public void openWheel()
    {
        this.transform.GetChild(GM.wheelNum-1).gameObject.SetActive(true);
    }
}
