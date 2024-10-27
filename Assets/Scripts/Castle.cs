using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Castle : MonoBehaviour
{
  

    private void OnTriggerEnter(Collider other)
    {
       
        if (other.gameObject.tag == "Monster")
        {

            GameManager.instance.EndGame();
        }
        if(other.gameObject.tag == "NPC")
        {
            
            Destroy(other.gameObject);
           
            GameManager.instance.AddScore(5);
            UIManager.instance.NPCIN();
            SoundManager.instance.NPCINSound();
        }
    }
   

}
