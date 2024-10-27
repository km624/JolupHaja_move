using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using EasyTransition;
using UnityEngine.SceneManagement;
using System;
using Firebase.Database;
using Firebase.Extensions;

using GooglePlayGames;


[System.Serializable]
public class SaveData
{
    public Name currentCharcter;
    public List<Name> unlocked = new List<Name>();
    public Maps currentMap;
    public List<Maps> unlockedMap = new List<Maps>();


    public int maxscore;
    public int coin;
    public bool gamespeed;
    public bool Sound;
    public bool Vibrate;
    public bool Effect;
   
    public string username;
    
 
}

public class AllSaveLoad : MonoBehaviour
{
    public static AllSaveLoad instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<AllSaveLoad>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }

    private static AllSaveLoad m_instance;
    string path;
    string FBJson;
    

    bool FBcheck;
    bool FBcheckComplete;
   
    bool VersionCheckComplete;
    bool Select;
    public bool Disconnect;
    public bool WaitConnect;
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

        path = Path.Combine(Application.persistentDataPath, "savedata.json");
                
#else
        
        path = Path.Combine(Application.dataPath + "/TestSave/", "savedata.json");
       
#endif
    }
    
    
    public IEnumerator order()
    {
        yield return new WaitForSeconds(0.2f);
        yield return StartCoroutine("Check");
        if (!Disconnect)
        {
            yield return StartCoroutine("VersionCheck");
            TextLoading.instance.Write("버전 체크중");
            while (!VersionCheckComplete)
                yield return null;
            yield return StartCoroutine("FBJsonCheck");
            TextLoading.instance.Write("데이터 불러오는중");
            while (!FBcheckComplete)
                yield return null;

        }
        
        yield return StartCoroutine("JsonLoadCheck");
   
        yield return new WaitForSeconds(0.3f);
        Debug.LogWarning("넘어가기전");
        if (!Select)
            yield return StartCoroutine("ToTheMain");


    }
    public void VersionCheck()
    {
        Debug.LogWarning("버전확인중");
        FirebaseDatabase.DefaultInstance
         .GetReference("")
         .GetValueAsync().ContinueWithOnMainThread(task => {
             if (task.IsFaulted)
             {
                 Debug.LogWarning("데이터베이스 불러오지도 못함 실패");

             }
             else if (task.IsCompleted)
             {

                 DataSnapshot snapshot = task.Result;
                 snapshot.GetRawJsonValue();

                 foreach (DataSnapshot data in snapshot.Children)
                 {
                    
                     if (data.Key.Equals("Version"))
                     {
                        
                         Debug.LogWarning(data.Value);
                         Debug.LogWarning("버전 체크");
                         if (data.Value.ToString() != Application.version)
                         {
                             LoadingCloudModal.instance.NeedUpdate();
                             return;
                         }
                             
                         
                     }

                 }
                 Debug.LogWarning("버전확인완료");
                VersionCheckComplete = true;

             }
         });



    }

    public void JsonLoadCheck()
    {
        Debug.LogWarning("3번째 시작");
        SaveData saveData = new SaveData();
        Check();
      

        //네트워크 연결 x 
        if (Disconnect)
        {
           
            //파일 없을때
            if (!File.Exists(path))
            {
                NEWLoad();
            }
            //파일 있을 때
            else
            {
                string loadJson = File.ReadAllText(path);
                //JsonLoad(loadJson);
                LocalLoad();
            }
        }

        //네트워크 O
        else
        {
       
            Debug.LogWarning("3번째: 네트워크 o");
            //클라우드에 정보있음
            if (FBcheck)
            {
                Debug.LogWarning("클라우드 데이터 있는데...");
                //파일x -> 클라우드 로드 , 로컬 최신화
                if (!File.Exists(path))
                {
                    //JsonLoad(FBJson);
                    CloudLoad();
                    Debug.LogWarning("클라우드에서 데이터 입히기");

                }
                //파일 0 -> 로컬  로드  , 클라우드 최신화
                else
                {
                    string loadJson = File.ReadAllText(path);
                    string decypt = AesEncrypt.AESDecrypt128(loadJson, "nghy23@gmail.com");
                    saveData = JsonUtility.FromJson<SaveData>(decypt);
                    if (saveData.username == Social.localUser.userName)
                    {
                        //JsonLoad(loadJson);
                        LocalLoad();
                        Debug.LogWarning("그냥 데이터 입히기");
                    }
                        

                    else if (saveData.username == "")
                    {
                        //클라우드의 데이터와 현재의 데이터가 충돌
                        //과거의 클라우드를 가져오나 현재의 로컬을 가져오는지 안내/////
                        Select = true;
                        LoadingCloudModal.instance.OMG.TurnOn();

                    }
                    else
                    {
                        JsonSave(saveData);
                        //JsonLoad(FBJson);
                        CloudLoad();
                        Debug.LogWarning("클라우드 있는데 내 데이터가아니네");

                    }
                }
            }
            //클라우드에 없을때
            else
            {
                Debug.LogWarning("왜 일로와");
                //파일 x -> 로컬 파일 생성 후 클라우드 최신화
                if (!File.Exists(path))
                {
                    NEWLoad();
                }
                //파일 O -> 
                else
                {
                    string loadJson = File.ReadAllText(path);
                    string decypt = AesEncrypt.AESDecrypt128(loadJson, "nghy23@gmail.com");
                    saveData = JsonUtility.FromJson<SaveData>(decypt);
                    //줄곧 오프라인으로 플레이하다가 처음 계정 로그인
                    if (saveData.username == "")
                    {
                        LocalLoad();
                    }
                    //이거는 다른 계정(username) 으로 오프 즐기다가 다른 계정으로 로그인 했을때
                    else
                    {
                        JsonSave(saveData);
                        NEWLoad();
                    }
                    
                    
                }
            }
        }
        Debug.LogWarning("데이터 정리 완료");
        TextLoading.instance.Write("데이터 불러오기 완료");
        
    }
    

     void NEWLoad()
    {
        DataStruct.instance.maxscore = 0;
        DataStruct.instance.coin = 800;
        DataStruct.instance.currentCharcter = Name.Normal;
        DataStruct.instance.currentMap = Maps.Normal;
        DataStruct.instance.unlocked.Add(Name.Normal);
        DataStruct.instance.unlockedMap.Add(Maps.Normal);
        DataStruct.instance.gamespeed = false;
        DataStruct.instance.Sound = true;
        DataStruct.instance.Vibrate = true;
        DataStruct.instance.Effect = true;
        DataStruct.instance.username = Social.localUser.userName;
        //DataStruct.instance.version = Application.version;
        DataStruct.instance.First = true;
        JsonSave();
        
    }


    public void FBJsonCheck()
    {
        Debug.LogWarning("확인중");
        FirebaseDatabase.DefaultInstance
         .GetReference("playerData")
         .GetValueAsync().ContinueWithOnMainThread(task => {
             if (task.IsFaulted)
             {
                 Debug.LogWarning("데이터베이스 불러오지도 못함 실패");

             }
             else if (task.IsCompleted)
             {

                 DataSnapshot snapshot = task.Result;
                 snapshot.GetRawJsonValue();

                 foreach (DataSnapshot data in snapshot.Children)
                 {
                     
                     if (data.Key.Equals(Social.localUser.userName))
                     {
                         FBJson = data.GetRawJsonValue();
                         FBcheck = true;
                         Debug.LogWarning(FBcheck);
                         Debug.LogWarning("클라우드에 있는거 확인 체크");
                     }

                 }
                 Debug.LogWarning("클라우드에 체크다함");
                 FBcheckComplete = true;
                
             }
         });
       


    }

    //로컬에 있는걸 클라우드에 저장
    public void JsonSave(SaveData saveData)
    {
        Check();
       
        string json = JsonUtility.ToJson(saveData, true);
       
        //File.WriteAllText(path, json);
        if(!Disconnect)
        FirebaseDatabase.DefaultInstance
            .GetReference("playerData").Child(saveData.username).SetRawJsonValueAsync(json);
    }
    public void JsonSave()
    {
        Check();
            
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
        saveData.gamespeed = DataStruct.instance.gamespeed;
        saveData.Sound = DataStruct.instance.Sound;
        saveData.Vibrate = DataStruct.instance.Vibrate;
        saveData.Effect = DataStruct.instance.Effect;
        if (!Disconnect)
            DataStruct.instance.username = Social.localUser.userName;

        saveData.username = DataStruct.instance.username;
        //saveData.version= DataStruct.instance.version;

       
        string json = JsonUtility.ToJson(saveData, true);
        string encrypt = AesEncrypt.AESEncrypt128(json, "nghy23@gmail.com");
        File.WriteAllText(path, encrypt);
        if (!Disconnect)
            FirebaseDatabase.DefaultInstance
                .GetReference("playerData").Child(saveData.username).SetRawJsonValueAsync(json);
    }
    //로컬데이터 우선
     public void LocalLoad()
    {

        SaveData saveData = new SaveData();
        string loadJson = File.ReadAllText(path);
        string decypt = AesEncrypt.AESDecrypt128(loadJson,"nghy23@gmail.com");
        saveData = JsonUtility.FromJson<SaveData>(decypt);
       
        if (saveData != null)
        {

            for (int i = 0; i < saveData.unlocked.Count; i++)
            {

                DataStruct.instance.unlocked.Add(saveData.unlocked[i]);
            }
            for (int i = 0; i < saveData.unlockedMap.Count; i++)
            {
                DataStruct.instance.unlockedMap.Add(saveData.unlockedMap[i]);
            }
            DataStruct.instance.currentCharcter = saveData.currentCharcter;
            DataStruct.instance.currentMap = saveData.currentMap;
            DataStruct.instance.maxscore = saveData.maxscore;
            DataStruct.instance.coin = saveData.coin;
            DataStruct.instance.gamespeed = saveData.gamespeed;
            DataStruct.instance.Sound = saveData.Sound;
            DataStruct.instance.Vibrate = saveData.Vibrate;
            DataStruct.instance.Effect = saveData.Effect;
            DataStruct.instance.username =saveData.username;
            //DataStruct.instance.version = Application.version;
            if (!Disconnect)
                JsonSave();
        }
    }

    //클라우드 데이터 우선
    public void CloudLoad()
    {

        SaveData saveData = new SaveData();
        saveData = JsonUtility.FromJson<SaveData>(FBJson);
       
        if (saveData != null)
        {

            for (int i = 0; i < saveData.unlocked.Count; i++)
            {

                DataStruct.instance.unlocked.Add(saveData.unlocked[i]);
            }
            for (int i = 0; i < saveData.unlockedMap.Count; i++)
            {
                DataStruct.instance.unlockedMap.Add(saveData.unlockedMap[i]);
            }
            DataStruct.instance.currentCharcter = saveData.currentCharcter;
            DataStruct.instance.currentMap = saveData.currentMap;
            DataStruct.instance.maxscore = saveData.maxscore;
            DataStruct.instance.coin = saveData.coin;
            DataStruct.instance.gamespeed = saveData.gamespeed;
            DataStruct.instance.Sound = saveData.Sound;
            DataStruct.instance.Vibrate = saveData.Vibrate;
            DataStruct.instance.Effect = saveData.Effect;
            DataStruct.instance.username = Social.localUser.userName;
            //DataStruct.instance.version = saveData.version;
            if (!Disconnect)
                JsonSave();
        }
    }
    public void ToTheMain()
    {
        Debug.LogWarning("넘어감");
        TransitionManager.Instance().Transition("Main", transition, startDelay);
    }


    public void Check()
    {
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Disconnect = true;
            WaitConnect=false;
            Debug.LogWarning("왜 디스커넥트야" + Disconnect);
        }
        else
        {
           WaitConnect  = true;
        }
        
    }
    
    public void TurnBackLoading()
    {
        
        DataStruct.instance.Destroy();
        Destroy(gameObject);
        TransitionManager.Instance().Transition("Loading", transition, startDelay);
        
    }

    //삭제
    public void JsonDelete()
    {
        
        SaveData saveData = new SaveData();
        string loadJson = File.ReadAllText(path);
        string decypt = AesEncrypt.AESDecrypt128(loadJson, "nghy23@gmail.com");
        saveData = JsonUtility.FromJson<SaveData>(decypt);
        if (saveData.username!="")
            FirebaseDatabase.DefaultInstance
                .GetReference("playerData").Child(DataStruct.instance.username).RemoveValueAsync();
        else
        {
            UIManager.instance.PLzLogin();
            return;
        }
        if (Social.localUser.authenticated) // 로그인 되어 있다면
        {

            PlayGamesPlatform.Instance.SignOut(); // Google 로그아웃
            


        }
        File.Delete(path);
        DataStruct.instance.Destroy();
        Destroy(gameObject);

        TransitionManager.Instance().Transition("Loading", transition, startDelay);
    }
}