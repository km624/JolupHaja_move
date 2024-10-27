using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpandDownMonsterAI : MonoBehaviour
{
   
    public bool Up;
    public bool Down;
    public MonsterAI monster;
    public bool touchLadder;
    // Start is called before the first frame update

    private void OnDisable()
    {
        Up = false;
        Down = false;
        touchLadder = false;
    }
    private void OnTriggerEnter(Collider collision)
    {
       
        if (collision.gameObject.tag == "Ladder")
        {
           
            if (collision.gameObject.name == "UpPoint")
            {
                if (!Down)
                {
                    if (monster.RandomLadder)
                    {
                        touchLadder = true;
                        Up = true;
                        monster.colli.isTrigger = true;
                        monster.Rigidbody.useGravity = false;
                    }

                }
                else
                {
                    touchLadder = false;
                    Down = false;
                    monster.colli.isTrigger = false;
                    monster.Rigidbody.useGravity = true;
                   
                }

            }
            else if (collision.gameObject.name == "DownPoint")
            {
                if (!Up)
                {
                    if (monster.RandomLadder)
                    {
                        touchLadder = true;
                        Down = true;
                        monster.colli.isTrigger = true;
                        monster.Rigidbody.useGravity = false;
                    }
                    
                }
                else
                {
                    
                    touchLadder = false;
                    Up = false;
                    monster.colli.isTrigger = false;
                    monster.Rigidbody.useGravity = true;
                   
                }
            }


        }

    }
   

}
