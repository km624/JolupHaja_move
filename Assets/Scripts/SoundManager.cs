using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SoundManager : MonoBehaviour
{
    public AudioClip[] UiClips;
    public AudioClip[] PlayerClips;
    public AudioClip[] CoinClips;
    public AudioSource Ui;
    public AudioSource Player;
    public AudioSource Coin;
    public AudioClip NPCHit;
    public AudioClip NPCIN;



    public static SoundManager instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<SoundManager>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }
    private static SoundManager m_instance;

   
    private void Start()
    {
        
        if (SceneManager.GetActiveScene().name=="Loading")
            VolumeON();
        else
        {
            if (DataStruct.instance.Sound)
                VolumeON();
            else
                VolumeOFF();
        }
       
    }

    public void UiSound(string type)
    {
        int index = 0;

        switch (type)
        {
            case "Button": index = 0; break;
            case "Down": index = 1; break;
            case "Buy": index = 2; break;
            case "Dont": index = 3; break;
            case "Start": index = 4; break;
            case "End": index = 5; break;
            case "Pause": index = 6; break;
            case "UnPause": index = 7; break;
            case "Snap": index = 8; break;
            case "Typing": index = 9; break;


        }
        Ui.clip = UiClips[index];
        Ui.Play();
    }
    public void NPCHitSound()
    {

        Ui.PlayOneShot(NPCHit);
    }
    public void NPCINSound()
    {
        Ui.PlayOneShot(NPCIN);
    }

    public void PlayerSound(string type)
    {
        int index = 0;

        switch (type)
        {
            case "Walk": index = 0; break;
            case "Jump": index = 1; break;
        }
        Player.clip = PlayerClips[index];
        Player.Play();
    }

    public void AttackSound(AudioClip audio)
    {

        Player.PlayOneShot(audio);
    }

    public void CoinSound(string type)
    {
        int index = 0;

        switch (type)
        {
            case "Eat": index = 0; break;
    
        }
        Coin.clip = CoinClips[index];
        Coin.Play();
    }
    public void DoorOpen(AudioClip audio)
    {

        Coin.PlayOneShot(audio);
    }
    public void VolumeOFF()
    {
        Ui.volume = 0;
        Player.volume = 0;
        Coin.volume = 0;

    }
    public void VolumeON()
    {
        Ui.volume = 1;
        Player.volume = 1;
        Coin.volume = 1;

    }
}
