using Assets.PixelHeroes.Scripts.CharacterScripts;
using UnityEngine;
using AnimationState = Assets.PixelHeroes.Scripts.CharacterScripts.AnimationState;
using System.Collections;

namespace Assets.PixelHeroes.Scripts.ExampleScripts
{
    public class CharacterControls2 : MonoBehaviour
    {   
        
        public Character Character;
        public CharacterController Controller;
        public SpriteRenderer Sprite;
        public float RunSpeed = 1f;
        public float JumpSpeed = 3f;
        public float CrawlSpeed = 0.25f;
        public float Gravity = -0.2f;
        public ParticleSystem MoveDust;
        public ParticleSystem JumpDust;
        public ParticleSystem hiteffect;

        public GameObject ladderdirect;
        public SpriteRenderer laddersprite;


        public bool touchLadder; 
        public bool Up;
        public bool Down;
        public bool courunning;

       
        public int Player;
        public int Ground;

        public Vector2 LadderPoint;
        public Vector3 _motion = Vector3.zero;
        public int _inputX, _inputY;
        private float _activityTime;

        private void Awake()
        {
            Player = LayerMask.NameToLayer("player");
            Ground = LayerMask.NameToLayer("ground");

        }

        public void Start()
        {
       
            Physics.IgnoreLayerCollision(Player, Ground, false);

        }

        public void Update()
        {
            if (!courunning)
            {
                if (Input.GetKey(KeyCode.LeftArrow))
                {
                    _inputX = -1;
                }
                else if (Input.GetKey(KeyCode.RightArrow))
                {
                    _inputX = 1;
                }
            }
           

            if (Input.GetKeyDown(KeyCode.UpArrow))
             {
                 _inputY = 1;
                 Debug.Log("jump");

                 if (Controller.isGrounded)
                 {
                     JumpDust.Play(true);
                 }
                if (touchLadder && (!Up && !Down))
                {
                    
                    touchLadder = false;
                    StopAllCoroutines();
                }

             }

        }

        public void FixedUpdate()
        {
            if(!GameManager.instance.isGameover)
            Move();
            
        }

        public void LeftRight(bool right)
        {
            if(right)
                _inputX = 1;
            else
                _inputX = -1;

        }
        public void Jump()
        {
            _inputY = 1;
            Debug.Log("jump");

            if (Controller.isGrounded)
            {
                JumpDust.Play(true);
            }

        }

        private void Move()
        {
            if (Time.frameCount <= 1)
            {
                Controller.Move(new Vector3(0, Gravity) * Time.fixedDeltaTime);
                return;
            }

            var state = Character.GetState();

            
            if (_inputX != 0)
            {
                Turn(_inputX);
            }
           
            if (Controller.isGrounded)
            {
                if (state == AnimationState.Jumping)
                {
 
                        Character.Animator.SetTrigger("Landed");
                        Character.SetState(AnimationState.Ready);
                        JumpDust.Play(true);
                  
                }

                _motion = state == AnimationState.Crawling
                    ? new Vector3(CrawlSpeed * _inputX, 0)
                    : new Vector3(RunSpeed * _inputX, JumpSpeed * _inputY);

                if (_inputX != 0 || _inputY != 0)
                {
                    if (_inputY > 0)
                    {
                        
                        Character.SetState(AnimationState.Jumping);
                    }
                    else
                    {
                        
                        switch (state)
                        {
                            case AnimationState.Idle:
                            case AnimationState.Ready:
                             Character.SetState(AnimationState.Running);
                                break;
                        }
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
            }
            else
            {
                    _motion = new Vector3(RunSpeed * _inputX, _motion.y);
                   
                    Character.SetState(AnimationState.Jumping);

            }
            _motion.y += Gravity;

            if (Up || Down)
            {
                if (Up)
                {
                    UpMove();
                }
                else if (Down)
                {
                    DownMove();
                }
                ladderdirect.SetActive(true);
                
                if (_inputX > 0)
                    laddersprite.flipX = false;
                else
                    laddersprite.flipX = true;

            }
            
            else
            {
                //캐릭터 노말이동
                ladderdirect.SetActive(false);
                Controller.Move(_motion * Time.fixedDeltaTime);

            }
            
            _inputY= 0;
            Character.Animator.SetBool("Grounded", Controller.isGrounded);
            Character.Animator.SetBool("Moving", Controller.isGrounded && _inputX != 0);
            Character.Animator.SetBool("Falling",!Controller.isGrounded && Controller.velocity.y < 0&&!touchLadder);
            
            if (_inputX != 0 && _inputY != 0 || Character.Animator.GetBool("Action"))
            {
                _activityTime = Time.time;
            }
            
            
            //이펙트 
            if (Controller.isGrounded && !Mathf.Approximately(Controller.velocity.x, 0))
            {
                var velocity = MoveDust.velocityOverLifetime;

                velocity.xMultiplier = 0.2f * -Mathf.Sign(Controller.velocity.x);

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

       
        private void Turn(int direction)
        {
            /*var scale = Character.transform.localScale;

            scale.x = Mathf.Sign(direction) * Mathf.Abs(scale.x);

            Character.transform.localScale = scale;*/
            if (direction == 1)
            {
                Sprite.flipX = false;
                hiteffect.transform.localPosition = new Vector3(0.35f, 0.25f, 0);
               
            }
               
            else
            {
                Sprite.flipX = true;
                hiteffect.transform.localPosition = new Vector3(-0.35f, 0.25f, 0);

            }
       
           

        }



        private void OnTriggerEnter(Collider collision)
        {

            if (collision.gameObject.tag == "Ladder")
            {
                if (collision.gameObject.name == "UpPoint")
                {
                    if (!Down && Controller.isGrounded)
                    {
                        touchLadder = true;
                        StartCoroutine(upWait(0.18f));
                        
                    }
                    else
                    {
                        touchLadder = false;
                        Down = false;
                        Physics.IgnoreLayerCollision(Player, Ground, false);
                    }

                }
                else if (collision.gameObject.name == "DownPoint")
                {
                    if (!Up&&Controller.isGrounded)
                    {
                        touchLadder = true;
                        StartCoroutine(downWait(0.18f));

                    }
                    else
                    {
                        touchLadder = false;
                        Up = false;
                        Physics.IgnoreLayerCollision(Player, Ground, false);
                    }
                }
                
               
            }
               
        }
      
        private IEnumerator upWait(float waittime)
        {
            courunning = true;
            yield return new WaitForSeconds(waittime);
            Up = true;
            Physics.IgnoreLayerCollision(Player, Ground, true);
            courunning = false;

        }
        private IEnumerator downWait(float waittime)
        {
            courunning = true;
            yield return new WaitForSeconds(waittime);
            Down = true;
            Physics.IgnoreLayerCollision(Player, Ground, true);
            courunning = false;

        }

        private void UpMove()
        {
            Character.SetState(AnimationState.Climbing);
            _motion.y = 1;
            _motion = new Vector3(0, _motion.y * RunSpeed);
            Controller.Move(_motion * Time.fixedDeltaTime);

        }
        private void DownMove()
        {
            Character.SetState(AnimationState.Climbing);
            _motion.y = -1;
            _motion = new Vector3(0, _motion.y * RunSpeed);
            Controller.Move(_motion * Time.fixedDeltaTime);

        }


       
        
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.tag == "Monster"||collision.gameObject.tag == "NPC")
            {
                
                Attack();
            }

        }
        private void Attack()
        {
            Character.Animator.SetTrigger("Slash");
            hiteffect.Play();

        }
    }
    
}