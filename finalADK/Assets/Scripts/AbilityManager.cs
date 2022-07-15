using System.Collections.Generic;
using UnityEngine;
using System;

public class AbilityManager : MonoBehaviour
{
    public List<Ability> abilities;
    public List<Sprite> sprites;
    PlayerInfo playerInfo;

    private void Awake()
    {
       playerInfo = FindObjectOfType<PlayerInfo>();

        // �����Ƽ �߰��� ���⿡ -------------------- 
        AddAbility("����1", "���ݷ��� 1�����մϴ�.", () => { playerInfo.AttackDamage += 1; }, Ability.ERarity.NORMAL, 1);
        AddAbility("����2", "���ݷ��� 1.5�����մϴ�.", () => { playerInfo.AttackDamage += 1.5f; }, Ability.ERarity.RARE, 1);
        AddAbility("����3", "���ݷ��� 2�����մϴ�.", () => { playerInfo.AttackDamage += 2f; }, Ability.ERarity.EPIC, 1);
        AddAbility("����4", "���ݷ��� 2.5�����մϴ�.", () => { playerInfo.AttackDamage += 2.5f; }, Ability.ERarity.LEGEND, 1);
        AddAbility("���� ����", "������� 0.25���� ����Ƚ�� 1����.", () => { playerInfo.AttackTime += 1; playerInfo.DamageIncrease -= 0.25f; }, Ability.ERarity.EPIC, 14);
        AddAbility("Ʈ���� ����", "������� 0.35���� ����Ƚ�� 2����.", () => { playerInfo.AttackTime += 2; playerInfo.DamageIncrease -= 0.35f; }, Ability.ERarity.LEGEND, 20);
        AddAbility("�˳� ����1", "�� ������� 5�����մϴ�.", () => { playerInfo.ArmorPenetration += 5; }, Ability.ERarity.NORMAL, 47);
        AddAbility("�˳� ����2", "�� ������� 10�����մϴ�.", () => { playerInfo.ArmorPenetration += 10; }, Ability.ERarity.RARE, 47);
        AddAbility("�˳� ����3", "�� ������� 15�����մϴ�.", () => { playerInfo.ArmorPenetration += 15; }, Ability.ERarity.EPIC, 47);
        AddAbility("�˳� ����4", "�� ������� 25�����մϴ�.", () => { playerInfo.ArmorPenetration += 25; }, Ability.ERarity.LEGEND, 47);
        AddAbility("�͵� 1", "��������� 0.4�����մϴ�.", () => { playerInfo.TrueDamage += 0.4f; }, Ability.ERarity.NORMAL, 30);
        AddAbility("�͵� 2", "��������� 0.8�����մϴ�.", () => { playerInfo.TrueDamage += 0.8f; }, Ability.ERarity.RARE, 30);
        AddAbility("�͵� 3", "��������� 1.2�����մϴ�.", () => { playerInfo.TrueDamage += 1.2f; }, Ability.ERarity.EPIC, 30);
        AddAbility("�͵� 4", "��������� 2�����մϴ�.", () => { playerInfo.TrueDamage += 2f; }, Ability.ERarity.LEGEND, 30);
        AddAbility("�����1", "������� 15%�����մϴ�.", () => { playerInfo.DamageIncrease += 0.15f; }, Ability.ERarity.NORMAL, 24);
        AddAbility("�����2", "������� 20%�����մϴ�.", () => { playerInfo.DamageIncrease += 0.2f; }, Ability.ERarity.RARE, 24);
        AddAbility("�����3", "������� 30%�����մϴ�.", () => { playerInfo.DamageIncrease += 0.3f; }, Ability.ERarity.EPIC, 24);
        AddAbility("�����4", "������� 45%�����մϴ�.", () => { playerInfo.DamageIncrease += 0.45f; }, Ability.ERarity.LEGEND, 24);
        AddAbility("������1", "�̵��ӵ��� 0.5, ������� 5%�����մϴ�", () => { playerInfo.DamageIncrease += 0.05f; playerInfo.Speed -= 0.5f; }, Ability.ERarity.RARE, 34);
        AddAbility("������2", "�̵��ӵ��� 0.7, ������� 10%�����մϴ�", () => { playerInfo.DamageIncrease += 0.10f; playerInfo.Speed -= 0.7f; }, Ability.ERarity.EPIC, 34);
        AddAbility("������3", "�̵��ӵ��� 1, ������� 15%�����մϴ�", () => { playerInfo.DamageIncrease += 0.15f; playerInfo.Speed -= 1f; }, Ability.ERarity.LEGEND, 34);
        AddAbility("�ż�1", "�̵��ӵ��� 0.5 �����մϴ�", () => { playerInfo.Speed -= 0.5f; }, Ability.ERarity.NORMAL, 35);
        AddAbility("�ż�2", "�̵��ӵ��� 1 �����մϴ�", () => { playerInfo.Speed -= 1f; }, Ability.ERarity.RARE, 35);
        AddAbility("�ż�3", "�̵��ӵ��� 1.5 �����մϴ�", () => { playerInfo.Speed -= 1.5f; }, Ability.ERarity.EPIC, 35);
        AddAbility("��üȭ", "�̵��ӵ��� 2.5 �����մϴ�", () => { playerInfo.Speed -= 2.5f; }, Ability.ERarity.LEGEND, 43);
        AddAbility("���� 1", "��������� 0.5, �� ������� 10�����մϴ�.", () => { playerInfo.TrueDamage += 0.5f; playerInfo.ArmorPenetration += 10; }, Ability.ERarity.EPIC, 39);
        AddAbility("���� 2", "��������� 1, �� ������� 18�����մϴ�.", () => { playerInfo.TrueDamage += 1f; playerInfo.ArmorPenetration += 18; }, Ability.ERarity.LEGEND, 39);
        AddAbility("���ſ� �ϰ�1", "�̵��ӵ��� 0.5����, ���ݷ� 1.8����", () => { playerInfo.AttackDamage += 1.8f; playerInfo.Speed += 0.5f; }, Ability.ERarity.NORMAL, 38);
        AddAbility("���ſ� �ϰ�2", "�̵��ӵ��� 0.5����, ���ݷ� 2.3����", () => { playerInfo.AttackDamage += 2.3f; playerInfo.Speed += 0.5f; }, Ability.ERarity.RARE, 38);
        AddAbility("���ſ� �ϰ�3", "�̵��ӵ��� 0.5����, ���ݷ� 3.3����", () => { playerInfo.AttackDamage += 3.3f; playerInfo.Speed += 0.5f; }, Ability.ERarity.EPIC, 38);
        AddAbility("������ �ϰ�1", "�̵��ӵ��� 0.5, �� ������� 5�����մϴ�.", () => { playerInfo.ArmorPenetration += 5; playerInfo.Speed -= 0.5f; }, Ability.ERarity.RARE, 46);
        AddAbility("������ �ϰ�2", "�̵��ӵ��� 0.7, �� ������� 10�����մϴ�.", () => { playerInfo.ArmorPenetration += 10; playerInfo.Speed -= 0.7f; }, Ability.ERarity.EPIC, 46);
        AddAbility("������ �ϰ�3", "�̵��ӵ��� 1, �� ������� 15�����մϴ�.", () => { playerInfo.ArmorPenetration += 15; playerInfo.Speed -= 1f; }, Ability.ERarity.LEGEND, 46);
        AddAbility("�¾��� ����1", "��� ������ �ؼҷ� ���� �մϴ�.", () => { playerInfo.ArmorPenetration += 5; playerInfo.AttackDamage += 1f; playerInfo.Speed -= 0.3f; playerInfo.TrueDamage += 0.3f; playerInfo.DamageIncrease += 0.1f; }, Ability.ERarity.EPIC, 11);
        AddAbility("�¾��� ����2", "��� ������ �ҷ� ���� �մϴ�.", () => { playerInfo.ArmorPenetration += 10; playerInfo.AttackDamage += 1.5f; playerInfo.Speed -= 0.5f; playerInfo.TrueDamage += 0.5f; playerInfo.DamageIncrease += 0.25f; }, Ability.ERarity.LEGEND, 11);

        Debug.Log(Abilities.Count);

    }
    
    // �����Ƽ �߰� �Լ�
    public void AddAbility(string name, string content, Action action, Ability.ERarity rarity, int imgnum)
    {
        Ability ability = new Ability();
        ability.AbilAction += action;
        ability.abilityName = name;
        ability.abilityContent = content;
        ability.rarity = rarity;
        ability.ImgNum = imgnum;
        Abilities.Add(ability);

        
    }

    public List<Ability> Abilities
    {
        get
        {
            return abilities;
        }
        set
        {
            abilities = value;
        }
    }
 
}
