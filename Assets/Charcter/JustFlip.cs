using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JustFlip : MonoBehaviour
{
    SpriteRenderer Sprite;
    public bool flip;
    // Start is called before the first frame update
    void Start()
    {
        Sprite = GetComponent<SpriteRenderer>();

        StartCoroutine(Flips());

    }
    IEnumerator Flips()
    {
        while (true)
        {
            yield return new WaitForSeconds(Random.Range(2f, 3f));

            if (!flip)
            {
                Sprite.flipX = true;
                flip = true;
            }
            else
            {
                Sprite.flipX = false;
                flip = false;
            }

        }
       
    }
    

   
}
