using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInfo : MonoBehaviour
{

    public float attackDamage; // 공격력
    public int attackTime; // 공격 횟수
    public float armorPenetration; // 방어구 관통력
    public float damageIncrease; // 대미지 증가량
    public float trueDamage; // 고정 대미지
    public float speed; // 이동속도

    // 레벨 관련
    public float level; // 캐릭터 레벨
    public float exp; // 현재 경험치 량
    public float levelExp;// 레벨당 필요한 경험치
    public float expIncrease;// 경험치 증가량
    public float expPlus; // 경험치 추가량


    public Animator anim; // 플레이어 에니메이터
    public PlayerMove playerMove; // 스피드를 설정하기 위한 플레이어 무브

    public enum PlayerState
    {
        Idle,
        Run,
        Attack
    }

    public PlayerState pState; // 플레이어의 상태를 저장할 enum

    // Awake에서 초기화
    private void Awake()
    {
        attackDamage = 1f;
        armorPenetration = 0;
        trueDamage = 0;
        damageIncrease = 1f;
        attackTime = 1;
        playerMove.speed = speed = -2f;
        pState = PlayerState.Run;
        level = 1;
        exp = 0;
        levelExp = 30;
        expIncrease = 0;
        expPlus = 0;
       // anim.Rebind();
    }

    public float Level
    {
        get { return level; }
        set { level = value; }
    }

    public float Exp
    {
        get { return exp; }
        set { exp = value; }
    }

    public float LevelExp
    {
        get { return levelExp; }
        set { levelExp = value; }
    }

    public float ExpIncrease
    {
        get { return expIncrease; }
        set { expIncrease = value; }
    }

    public float ExpPlus
    {
        get { return expPlus; }
        set { expPlus = value; }
    }

    public float AttackDamage
    {
        get { return attackDamage; }
        set { attackDamage = value; }
    }

    public float DamageIncrease
    {
        get { return damageIncrease; }
        set { damageIncrease = value; }
    }

    public float TrueDamage
    {
        get { return trueDamage; }
        set { trueDamage = value; }
    }

    public int AttackTime
    {
        get { return attackTime; }
        set { attackTime = value; }
    }

    public float Speed
    {
        get { return speed; }
        set { playerMove.speed = speed = value; }
    }

    public float ArmorPenetration
    {
        get { return armorPenetration; }
        set { armorPenetration = value; }
    }

    public void Update()
    {
        LevelUpCheck();
    }

    public void LevelUpCheck()
    {
        if (LevelExp * 0.5f * Level < Exp)
        {
            GameManager gameManager = FindObjectOfType<GameManager>();
            Level += 1;
            Exp = 0;
            gameManager.GetAbility();
            gameManager.levelText.text = Level.ToString();
        }
    }
    
}
