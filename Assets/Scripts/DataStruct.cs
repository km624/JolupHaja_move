using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public enum Name
{
     Normal,Armor,Mine,Death,Hammer,Student,Viking,Lizard,JangGoon,Neru,Satto,Ujin,
     Devil,Pencing,DarkMagic,Pumpkin,Santa
}
public enum Maps
{
    Normal, Dark,Corea,Develop,Daejin
}
public class DataStruct : MonoBehaviour
{
    public static DataStruct instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<DataStruct>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }
  
    private static DataStruct m_instance; // 싱글톤이 할당될 static 변수
    
   
   
    public int maxscore;
    public int coin;
   
    public bool gamespeed;
    public Name currentCharcter;
    public List<Name> unlocked;
    public Maps currentMap;
    public List<Maps> unlockedMap;
    public bool Sound;
    public bool Vibrate;
    public bool Effect;
    public String username;
    //public String version;

    public bool Fps;
    public bool First;
   

    private void Awake()
    {
        if (instance != this)
        {
            // 자신을 파괴
            Destroy(gameObject);
        }
        DontDestroyOnLoad(this.gameObject);

        
    
    }

   
    public void Destroy()
    {
        Destroy(gameObject);
    }
}
