using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour
{
    private CharacterInput playerInput;
    private CharacterController controller;
    //private Vector3 playerVelocity;
    public float playerSpeed = 2.0f;
    private GameObject character;
    public bool Active { get; set; }
    //private float gravityValue = 0f;


    private void Awake()
    {

        
        playerInput = new CharacterInput();
        controller = GetComponent<CharacterController>();
        Active = true;
    }

    private void OnEnable()
    {
        playerInput.Enable();
    }

    private void OnDisable()
    {
        playerInput.Disable();
    }


    private void Start()
    {
        character = GameObject.Find("Character");
    }

    void Update()
    {
        if (Active)
        {
            transform.position = new Vector3(transform.position.x, transform.position.y, 0f);
            //groundedPlayer = controller.isGrounded;
            //if (groundedPlayer && playerVelocity.y < 0)
            //{
            //    playerVelocity.y = 0f;
            //}

            Vector2 movementInput = playerInput.Player.Move.ReadValue<Vector2>();
            Vector3 move = new Vector3(movementInput.x, movementInput.y, 0f);
            if (movementInput.x != 0 || movementInput.y != 0)
            {

                character.GetComponent<Animator>().SetBool("Walk", true);
                controller.Move(move * Time.deltaTime * playerSpeed);
                if (movementInput.x <= 0)
                {
                    character.GetComponent<SpriteRenderer>().flipX = true;
                }
                else
                {
                    character.GetComponent<SpriteRenderer>().flipX = false;
                }
            }
            else
            {
                character.GetComponent<Animator>().SetBool("Walk", false);
            }

            //if (move != Vector3.zero)
            //{
            //    //gameObject.transform.forward = move;
            //}

            //// Changes the height position of the player..
            //if (Input.GetButtonDown("Jump") && groundedPlayer)
            //{
            //    playerVelocity.y += Mathf.Sqrt(jumpHeight * -3.0f * gravityValue);
            //}

            //playerVelocity.y += gravityValue * Time.deltaTime;
            //controller.Move(playerVelocity * Time.deltaTime);
        }

    }
}
