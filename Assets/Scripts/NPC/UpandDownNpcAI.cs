using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpandDownNpcAI : MonoBehaviour
{
   
    
    public bool Down;
    public NPCAI npc;
    public bool touchLadder;
    // Start is called before the first frame update
   
    private void OnTriggerEnter(Collider collision)
    {
       
        if (collision.gameObject.tag == "Ladder")
        {
            if (collision.gameObject.name == "UpPoint")
            {
                if (Down)
                {
                    touchLadder = false;
                    Down = false;
                    npc.colli.isTrigger = false;
                    npc.Rigidbody.useGravity = true;
                }

            }
            else if (collision.gameObject.name == "DownPoint")
            {
                if (npc.RandomLadder)
                {
                    touchLadder = true;
                    Down = true;
                    npc.colli.isTrigger = true;
                    npc.Rigidbody.useGravity = false;
                }
            }
        }
    }
}
