using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using UnityEngine.UI;

public class Fading : MonoBehaviour
{
    [SerializeField]
    [Range(0.01f, 10f)]
    private float fadetime;
   

    [SerializeField]
    private AnimationCurve fadecurve;
     //public GameObject gameobject;
    public SpriteRenderer spriteRenderer;


    public void Awake()
    {
       
       //spriteRenderer =gameObject.GetComponent<SpriteRenderer>();
    }
    public void Fadings()
    {
        StartCoroutine(fade(1, 0));
    }

    private IEnumerator fade(float start,float end)
    {
        float currentTime = 0.0f;
        float percent = 0.0f;
        while (percent < 1)
        {
           
            currentTime += Time.deltaTime;
            percent = currentTime / fadetime;

            Color color = spriteRenderer.material.color;
            
            color.a = Mathf.Lerp(start, end, fadecurve.Evaluate(percent));
            spriteRenderer.material.color = color;
            yield return null;

        }
        Destroy(gameObject);
    }

    public void Fadingout()
    {
        StartCoroutine(fadeout(0,1));
    }

    private IEnumerator fadeout(float start, float end)
    {
        float currentTime = 0.0f;
        float percent = 0.0f;
        while (percent < 1)
        {

            currentTime += Time.deltaTime;
            percent = currentTime / fadetime;

            Color color = spriteRenderer.material.color;

            color.a = Mathf.Lerp(start, end, fadecurve.Evaluate(percent));
            spriteRenderer.material.color = color;
            yield return null;

        }
    }


}
