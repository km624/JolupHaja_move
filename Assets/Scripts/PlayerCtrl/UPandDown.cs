using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UPandDown : MonoBehaviour
{
    
    public bool Up;
    public bool Down;

    public CharacterController Controller;

    public int Player;
    public int Ground;
    // Start is called before the first frame update

    private void Awake()
    {
        Player = LayerMask.NameToLayer("player");
        Ground = LayerMask.NameToLayer("ground");
    }
    private void Start()
    {
        
        Physics.IgnoreLayerCollision(Player, Ground, false);
        Up = false;
        Down = false;
        
    }
    private void OnTriggerEnter(Collider collision)
    {
       
        if (collision.gameObject.tag == "Ladder")
        {
            if (collision.gameObject.name == "UpPoint")
            {
                if (!Down && Controller.isGrounded)
                {
                    Up = true;
                    Physics.IgnoreLayerCollision(Player, Ground, true);

                }
                else
                {

                    Down = false;
                    Physics.IgnoreLayerCollision(Player, Ground, false);
                }

            }
            else if (collision.gameObject.name == "DownPoint")
            {
                if (!Up && Controller.isGrounded)
                {
                    Down = true;
                    Physics.IgnoreLayerCollision(Player, Ground, true);


                }
                else
                {

                    Up = false;
                    Physics.IgnoreLayerCollision(Player, Ground, false);
                }
            }


        }

    }

}

