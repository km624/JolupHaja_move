using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;

using Lean.Gui;
using GooglePlayGames;

public class UIManager : MonoBehaviour
{
    public static UIManager instance
    {
        get
        {
            if (m_instance == null)
            {
                m_instance = FindObjectOfType<UIManager>();
            }

            return m_instance;
        }
    }

    
    private void Start()
    {
        if (DataStruct.instance.First)
        {
            DataStruct.instance.First = false;
            GameManual.TurnOn();
            
        }
        UpdateMaxScoreText(DataStruct.instance.maxscore);
        UpdateCoinText(DataStruct.instance.coin);
        GameSpeedUI();
       
    }
   
    private static UIManager m_instance; // 싱글톤이 할당될 변수


    public Text Score; // 점수 표시용 텍스트
    public Text MaxScore;
    public Text Coin;

    public Text Gamespeed;
    public Text Username;
    public GameObject gamestartUI; 
    public GameObject gamepauseUI;
    public GameObject gamenormalUI;
    public GameObject gameoverUI;
    public GameObject Blink;
    public GameObject NPCEffect;

    public LeanWindow Quit;
    public LeanWindow LoginPLz;

    public LeanWindow GameManual;
    public TypeEffect overtext;

   

    private void Update()
    {
        Username.text = "계정:" + DataStruct.instance.username;
        
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            SoundManager.instance.UiSound("Button");
            Quit.TurnOn();
        }
        

    }


    public void GoQuit()
    {
        Application.Quit();
    }

    public void PLzLogin()
    {
        LoginPLz.TurnOn();
    }


    public void UpdateScoreText(int score)
    {
        Score.text = score.ToString();
        
    }
    public void UpdateMaxScoreText(int score)
    {
        MaxScore.text = score.ToString();
       
    }

    public void UpdateCoinText(int coin)
    {
        Coin.text = coin.ToString();
       
    }
    

    // 적 웨이브 텍스트 갱신
    public void SetGameStartUI()
    {
        gamestartUI.SetActive(false);
        gamenormalUI.SetActive(true);
    }
   


    // 게임 오버 UI 활성화
    public void SetActiveGameoverUI()
    {
        gamenormalUI.SetActive(false);
        BlinkHit();
        StartCoroutine(Gameover());
        

    }

    //게임 오버 화면 지연
    IEnumerator Gameover()
    {
        yield return new WaitForSeconds(0.5f);
        Time.timeScale = 1f;
        gameoverUI.SetActive(true);
        overtext.typeStart();

    }
   
   

    public void GamePauseUi()
    {
        Debug.Log("pause");
        gamepauseUI.SetActive(true);
       
    }
    public void GamePauseRe()
    {
        Debug.Log("Start");
        gamepauseUI.SetActive(false);
       
    }

    public void GameSpeedUI()
    {
        if (DataStruct.instance.gamespeed)
        {
            Gamespeed.fontSize = 40;
            Gamespeed.text="1.5x";      
        }
        else
        {
            Gamespeed.fontSize = 70;
            Gamespeed.text = "1x";
        }

    }

   /* public void TitleScene()
    {
        gamepauseUI.SetActive(false);
        LoadingSceneManger.LoadScene("First");
        Time.timeScale = 1f;
        pause = false;
    }
   */
   

    public void BlinkHit()
    {
        StartCoroutine(BlinkWait());
        
    }
    private IEnumerator BlinkWait()
    {
        Time.timeScale = 0.4f;
        Blink.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        Blink.SetActive(false);


    }
    public void NPCIN()
    {
        StartCoroutine(NPCWait());

    }
    private IEnumerator NPCWait()
    {
       
        NPCEffect.SetActive(true);
        yield return new WaitForSeconds(0.3f);
        NPCEffect.SetActive(false);


    }
    
}
