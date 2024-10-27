using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TypeEffect : MonoBehaviour
{
    public Text[] text;
    public List<string> dialog;
 
    int count;

    public GameObject CoinDoubleButton;
    public GameObject CoinParticle;
    public Transform canvas;


    public void typeStart()
    {
       
            dialog.Add("Score");
            dialog.Add(GameManager.instance.score.ToString());
            dialog.Add("MaxScore");
            dialog.Add(DataStruct.instance.maxscore.ToString());
            dialog.Add("Coin");
            dialog.Add("+" + GameManager.instance.coining.ToString());
            StartCoroutine(Typing(dialog[0]));
        
      
    }
    public void Skip()
    {
        StopAllCoroutines();
        for (int i = 0; i < text.Length; i++)
        {
            text[i].text = dialog[i];

        }
        if (GameManager.instance.doublecoin)
            CoinDoubleButton.SetActive(true);

    }
    void NextTalk()
    {
        count++;
        if(count == text.Length)
        {
            if(GameManager.instance.doublecoin)
                CoinDoubleButton.SetActive(true);
            return;
        }
        StartCoroutine(Typing(dialog[count]));
    }
    IEnumerator Typing(string talk)
    {
        text[count].text = null;
       
        for(int i=0;i<talk.Length;i++)
        {
            text[count].text+=talk[i];
            SoundManager.instance.UiSound("Typing");
            yield return new WaitForSeconds(0.1f);
            
        }
        NextTalk();

    }

    public void UnlockCoinParticle()
    {
        DataStruct.instance.coin += GameManager.instance.coining;
        //하고 저장
        AllSaveLoad.instance.JsonSave();
        GameObject b = Instantiate(CoinParticle, CoinDoubleButton.transform.position, Quaternion.identity, canvas);
        
        UnlockCoinText(GameManager.instance.coining * 2, GameManager.instance.coining);
        SoundManager.instance.UiSound("Buy");

        
    }

    public void UnlockCoinText(float target, float current)
    {
        StartCoroutine(Count(target, current));
    }
    IEnumerator Count(float target, float current)
    {
        float duration = 0.5f; // 카운팅에 걸리는 시간 설정. 
        float offset = (target-current) / duration;

        while (target > current)
        {
            current += offset * Time.deltaTime;

            text[5].text = "+" +((int)current).ToString();
            yield return null;
        }

        current = target;
        text[5].text = "+" + ((int)current).ToString();

    }
}
