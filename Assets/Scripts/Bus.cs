using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using static UnityEngine.UI.Image;


public class Bus : MonoBehaviour
{
    public SpriteRenderer spriteRenderer;
    public Transform bus;
    public AudioClip open;
    bool dont;
    public bool go;
    bool opening;
    Vector3 velo = Vector3.zero;
     float smoothTime = 0.4f;
   

    

    IEnumerator SmoothCoroutine(Vector3 current, Vector3 target, float time)
    {
       
            Vector3 velocity = Vector3.zero;

        bus.transform.position = current;
        float offset = 0.01f;

        while (Mathf.Abs(bus.transform.position.x - target.x) >= offset)
        {
            
            bus.transform.position
                = Vector3.SmoothDamp(bus.transform.position, target, ref velocity, time);

            yield return null;
        }
        Debug.Log("end");
        bus.transform.position = target;

        yield return null;
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "NPC" || other.gameObject.tag == "Monster")
        {
            dont = true;
            if (!opening)
            {
                StopAllCoroutines();
                if (spriteRenderer.flipX)
                    StartCoroutine(
                SmoothCoroutine(bus.position,new Vector3(3.8f, bus.position.y, 0), smoothTime));
                else
                    StartCoroutine(SmoothCoroutine(bus.position, new Vector3(-3.8f, bus.position.y, 0), smoothTime));
               
                opening = true;
                SoundManager.instance.DoorOpen(open);
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
            StopAllCoroutines();
            if (spriteRenderer.flipX)
                StartCoroutine(SmoothCoroutine(bus.position, new Vector3(5f, bus.position.y, 0), smoothTime));
            else
                StartCoroutine(SmoothCoroutine(bus.position, new Vector3(-5f, bus.position.y, 0), smoothTime));

        }

        opening = false;

    }

}
