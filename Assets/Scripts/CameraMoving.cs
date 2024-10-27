using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMoving : MonoBehaviour
{


    public float smoothTime = 0.3f;
    
    private Vector3 velocity = Vector3.zero;
    private float lastZoomSpeed;
    public bool isActive = false;



    public void CameraMovingStart()
    {
        while (!isActive)
        {
            Debug.Log("ok");
            Camera.main.transform.position = Vector3.SmoothDamp(Camera.main.transform.position, new Vector3(0, -3.5f, -10f), ref velocity, smoothTime);
            float smoothZoomSize = Mathf.SmoothDamp(Camera.main.orthographicSize,2f,
                                       ref lastZoomSpeed, smoothTime);

            Camera.main.orthographicSize = smoothZoomSize;
            if (Vector3.Distance(new Vector3(0, -3.5f, 10f), Camera.main.transform.position) < 0.1f)
            {
                Debug.Log("done");
                isActive = true;
            }
        }

    }

}


