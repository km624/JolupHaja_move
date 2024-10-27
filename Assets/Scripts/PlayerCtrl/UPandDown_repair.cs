using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.PixelHeroes.Scripts.ExampleScripts;

public class UPandDown_repair: MonoBehaviour
{
    
    public bool Up;
    public bool Down;

    public CharacterMove_repair Controller;

    public int Player;
    public int Ground;
    // Start is called before the first frame update
    public bool Wait;
    private void Awake()
    {
        Player = LayerMask.NameToLayer("player");
        Ground = LayerMask.NameToLayer("ground");
    }
    private void Start()
    {
        Controller.rigidbodys.useGravity = true;
        Physics.IgnoreLayerCollision(Player, Ground, false);
        Up = false;
        Down = false;
        
    }
    private void FixedUpdate()
    {
        if (Down && Controller.isground)
        {
            Wait = true;
            Debug.Log("normal bug");
            Controller.rigidbodys.useGravity = false;
            Physics.IgnoreLayerCollision(Player, Ground, true);
        }
    }

    private void OnTriggerEnter(Collider collision)
    {
       
        if (collision.gameObject.tag == "Ladder")
        {
            if (collision.gameObject.name == "UpPoint")
            {
                if (!Down && Controller.isground&&!Wait)
                {
                    Wait = true;
                    Up = true;
                    Controller.rigidbodys.useGravity = false;
                    Physics.IgnoreLayerCollision(Player, Ground, true);

                }
              
                else
                {
                    StartCoroutine(HoldWait());
                    Down = false;
                    Controller.rigidbodys.useGravity = true;
                    Physics.IgnoreLayerCollision(Player, Ground, false);
                }

            }
            else if (collision.gameObject.name == "DownPoint")
            {
                if (!Up && Controller.isground && !Wait)
                {
                    Wait = true;
                    Down = true;
                    Controller.rigidbodys.useGravity = false;
                    Physics.IgnoreLayerCollision(Player, Ground, true);


                }
                /*else if (Down&& Controller.isground )
                {
                    Debug.Log("col bug");
                    Controller.rigidbodys.useGravity = false;
                    Physics.IgnoreLayerCollision(Player, Ground, true);
                }*/
                else
                {
                    StartCoroutine(HoldWait());
                    Up = false;
                    Controller.rigidbodys.useGravity = true;
                    Physics.IgnoreLayerCollision(Player, Ground, false);
                }
            }


        }

    }
    IEnumerator HoldWait()
    {
        
        yield return new WaitForSeconds(0.6f);
        Wait = false;
    }

}

