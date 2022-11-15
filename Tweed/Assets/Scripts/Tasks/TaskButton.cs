using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TaskButton : MonoBehaviour
{
    public Sprite[] buttonPngs;

    //private string buttonType;
    public enum buttonType
    {
        idle,
        nutrient,
        water,
        light,
        process,
        wrench,
        trim,
        crop,

    }
    public buttonType BT;
    public Animator playerAnimator;

    private void Awake()
    {
        playerAnimator = GameObject.FindGameObjectWithTag("Player").GetComponentInChildren<Animator>();
    }

    public void setButtonType(buttonType target)
    {
        this.GetComponent<Button>().interactable = true;
        this.transform.GetChild(0).gameObject.SetActive(true);

        //switch (target)
        //{
        //    case (buttonType.idle):

        //        idleButton();

        //        break;


        //    case (buttonType.nutrient):
        //        setTypeTo("UI_nutrient_button");
        //        break;


        //    case (buttonType.water):
        //        Debug.Log("NEED WATER");
        //        setTypeTo("UI_water_button");
        //        break;


        //    case (buttonType.light):
        //        setTypeTo("UI_lighting_button");
        //        break;


        //    case (buttonType.trim):
        //        setTypeTo("UI_clip_button");
        //        break;


        //    case (buttonType.process):
        //        setTypeTo("UI_process_button");
        //        break;


        //    case (buttonType.crop):
        //        setTypeTo("UI_clip_button");
        //        break;


        //    case (buttonType.wrench):
        //        setTypeTo("UI_nutrient_lock_button");
        //        break;




        //}







    }

    public void idleButton()
    {
        this.GetComponent<Button>().interactable = false;
        this.transform.GetChild(0).gameObject.SetActive(false);

        //foreach (Sprite sprite in buttonPngs)
        //{
        //    if (sprite.name == "UI_button_idle")
        //    {
        //        this.GetComponent<Image>().sprite = sprite;
        //        break;

        //    }
        //}
    }

    public void clearButton()
    {
        AudioSource AS = this.GetComponentInChildren<AudioSource>();
        this.GetComponent<Button>().onClick.RemoveAllListeners();
        this.GetComponent<Button>().onClick.AddListener(delegate { playerAnimator.SetTrigger("Action"); });

        this.GetComponent<Button>().onClick.AddListener(delegate { AS.Play(); });
    }


    private void setTypeTo(string type)
    {
        foreach (Sprite sprite in buttonPngs)
        {
            if (sprite.name == type)
            {
                Debug.Log("FOUND PNG");
                this.GetComponent<Image>().sprite = sprite;
                

            }

            
            if (sprite.name == type + "_activate")
            {
                SpriteState spriteState = new SpriteState();
                spriteState = this.GetComponent<Button>().spriteState;

                spriteState.pressedSprite = sprite;

                this.GetComponent<Button>().spriteState = spriteState;

                break;
            }
        }
    }


}
