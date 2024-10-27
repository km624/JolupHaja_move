using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CourutinTEst : MonoBehaviour
{
    private void Start()
    {
        StartCoroutine(Frist());
    }
   IEnumerator Frist()
    {
        yield return StartCoroutine("WOWWOW");
        yield return StartCoroutine("Fast");
        yield return StartCoroutine("Awesome");
    }
   
    void WOWWOW()
    {
        for(int i = 0; i < 100; i++)
        {
            Debug.Log(i);
        }
    }
    void Fast()
    {
        Debug.Log("sss");
    }
    void Awesome()
    {

    }
}
