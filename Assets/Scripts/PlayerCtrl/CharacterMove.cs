using Assets.PixelHeroes.Scripts.CharacterScripts;
using UnityEngine;
using AnimationState = Assets.PixelHeroes.Scripts.CharacterScripts.AnimationState;
using System.Collections;
using Lean.Gui;

namespace Assets.PixelHeroes.Scripts.ExampleScripts
{
    public class CharacterMove : MonoBehaviour
    {

        public Character Character;
        public CharacterController Controller;
        public SpriteRenderer Sprite;
         float RunSpeed = 1.5f;
        public float JumpSpeed = 3f;
        public float CrawlSpeed = 0.25f;
        public float Gravity = -0.2f;
        public ParticleSystem MoveDust;
        public ParticleSystem JumpDust;
        public ParticleSystem hiteffect;
        public AudioClip AttackSound;


        public GameObject ladderdirect;
        public SpriteRenderer laddersprite;


        public Vector2 LadderPoint;
        public Vector3 _motion = Vector3.zero;
        public int _inputX, _inputY;
        private float _activityTime;

        public UPandDown updown;
        public LeanShake shake;

        private bool Walk;


        public bool touchs;
        private void Start()
        {
            shake = GameObject.FindWithTag("MainCamera").GetComponent<LeanShake>();
        }

        public void Update()
        {

            transform.position = new Vector3(transform.position.x, transform.position.y, 0f);
            if (Input.GetKey(KeyCode.LeftArrow))
            {
                _inputX = -1;
               
            }
            else if (Input.GetKey(KeyCode.RightArrow))
            {
                _inputX = 1;
                
            }

            
            if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                _inputY = 1;
                SoundManager.instance.PlayerSound("Jump");
                if (Controller.isGrounded)
                {
                    _inputY = 1;
                   
                    JumpDust.Play(true);
                }
               
                
            }

        }

        public void FixedUpdate()
        {
            if (!GameManager.instance.isGameover)
                Move();

        }

       public void LeftRight(bool right)
        {
            
            {
                if (right)
                    _inputX = 1;
                else
                    _inputX = -1;

            }
               
        }
        public void Jump()
        {
           
            {
                _inputY = 1;
                SoundManager.instance.PlayerSound("Jump");

                if (Controller.isGrounded)
                {
                    JumpDust.Play(true);
                }
                
            }
           
        }

        private void Move()
        {
            if (Time.frameCount <= 1)
            {
                Controller.Move(new Vector3(0, Gravity,0) * Time.fixedDeltaTime);
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
                    : new Vector3(RunSpeed * _inputX, JumpSpeed * _inputY,0);

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
                _motion = new Vector3(RunSpeed * _inputX, _motion.y, 0);

                Character.SetState(AnimationState.Jumping);

            }
            _motion.y += Gravity;

            if (updown.Up || updown.Down)
            {
                
                if (updown.Up)
                {
                    UpMove();
                }
                else if (updown.Down)
                {
                    DownMove();
                }
               
                ladderdirect.SetActive(true);

                if (_inputX > 0)
                    laddersprite.flipX = false;
                else
                    laddersprite.flipX = true;

                updown.transform.localPosition = new Vector2(0f, 0.025f);
                updown.transform.localScale = new Vector3(0.25f, 0.05f,0.05f);


            }

            else
            {
                //캐릭터 노말이동
                ladderdirect.SetActive(false);
                Controller.Move(_motion * Time.fixedDeltaTime);
                if (!Walk&& (_inputX != 0 || _inputY != 0)&&Controller.isGrounded)
                    StartCoroutine(Walking("Walk"));

               

            }

            _inputY = 0;
            Character.Animator.SetBool("Grounded", Controller.isGrounded);
            Character.Animator.SetBool("Moving", Controller.isGrounded && _inputX != 0);
           Character.Animator.SetBool("Falling", !Controller.isGrounded && Controller.velocity.y < 0 && !updown.Down); //!touchLadder);

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

        IEnumerator Walking(string state)
        {
            Walk = true;
            SoundManager.instance.PlayerSound(state);
            yield return new WaitForSeconds(0.2f);
            Walk = false;
        }


        private void Turn(int direction)
        {
            
            if (direction == 1)
            {
                Sprite.flipX = false;
                updown.transform.localPosition=new Vector2(-0.05f,0.025f);
 
            }

            else
            {
                Sprite.flipX = true;
                updown.transform.localPosition = new Vector2(0.05f, 0.025f);

            }
            if(!updown.Up&&!updown.Down)
            updown.transform.localScale = new Vector3(0.05f, 0.05f, 0.05f);

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
            if (collision.gameObject.tag == "Monster" || collision.gameObject.tag == "NPC")
            {
               touchs = true;
                Attack();
                Instantiate(hiteffect, collision.transform.position ,Quaternion.identity);
               
            }

        }
        private void OnCollisionExit(Collision collision)
        {
            if (collision.gameObject.tag == "Monster" || collision.gameObject.tag == "NPC")
                touchs = false;
        }
        private void Attack()
        {
            SoundManager.instance.AttackSound(AttackSound);
            Character.Animator.SetTrigger("Slash");
            if(DataStruct.instance.Effect)
                shake.Shake(0.7f);


        }
    }

}
