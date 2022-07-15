using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInfo : MonoBehaviour
{

    public float attackDamage; // ���ݷ�
    public int attackTime; // ���� Ƚ��
    public float armorPenetration; // �� �����
    public float damageIncrease; // ����� ������
    public float trueDamage; // ���� �����
    public float speed; // �̵��ӵ�

    // ���� ����
    public float level; // ĳ���� ����
    public float exp; // ���� ����ġ ��
    public float levelExp;// ������ �ʿ��� ����ġ
    public float expIncrease;// ����ġ ������
    public float expPlus; // ����ġ �߰���


    public Animator anim; // �÷��̾� ���ϸ�����
    public PlayerMove playerMove; // ���ǵ带 �����ϱ� ���� �÷��̾� ����

    public enum PlayerState
    {
        Idle,
        Run,
        Attack
    }

    public PlayerState pState; // �÷��̾��� ���¸� ������ enum

    // Awake���� �ʱ�ȭ
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
