using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Assets.PixelHeroes.Scripts.CharacterScripts;
using AnimationState = Assets.PixelHeroes.Scripts.CharacterScripts.AnimationState;
using Lean.Gui;

public class NPCAI : MonoBehaviour
{
    public NPC Character;
    public SpriteRenderer Sprite;
    public Fading fade;
    public int randomMove;
    public float thinktime = 5f;
    private float RunSpeed = 1.25f;
    public Vector2 _motion = Vector2.zero;

    public Rigidbody Rigidbody;
    public Collider colli;

    private float _activityTime;
    public ParticleSystem MoveDust;
    public ParticleSystem JumpDust;
    LeanShake shake;

    public bool GStart;
    public bool think;
    //public bool touchLadder;

    //public bool Down;
    public bool RandomLadder;

    public int Npc;
    public int Ground;

    private GameObject WallL;
    private GameObject WallR;
    private Collider WallLeft;
    private Collider WallRight;

    public UpandDownNpcAI UpDown;
    int layerMask;
    bool run;

    void Awake()
    {
        fade = GetComponent<Fading>();
        Rigidbody = GetComponent<Rigidbody>();
        colli = GetComponent<Collider>();
        Npc = LayerMask.NameToLayer("npc");

        WallL = GameObject.Find("WallLeft");
        WallR = GameObject.Find("WallRight");
        WallLeft = WallL.GetComponent<Collider>();
        WallRight = WallR.GetComponent<Collider>();


        Physics.IgnoreCollision(colli, WallRight, true);
        Physics.IgnoreCollision(colli, WallLeft, true);
        think = false;

    }
    private void Start()
    {
        shake = GameObject.FindWithTag("MainCamera").GetComponent<LeanShake>();
        if (Character.transform.position.x > 0)
        {
            randomMove = -1;
        }
        else
        {
            randomMove = 1;

        }
        layerMask = 1 << LayerMask.NameToLayer("monster");
    }

    void FixedUpdate()
    {

        if (Character.GetState() == AnimationState.Dead)
            return;
        if (!GameManager.instance.isGameover)
            Move();
        if (!think && GStart)
        {
            think = true;
            StartCoroutine(Think(thinktime));
        }
        
        if (GStart && !UpDown.touchLadder && !run)
        {
            Debug.DrawRay(this.transform.position + new Vector3(0, 0.25f, 0), new Vector3(1, 0, 0) * 1f*randomMove, Color.red);
            RaycastHit hit;
            if (Physics.Raycast(this.transform.position + new Vector3(0, 0.25f, 0), new Vector3(1, 0, 0)*randomMove, out hit, 1f, layerMask))
            {
      
                StartCoroutine(WaitRun());
            }

        }

    }
    private IEnumerator WaitRun()
    {
        run = true;
        randomMove *= -1;
        yield return new WaitForSeconds(1f);
        run = false;
    }
        


private IEnumerator Think(float time)
    {
        randomMove = GenerateRandomNumber(-1, 2);
        RandomLadder = (Random.value < 0.8);
        yield return new WaitForSeconds(time);
        thinktime = Random.Range(3f, 7f);
        think = false;

    }
    private List<int> exclusionList = new List<int>() { 0 }; //제외할 값

    private int GenerateRandomNumber(int min, int max)
    {
        int randomValue = Random.Range(-1, 2);
        while (exclusionList.Contains(randomValue))
        {
            randomValue = Random.Range(min, max);
        }
        return randomValue;
    }


    private void Move()
    {
        if (Time.frameCount <= 1)
        {
            Rigidbody.velocity = new Vector3(0, Rigidbody.velocity.y);
        }
        if (randomMove != 0)
        {
            Turn(randomMove);
        }

        var state = Character.GetState();
        /* (state == AnimationState.j)
        {
            Character.Animator.SetTrigger("Landed");
            Character.SetState(AnimationState.Ready);
            JumpDust.Play(true);

        }*/

        _motion = new Vector3(randomMove * RunSpeed, Rigidbody.velocity.y);

        if (randomMove != 0)
        {
            switch (state)
            {
                case AnimationState.Idle:
                case AnimationState.Ready:
                    Character.SetState(AnimationState.Running);
                    break;
            }

        }
        else
        {
            switch (state)
            {
                case AnimationState.Climbing:
                    break;
                default:
                    var targetState = Time.time - _activityTime > 5 ? AnimationState.Idle : AnimationState.Ready;

                    if (state != targetState)
                    {
                        Character.SetState(targetState);
                    }
                    break;
            }
        }
        if (UpDown.touchLadder)
        {
            Character.Animator.SetBool("Grounded", false);
            if (UpDown.Down)
            {
                DownMove();
            }
            UpDown.transform.localPosition = new Vector2(0f, 0.025f);
            UpDown.transform.localScale = new Vector3(0.25f, 0.05f, 0.05f);

        }

        else
        {
            //캐릭터 노말이동
            
            Rigidbody.velocity = _motion;
            Character.Animator.SetBool("Grounded", true);
            Character.Animator.SetBool("Climbing", false);
        }
        
        Character.Animator.SetBool("Moving",randomMove != 0);


        //이펙트
        if (!Mathf.Approximately(Rigidbody.velocity.x, 0))
        {
            var velocity = MoveDust.velocityOverLifetime;

            velocity.xMultiplier = 0.2f * -Mathf.Sign(Rigidbody.velocity.x);

            if (!MoveDust.isPlaying)
            {
                MoveDust.Play();
            }
        }
        else
        {
            MoveDust.Stop();
        }

    }

    private void OnTriggerExit(Collider other)
    {
       
        if (other.tag == "GStart")
        {
           
            GStart = true;
            Physics.IgnoreCollision(colli, WallLeft, false);
            Physics.IgnoreCollision(colli, WallRight, false);
        }
    }

    private void Turn(int direction)
    {
        /*var scale = Character.transform.localScale;

        scale.x = Mathf.Sign(direction) * Mathf.Abs(scale.x);

        Character.transform.localScale = scale;*/
        if (direction == 1)
        {
            Sprite.flipX = false;
            UpDown.transform.localPosition = new Vector2(-0.05f, 0.025f);
        }

        else
        {
            Sprite.flipX = true;
            UpDown.transform.localPosition = new Vector2(0.05f, 0.025f);
        }
        if (!UpDown.Down)
            UpDown.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);
    }
  
    
    private void DownMove()
    {
        Character.SetState(AnimationState.Climbing);
        Rigidbody.velocity = Vector3.zero;
        
        _motion.y = -1;
        _motion = new Vector3(0, _motion.y * RunSpeed);
       
        Rigidbody.velocity = _motion;

    }

    
    private void OnCollisionEnter(Collision collision)
    {

        if (collision.gameObject.tag == "Monster") 
        {
            if (DataStruct.instance.Effect)
                shake.Shake(0.7f);
            SoundManager.instance.NPCHitSound();
            Character.Animator.SetTrigger("Hit");
            Character.SetState(AnimationState.Dead);
            GameManager.instance.DownScore(3);
            Stopped();
            fade.Fadings();
        }
            
        else if (collision.gameObject.tag == "Player")
        {
            Character.Animator.SetTrigger("Hit");
            Character.SetState(AnimationState.Dead);
            GameManager.instance.DownScore(3);
            Stopped();
            fade.Fadings();
        }
        else if (collision.gameObject.tag == "NPC")
        {
           
            randomMove *= -1;
        }
        if (collision.gameObject.layer==8)
        {
            
            randomMove *= -1;

        }


    }
     private void Stopped()
    {
        
        colli.isTrigger = true;
        Rigidbody.useGravity = false;
        _motion = Vector2.zero;
        Rigidbody.velocity = Vector2.zero;
        

    }
}

