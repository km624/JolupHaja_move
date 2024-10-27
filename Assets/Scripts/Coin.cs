using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour
{
    public Fading fade;
    float jisoktime = 3f;
     float time = 0;
    float blinktime = 0.15f;
    float xtime = 0;
     float waittime = 0.2f;

    public GameObject CoinParticle;
    public GameObject Canvas;

    private void Start()
    {
        fade=GetComponent<Fading>();
       fade.Fadingout();
    }

    private void Update()
    {
        if (time < jisoktime)
        {
            GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1);//처음엔 그대로

        }
        else 
        {
            if (xtime < blinktime) 
            {
               
                GetComponent<SpriteRenderer>().color = new Color(1, 1, 1, 1 - xtime * 10);
            }
            else
            {
                GetComponent<SpriteRenderer>().color =
                    new Color(1, 1, 1, (xtime - (waittime * blinktime)) * 10);
                
                if (xtime > waittime + blinktime * 2)
                {
                    xtime = 0;
                    waittime *= 0.8f; 
                    if (waittime < 0.02f)
                    {
                        time = 0;
                        waittime = 0.2f;
                       Destroy(gameObject);
                    }
                }
            }
            xtime += Time.deltaTime;
        }
        time += Time.deltaTime;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            
            GameObject b = Instantiate(CoinParticle);
            Canvas = GameObject.Find("Canvas");
            b.transform.SetParent(Canvas.transform, false);
            b.transform.position = other.transform.position + new Vector3(0,0.7f,0f);
            SoundManager.instance.CoinSound("Eat");
            GameManager.instance.AddCoin(1);
            Destroy(gameObject);
        }
    }
}
