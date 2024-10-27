using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using DanielLochner.Assets.SimpleScrollSnap;
using EasyTransition;
using Lean.Gui;

public class SelectManager : MonoBehaviour
{
     
    public static SelectManager instance
    {
        get
        {
            if (m_instance == null)
            {
                m_instance = FindObjectOfType<SelectManager>();
            }

            return m_instance;
        }
    }
   
    private static SelectManager m_instance;
    public ChracterName[] chracterNames;
    public MapName[] mapNames;
    
    public SimpleScrollSnap snap;
    public SimpleScrollSnap msnap;

    public Text Coin;
    //public GameObject NoCoin;
    
    public GameObject unlockpopup;
    public GameObject mapunlockpopup;
    public GameObject CoinParticle;
    public Transform canvas;

    public TransitionSettings transition;
    float startDelay=0f;
    public LeanWindow coinwindow;
    public LeanWindow notunlockwindow;

    bool isok;
    bool misok;
   
    

    
     void Start()
    {
       
        Time.timeScale = 1f;
        SnapPosition();
        Coin.text = DataStruct.instance.coin.ToString();

    }
    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            BacktoGame();
        }
    }
    void SnapPosition()
    {
       for(int i = 0; i < chracterNames.Length; i++)
        {
            if (chracterNames[i].CharacterName == DataStruct.instance.currentCharcter)
            {
                
                snap.StartingPanelChange(i);
                break;
            }
        }
        for (int i = 0; i < mapNames.Length; i++)
        {
            if (mapNames[i].mapname == DataStruct.instance.currentMap)
            {
                msnap.StartingPanelChange(i);
                break;
            }
        }
    }
    
    public void Selected()
    {
        
        foreach (ChracterName chracterName in chracterNames)
        {
            
            if (chracterName.transform.position.x < 0.6 && chracterName.transform.position.x > -0.6)
            {
                if(DataStruct.instance.Vibrate)
                    Vibration.CreateOneShot(100, 50);
                Debug.Log(chracterName.CharacterName);
                DataStruct.instance.currentCharcter = chracterName.CharacterName;
            }

        }
    }
    public void MapSelected()
    {

        foreach (MapName mapName in mapNames)
        {
           
            if (mapName.transform.position.x < 0.6 && mapName.transform.position.x > -0.6)
            {
                if (DataStruct.instance.Vibrate)
                    Vibration.CreateOneShot(100, 50);
                Debug.Log(mapName.mapname);
                DataStruct.instance.currentMap = mapName.mapname;
            }

        }
    }

    public void unlocking()
    {
        foreach (ChracterName chracterName in chracterNames)
        {
            if (DataStruct.instance.currentCharcter == chracterName.CharacterName)
            {
                if (DataStruct.instance.coin >= chracterName.price)
                {
                   UnlockCoinText(DataStruct.instance.coin - chracterName.price, DataStruct.instance.coin);
                    DataStruct.instance.coin -= chracterName.price;
                    Debug.Log("unlock");
                    DataStruct.instance.unlocked.Add(chracterName.CharacterName);
                    chracterName.unlocked();

                    //로컬json 저장
                    AllSaveLoad.instance.JsonSave();

                    unlockpopup.SetActive(false);
                    SoundManager.instance.UiSound("Buy");
                    UnlockCoinParticle();
                }
                else
                {
                    coinwindow.TurnOn();
                    unlockpopup.SetActive(false);
                }
            }
        }
  
    }
    public void MapUnlocking()
    {
        foreach (MapName mapName in mapNames)
        {
            if (DataStruct.instance.currentMap == mapName.mapname)
            {
                if (DataStruct.instance.coin >= mapName.price)
                {
                    UnlockCoinText(DataStruct.instance.coin - mapName.price, DataStruct.instance.coin);
                    DataStruct.instance.coin -= mapName.price;
                    Debug.Log("unlock");
                    DataStruct.instance.unlockedMap.Add(mapName.mapname);
                    mapName.unlocked();

                    //로컬json 저장
                    AllSaveLoad.instance.JsonSave();

                    mapunlockpopup.SetActive(false);
                    SoundManager.instance.UiSound("Buy");
                    UnlockCoinParticle();
                }
                else
                {
                   
                    coinwindow.TurnOn();
                    mapunlockpopup.SetActive(false);
                }
            }
        }

    }
    void UnlockCoinParticle()
    {
        GameObject b = Instantiate(CoinParticle, new Vector3(0, 0,0), Quaternion.identity, canvas);

    }

    public void UnlockCoinText(float target, float current)
    {
        StartCoroutine(Count(target,current));
    }
    IEnumerator Count(float target, float current)
    {
        float duration = 0.5f; // 카운팅에 걸리는 시간 설정. 
        float offset = (current - target) / duration; 

        while (target < current)
        {
            current -= offset * Time.deltaTime;
           
            Coin.text = ((int)current).ToString();
            yield return null;
        }

        current = target;
        Coin.text = ((int)current).ToString();

    }

    public void UnlockPopUpShow()
    {
        unlockpopup.SetActive(true);

    }
    public void UnlockPopUpDown()
    {
        unlockpopup.SetActive(false);
    }
    public void MapUnlockPopUpShow()
    {
        mapunlockpopup.SetActive(true);

    }
    public void MapUnlockPopUpDown()
    {
        mapunlockpopup.SetActive(false);
    }

   

    public void BacktoGame()
    {
        
        foreach (ChracterName chracterName in chracterNames)
        {
            if (DataStruct.instance.currentCharcter == chracterName.CharacterName)
            {
                if (chracterName.unlock)
                    isok = true;
                else
                {
                    isok = false;
                }
            }
        }
        foreach (MapName mapName in mapNames)
        {
            if (DataStruct.instance.currentMap == mapName.mapname)
            {
                if (mapName.unlock)
                    misok = true;
                else
                {
                    misok = false;
                }
            }
        }
        if (misok&&isok)
        {
            //SceneManager.LoadScene("Main");
            SoundManager.instance.UiSound("Button");

            //로컬json 저장
            AllSaveLoad.instance.JsonSave();

            TransitionManager.Instance().Transition("Main", transition, startDelay);
        }
        else
        {
            notunlockwindow.TurnOn(); 
        }

    }

}
