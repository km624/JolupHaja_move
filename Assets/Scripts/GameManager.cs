using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using EasyTransition;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using Unity.VisualScripting;

public class GameManager : MonoBehaviour
{
    public static GameManager instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<GameManager>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }

    private static GameManager m_instance; // 싱글톤이 할당될 static 변수

   
    public bool isGameover { get; private set; } // 게임 오버 상태
    public bool isGamestart { get; private set; }
    
    public bool pause;
    public bool gamespeed;

    public int score{ get; private set; }
    public int coining { get; private set; }
    public TransitionSettings transition;
    public float startDelay;

    public int maxcombo;
    public bool doublecoin;


    private void Start()
    {
        Time.timeScale = 1f;
        SoundManager.instance.UiSound("Start");
       
        if(!AllSaveLoad.instance.Disconnect)
            Social.ReportScore(DataStruct.instance.maxscore, GPGSIds.leaderboard_ranking, (bool bSuccess) =>
            {
                if (bSuccess)
                {
                    Debug.LogWarning("처음시작할때 성공");

                }
                else
                {
                    Debug.LogWarning("실패했네");

                }
            }
            );

    }

    public void GamePause()
    {
        if (!pause)
        {
            UIManager.instance.GamePauseUi();
            Time.timeScale = 0f;
            pause = true;
            
        }
        else
        {
            UIManager.instance.GamePauseRe();
            pause = false;
            if (DataStruct.instance.gamespeed)
                Time.timeScale = 1.5f;
            else
                Time.timeScale = 1f; 
        }
    }

    public void SpeedUp()
    {
       
        if (!DataStruct.instance.gamespeed)
        {
            Time.timeScale = 1.5f;
            DataStruct.instance.gamespeed = true;

        }

        else
        {
            Time.timeScale = 1f;
            DataStruct.instance.gamespeed = false;
        }
          
        UIManager.instance.GameSpeedUI();
    }

    public void AddScore(int newScore)
    {
        // 게임 오버가 아닌 상태에서만 점수 증가 가능
        if (!isGameover)
        {

            // 점수 추가
            score += newScore;
            
            Debug.Log("점수:" + score);
           

            // 점수 UI 텍스트 갱신
            UIManager.instance.UpdateScoreText(score);
            

        }
    }
    public void DownScore(int newScore)
    {
        if (!isGameover)
        {

            score -= newScore;
            if(score<0)
                EndGame();

            // 점수 UI 텍스트 갱신
            UIManager.instance.UpdateScoreText(score);

        }

    }
    public void AddCoin(int coin)
    {
        if (!isGameover)
        {
            
            coining += coin;
           
        }

    }
  

    public void StartGame()
    {
        if (DataStruct.instance.gamespeed)
        {
            Time.timeScale = 1.5f;
        }
        else
        {
            Time.timeScale = 1f;
            
        }
        isGamestart = true;
        UIManager.instance.SetGameStartUI();
    }
   
    // 게임 오버 처리
    public void EndGame()
    {

        isGameover = true;
        //최고점수 저장처리
        if (score >= DataStruct.instance.maxscore)
        {
            DataStruct.instance.maxscore = score;
            UIManager.instance.UpdateMaxScoreText(DataStruct.instance.maxscore);
        }
        //코인 추가
        
        DataStruct.instance.coin += coining;
        doublecoin = (Random.value < 0.1f*maxcombo);
        
        //로컬json 저장
        AllSaveLoad.instance.JsonSave();
        if(!AllSaveLoad.instance.Disconnect)
            Social.ReportScore(DataStruct.instance.maxscore, GPGSIds.leaderboard_ranking, (bool bSuccess) =>
            {
                if (bSuccess)
                {
                    Debug.LogWarning("ReportLeaderBoard Success");

                }
                else
                {
                    Debug.LogWarning("ReportLeaderBoard Fall");

                }
            }
            );
        SoundManager.instance.UiSound("End");
        UIManager.instance.SetActiveGameoverUI();
    }

    public void Addmaxcombo(int combo)
    {
        maxcombo=combo;
    }
   
    public void OnShowLeaderBoard()
    {

        ((PlayGamesPlatform)Social.Active).ShowLeaderboardUI(GPGSIds.leaderboard_ranking);
    }

    
    public void GotoSelect()
    {
        
        TransitionManager.Instance().Transition("Select", transition, startDelay);
    }
    public void RestartGame()
    {
        
        //isGameover = false;
       
        TransitionManager.Instance().Transition(SceneManager.GetActiveScene().name, transition, startDelay);
       

    }
}

