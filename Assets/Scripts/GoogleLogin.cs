using System.Collections;

using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;

using Firebase.Auth;
using UnityEngine.UI;

public class GoogleLogin : MonoBehaviour
{
    
    private FirebaseAuth auth;

    public Text text;
   

    public static GoogleLogin instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<GoogleLogin>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }




    private static GoogleLogin m_instance;

    void Start()
    {
        
      
        text.text = "로그인 하는중";
        StartCoroutine(FirstJoonbi());
        Debug.LogWarning("시작했으");
    }
    public IEnumerator FirstJoonbi()
    {
        yield return new WaitForSeconds(0.5f);
        FirstSET();
        yield return StartCoroutine("FirstSET");
        while (PlayGamesPlatform.DebugLogEnabled)
            yield return null;
        auth = FirebaseAuth.DefaultInstance; 
        PlayGamesPlatform.Activate();
        


        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Debug.LogWarning("googlelogin = 실패");
            text.text = "오프라인 게임 시작";
            StartCoroutine(AllSaveLoad.instance.order());
        }
        else
            TryGoogleLogin();
        
        
    }


    void FirstSET()
    {
        Debug.LogWarning("다시시작");
        PlayGamesPlatform.InitializeInstance(new PlayGamesClientConfiguration.Builder()
            .RequestIdToken()
            .RequestEmail()
            .Build());
      
    }
    public void TryGoogleLogin()
    {
        if (!Social.localUser.authenticated) // 로그인 되어 있지 않다면
        {
            
            Social.localUser.Authenticate(success => // 로그인 시도
            {
                if (success) // 성공하면
                {
                   
                    Debug.Log("Success");
                    Debug.LogWarning("success 로그인 성공");
                    text.text = "로그인 완료";
                    StartCoroutine(TryFirebaseLogin()); // Firebase Login 시도
                   
                    
                }
                else // 실패하면
                {
                    Debug.LogWarning("googlelogin2 = 실패2");
                    LoadingCloudModal.instance.LoginError();

                }
            });
        }
        else
        {
            Debug.LogWarning("로그인 되어있었네");
            StartCoroutine(TryFirebaseLogin());

        }
    }


    public void TryGoogleLogout()
    {
        if (Social.localUser.authenticated) // 로그인 되어 있다면
        {
           
            PlayGamesPlatform.Instance.SignOut(); // Google 로그아웃
            auth.SignOut(); // Firebase 로그아웃
            

        }
    }

    
    IEnumerator TryFirebaseLogin()
    {
        while (string.IsNullOrEmpty(((PlayGamesLocalUser)Social.localUser).GetIdToken()))
            yield return null;
        string idToken = ((PlayGamesLocalUser)Social.localUser).GetIdToken();
       

        Credential credential = GoogleAuthProvider.GetCredential(idToken, null);
        auth.SignInWithCredentialAsync(credential).ContinueWith(task => {
            if (task.IsCanceled)
            {
                Debug.LogWarning("SignInWithCredentialAsync was canceled.");
                return;
            }
            if (task.IsFaulted)
            {
                Debug.LogWarning("SignInWithCredentialAsync encountered an error: " + task.Exception);
                return;
            }
           
  
            StartCoroutine(AllSaveLoad.instance.order());
        });
 
        
    }
   
    // 리더보드에 점수등록 후 보기
    public void OnShowLeaderBoard()
    {
        
        // 1000점을 등록
        Social.ReportScore(9000, GPGSIds.leaderboard_ranking, (bool bSuccess) =>
        {
            if (bSuccess)
            {
                Debug.Log("ReportLeaderBoard Success");
               
            }
            else
            {
                Debug.Log("ReportLeaderBoard Fall");
               
            }
        }
        );
        Social.ShowLeaderboardUI();
       
    }
    public void OnShowLeaderBoard2()
    {
       
        ((PlayGamesPlatform)Social.Active).ShowLeaderboardUI(GPGSIds.leaderboard_ranking);
    }


}

