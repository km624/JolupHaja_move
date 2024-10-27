using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EasyTransition;

public class TestLoading : MonoBehaviour
{
    public TransitionSettings transition;
    float startDelay = 1f;
    // Start is called before the first frame update
    void Start()
    {
        TransitionManager.Instance().Transition("Main", transition, startDelay);
    }

    
}
