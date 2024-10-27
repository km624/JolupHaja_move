using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class TextLoading : MonoBehaviour
{
    public static TextLoading instance
    {
        get
        {
            // 만약 싱글톤 변수에 아직 오브젝트가 할당되지 않았다면
            if (m_instance == null)
            {
                // 씬에서 GameManager 오브젝트를 찾아 할당
                m_instance = FindObjectOfType<TextLoading>();
            }

            // 싱글톤 오브젝트를 반환
            return m_instance;
        }
    }

    private static TextLoading m_instance;

    Text text;


    void Awake()
    {
        text=GetComponent<Text>();
    }
    public void Write(string write)
    {
        text.text=write;
    }
}
