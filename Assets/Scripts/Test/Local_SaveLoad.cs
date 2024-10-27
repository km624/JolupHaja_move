using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using EasyTransition;
using UnityEngine.SceneManagement;
using System;

/*[System.Serializable]
public class SaveData
{
    public Name currentCharcter;
    public List<Name> unlocked=new List<Name>();
    public Maps currentMap;
    public List<Maps> unlockedMap =new List<Maps>();
    

    public int maxscore;
    public int coin;
    public bool gamespeed;
    public bool Sound;
    public bool Vibrate;
    public bool Effect;
    public DateTime date;
}*/

public class Local_SaveLoad : MonoBehaviour
{
    public static Local_SaveLoad instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<Local_SaveLoad>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }

    private static Local_SaveLoad m_instance;
    string path;

    public TransitionSettings transition;
     float startDelay;
    private void Awake()
    {
        if (instance != this)
        {
            // 자신을 파괴
            Destroy(gameObject);
        }
        DontDestroyOnLoad(this.gameObject);



    }
    void Start()
    {
       
#if UNITY_ANDROID && !UNITY_EDITOR

                path = Path.Combine(Application.persistentDataPath, "Pixel_savedata.json");
                JsonLoad();
#else
            //path = Path.Combine(Application.persistentDataPath, "Pixel_savedata.json");
            path = Path.Combine(Application.dataPath+ "/TestSave/", "Pixel_savedata.json");
        JsonLoad();
#endif
    }

    public void JsonLoad()
    {
        SaveData saveData = new SaveData();

        if (!File.Exists(path))
        {
            
            DataStruct.instance.maxscore = 5;
            DataStruct.instance.coin = 700;
            DataStruct.instance.currentCharcter = Name.Normal;
            DataStruct.instance.currentMap = Maps.Normal;
            DataStruct.instance.unlocked.Add(Name.Normal);
            DataStruct.instance.unlockedMap.Add(Maps.Normal);
            DataStruct.instance.gamespeed = false;
            DataStruct.instance.Sound = true;
            DataStruct.instance.Vibrate = true;
            DataStruct.instance.Effect = true;
            DataStruct.instance.username = Social.localUser.userName;
            //DataStruct.instance.date = DateTime.Now.ToString();
            JsonSave();
        }
        else
        {
            string loadJson = File.ReadAllText(path);
            string decypt = AesEncrypt.AESDecrypt128(loadJson,"nghy23@gmail.com");
            saveData = JsonUtility.FromJson<SaveData>(decypt);

            if (saveData != null)
            {
                DataStruct.instance.unlocked.Clear();
                DataStruct.instance.unlockedMap.Clear();

                for (int i = 0; i < saveData.unlocked.Count; i++)
                {
                    
                    DataStruct.instance.unlocked.Add(saveData.unlocked[i]);
                }
                for (int i = 0; i < saveData.unlockedMap.Count; i++)
                {
                    DataStruct.instance.unlockedMap.Add(saveData.unlockedMap[i]);
                }
                DataStruct.instance.currentCharcter =saveData.currentCharcter;
                DataStruct.instance.currentMap = saveData.currentMap;
                DataStruct.instance.maxscore = saveData.maxscore;
                DataStruct.instance.coin = saveData.coin;
                DataStruct.instance.gamespeed = saveData.gamespeed;
                DataStruct.instance.Sound = saveData.Sound;
                DataStruct.instance.Vibrate = saveData.Vibrate;
                DataStruct.instance.Effect = saveData.Effect;
                DataStruct.instance.username = saveData.username;
                //DataStruct.instance.date = saveData.date;
            }
            Debug.Log("Load");
        }
    }

    public void JsonSave()
    {
        SaveData saveData = new SaveData();

       for (int i = 0; i < DataStruct.instance.unlocked.Count; i++)
        {
            saveData.unlocked.Add(DataStruct.instance.unlocked[i]);
        }

        for (int i = 0; i < DataStruct.instance.unlockedMap.Count; i++)
        {
            saveData.unlockedMap.Add(DataStruct.instance.unlockedMap[i]);
        }
        saveData.currentMap = DataStruct.instance.currentMap;
        saveData.currentCharcter = DataStruct.instance.currentCharcter;
        
        saveData.coin = DataStruct.instance.coin;
        saveData.maxscore = DataStruct.instance.maxscore;
        saveData.gamespeed= DataStruct.instance.gamespeed;
        saveData.Sound= DataStruct.instance.Sound;
        saveData.Vibrate= DataStruct.instance.Vibrate;
        saveData.Effect= DataStruct.instance.Effect;
        saveData.username = DataStruct.instance.username;
        //saveData.date= DataStruct.instance.date;


        string json = JsonUtility.ToJson(saveData, true);
        string Encrypt = AesEncrypt.AESEncrypt128(json, "nghy23@gmail.com");
        File.WriteAllText(path, Encrypt);
       
        
    }
    public void JsonDelete()
    {

        File.Delete(path);
        DataStruct.instance.Destroy();
        Destroy(gameObject);
        
        TransitionManager.Instance().Transition("Loading", transition, startDelay);
    }
}
