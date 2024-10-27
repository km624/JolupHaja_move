using Assets.PixelHeroes.Scripts.CharacterScripts;
using UnityEngine;
using AnimationState = Assets.PixelHeroes.Scripts.CharacterScripts.AnimationState;
using System.Collections;
using Lean.Gui;
using DamageNumbersPro.Demo;
#if ENABLE_INPUT_SYSTEM && DNP_NewInputSystem
using UnityEngine.InputSystem;
#endif

using DamageNumbersPro;
namespace Assets.PixelHeroes.Scripts.ExampleScripts
{
    public class CharacterMove_repair : MonoBehaviour
    {

        
        public Character Character;
        //public CharacterController Controller;
        public SpriteRenderer Sprite;
        float RunSpeed = 1.5f;
        float JumpSpeed = 4f;
        public float CrawlSpeed = 0.25f;
        //public float Gravity = -0.2f;
        public ParticleSystem MoveDust;
        public ParticleSystem JumpDust;
        public ParticleSystem hiteffect;
        public AudioClip AttackSound;

        public Rigidbody rigidbodys;


        public GameObject ladderdirect;
        public SpriteRenderer laddersprite;


        public Vector2 LadderPoint;
        public Vector3 _motion = Vector3.zero;
        public float fall;
        public int _inputX, _inputY;
        private float _activityTime;

        public UPandDown_repair updown;
        public LeanShake shake;

        public bool isground;

        private bool Walk;

        public DamageNumber comboint;
        public DamageNumber combostring;
        DamageNumber newDamageNumber;


        public int combo = 0;
        public int maxcombo;
        IEnumerator combocoroutine;
        private void Start()
        {
            shake = GameObject.FindWithTag("MainCamera").GetComponent<LeanShake>();
            _inputX = 1;
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

                if (Character.GetState() != AnimationState.Jumping && (!updown.Up && !updown.Down))
                {
                    rigidbodys.AddForce(Vector3.up * JumpSpeed, ForceMode.Impulse);
                    SoundManager.instance.PlayerSound("Jump");
                    if (isground)
                    {


                        JumpDust.Play(true);
                    }


                }

            }

        }

        public void FixedUpdate()
        {
            if (!GameManager.instance.isGameover&&GameManager.instance.isGamestart)
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
        public void LeftRight()
        {
            _inputX *=-1;
          
        }
       

    
        public void Jump()
        {
            if (Character.GetState() != AnimationState.Jumping && (!updown.Up && !updown.Down))
            {
                rigidbodys.AddForce(Vector3.up * JumpSpeed, ForceMode.Impulse);
                SoundManager.instance.PlayerSound("Jump");
                if (isground)
                {
                    JumpDust.Play(true);
                }
            }

        }

        private void Move()
        {
            if (Time.frameCount <= 1)
            {
                rigidbodys.velocity = new Vector3(0, rigidbodys.velocity.y);
                return;
            }

            var state = Character.GetState();


            if (_inputX != 0)
            {
                Turn(_inputX);
            }

            if (isground)
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

                if (_inputX != 0 ||_inputY != 0)
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
                // _motion = new Vector3(RunSpeed * _inputX, _motion.y, 0);
                _motion = new Vector3(RunSpeed * _inputX,0, 0);
                Character.SetState(AnimationState.Jumping);

            }
            _motion.y = rigidbodys.velocity.y;

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
                updown.transform.localScale = new Vector3(0.5f, 0.05f,0.05f);


            }

            else
            {
                //캐릭터 노말이동
                ladderdirect.SetActive(false);
                //Controller.Move(_motion * Time.fixedDeltaTime);
                rigidbodys.velocity = _motion; //* Time.fixedDeltaTime;
                if (!Walk&& (_inputX != 0 || _inputY != 0)&&isground)
                    StartCoroutine(Walking("Walk"));

               

            }

            _inputY = 0;
            Character.Animator.SetBool("Grounded", isground);
            Character.Animator.SetBool("Moving", isground && _inputX != 0);
           Character.Animator.SetBool("Falling", !isground && rigidbodys.velocity.y < 0 && !updown.Down); //!touchLadder);

            if (_inputX != 0 && _inputY != 0 || Character.Animator.GetBool("Action"))
            {
                _activityTime = Time.time;
            }


            //이펙트 
            if (isground && !Mathf.Approximately(rigidbodys.velocity.x, 0))
            {
                var velocity = MoveDust.velocityOverLifetime;

                velocity.xMultiplier = 0.2f * -Mathf.Sign(rigidbodys.velocity.x);

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
            rigidbodys.velocity = Vector3.zero;
            _motion.y = 1;
            _motion = new Vector3(0, _motion.y * RunSpeed);
            rigidbodys.velocity = _motion;
            //Controller.Move(_motion * Time.fixedDeltaTime);

        }
        private void DownMove()
        {
            Character.SetState(AnimationState.Climbing);
            rigidbodys.velocity = Vector3.zero;

            _motion.y = -1;
            _motion = new Vector3(0, _motion.y * RunSpeed);

            rigidbodys.velocity = _motion;
           /* _motion.y = -1;
            _motion = new Vector3(0, _motion.y * RunSpeed);
            Controller.Move(_motion * Time.fixedDeltaTime);
           */

        }



        
        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.layer == 17)
            {
                isground = true;
            }
            if (collision.gameObject.tag == "Monster")
            {
                
                Attack();
                Instantiate(hiteffect, collision.transform.position, Quaternion.identity);
                if(combocoroutine != null)
                    StopCoroutine(combocoroutine);
                combocoroutine = ComboText();
                StartCoroutine(combocoroutine);

              
            }
            if(collision.gameObject.tag == "NPC")
            {
                Attack();
                Instantiate(hiteffect, collision.transform.position, Quaternion.identity);
                if (combocoroutine != null)
                {
                    StopCoroutine(combocoroutine);
                    newDamageNumber.FadeOut();
                    combo = 0;
                }
               
            }
            if (collision.gameObject.layer == 8&& Character.GetState() == AnimationState.Jumping)
                LeftRight();

        }
        private void OnCollisionStay(Collision collision)
        {
            if (collision.gameObject.layer == 17)
            {
                isground = true;
            }
           
        }
        private void OnCollisionExit(Collision collision)
        {
            if (collision.gameObject.layer == 17)
            {
                isground = false;
            }

        }
        private void Attack()
        {
            SoundManager.instance.AttackSound(AttackSound);
            
            Character.Animator.SetTrigger("Slash");
            if(DataStruct.instance.Effect)
                shake.Shake(0.7f);
        }

        IEnumerator ComboText()
        {
            if (combo < 5)
            {
                 newDamageNumber = comboint.Spawn(this.transform.position + new Vector3(0, 0.3f));
                
                combo += 1;
                if (combo == 5)
                    GameManager.instance.AddScore(1);
                if (combo > maxcombo)
                {
                    maxcombo = combo;
                    GameManager.instance.Addmaxcombo(maxcombo);
                }
                  
                yield return new WaitForSeconds(1.5f);
               
            }
           
            else
            {
                GameManager.instance.AddScore(1);
                DNP_PrefabSettings settings = combostring.gameObject.GetComponent<DNP_PrefabSettings>();
                 newDamageNumber = combostring.Spawn(this.transform.position + new Vector3(0, 0.15f));
                settings.Apply(newDamageNumber);
                yield return new WaitForSeconds(1f);
                
            }
            newDamageNumber.FadeOut();
            combo = 0;
        }
    }

}
