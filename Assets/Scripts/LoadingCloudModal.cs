using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Lean.Gui;
public class LoadingCloudModal : MonoBehaviour
{

    public static LoadingCloudModal instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<LoadingCloudModal>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }


    
   
    private static LoadingCloudModal m_instance;

    public LeanWindow OMG;
    public LeanWindow Update;
    public LeanWindow Login;
    // Start is called before the first frame update

    public void NeedUpdate()
    {
        Update.TurnOn();
    }
    public void GameQuit()
    {
        Application.Quit();
    }

    public void LoginError()
    {
        Login.TurnOn();   
    }

    public void repeatLogin()
    {
        StartCoroutine(GoogleLogin.instance.FirstJoonbi());
    }
    public void OfflineGame()
    {
        AllSaveLoad.instance.Disconnect = true;
        StartCoroutine(AllSaveLoad.instance.order());
    }
    public void CloudOK()
    {
        AllSaveLoad.instance.CloudLoad();
        StartCoroutine(Wait());
    }
    public void LocalOK()
    {
        AllSaveLoad.instance.LocalLoad();
        StartCoroutine(Wait());
    }
    IEnumerator Wait()
    {
        yield return new WaitForSeconds(0.5f);
        AllSaveLoad.instance.ToTheMain();
    }
}
