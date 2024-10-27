using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{
    SpriteRenderer spriteRenderer;
    public GameObject opendoorPrefab;
    public AudioClip open;
    bool dont;
   public bool go;
    bool opening;

    private void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "NPC" || other.gameObject.tag == "Monster")
        {
            dont = true;
            spriteRenderer.enabled = false;
            opendoorPrefab.SetActive(true);
            if(!opening)
            {
                SoundManager.instance.DoorOpen(open);
                opening = true;

            }
   
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "NPC" || other.gameObject.tag == "Monster")
        {
            dont = false;
            StartCoroutine(Wait());
            


        }
       
    }
    private IEnumerator Wait()
    {
        yield return new WaitForSeconds(1f);
        if (!dont)
        {
            spriteRenderer.enabled = true;
            opendoorPrefab.SetActive(false);

        }
        
        opening = false;

    }

}
