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

        // 어빌리티 추가는 여기에 -------------------- 
        AddAbility("괴력1", "공격력이 1증가합니다.", () => { playerInfo.AttackDamage += 1; }, Ability.ERarity.NORMAL, 1);
        AddAbility("괴력2", "공격력이 1.5증가합니다.", () => { playerInfo.AttackDamage += 1.5f; }, Ability.ERarity.RARE, 1);
        AddAbility("괴력3", "공격력이 2증가합니다.", () => { playerInfo.AttackDamage += 2f; }, Ability.ERarity.EPIC, 1);
        AddAbility("괴력4", "공격력이 2.5증가합니다.", () => { playerInfo.AttackDamage += 2.5f; }, Ability.ERarity.LEGEND, 1);
        AddAbility("더블 어택", "대미지가 0.25감소 공격횟수 1증가.", () => { playerInfo.AttackTime += 1; playerInfo.DamageIncrease -= 0.25f; }, Ability.ERarity.EPIC, 14);
        AddAbility("트리플 어택", "대미지가 0.35감소 공격횟수 2증가.", () => { playerInfo.AttackTime += 2; playerInfo.DamageIncrease -= 0.35f; }, Ability.ERarity.LEGEND, 20);
        AddAbility("검날 연마1", "방어구 관통력이 5증가합니다.", () => { playerInfo.ArmorPenetration += 5; }, Ability.ERarity.NORMAL, 47);
        AddAbility("검날 연마2", "방어구 관통력이 10증가합니다.", () => { playerInfo.ArmorPenetration += 10; }, Ability.ERarity.RARE, 47);
        AddAbility("검날 연마3", "방어구 관통력이 15증가합니다.", () => { playerInfo.ArmorPenetration += 15; }, Ability.ERarity.EPIC, 47);
        AddAbility("검날 연마4", "방어구 관통력이 25증가합니다.", () => { playerInfo.ArmorPenetration += 25; }, Ability.ERarity.LEGEND, 47);
        AddAbility("맹독 1", "고정대미지 0.4증가합니다.", () => { playerInfo.TrueDamage += 0.4f; }, Ability.ERarity.NORMAL, 30);
        AddAbility("맹독 2", "고정대미지 0.8증가합니다.", () => { playerInfo.TrueDamage += 0.8f; }, Ability.ERarity.RARE, 30);
        AddAbility("맹독 3", "고정대미지 1.2증가합니다.", () => { playerInfo.TrueDamage += 1.2f; }, Ability.ERarity.EPIC, 30);
        AddAbility("맹독 4", "고정대미지 2증가합니다.", () => { playerInfo.TrueDamage += 2f; }, Ability.ERarity.LEGEND, 30);
        AddAbility("용맹함1", "대미지가 15%증가합니다.", () => { playerInfo.DamageIncrease += 0.15f; }, Ability.ERarity.NORMAL, 24);
        AddAbility("용맹함2", "대미지가 20%증가합니다.", () => { playerInfo.DamageIncrease += 0.2f; }, Ability.ERarity.RARE, 24);
        AddAbility("용맹함3", "대미지가 30%증가합니다.", () => { playerInfo.DamageIncrease += 0.3f; }, Ability.ERarity.EPIC, 24);
        AddAbility("용맹함4", "대미지가 45%증가합니다.", () => { playerInfo.DamageIncrease += 0.45f; }, Ability.ERarity.LEGEND, 24);
        AddAbility("안정감1", "이동속도가 0.5, 대미지가 5%증가합니다", () => { playerInfo.DamageIncrease += 0.05f; playerInfo.Speed -= 0.5f; }, Ability.ERarity.RARE, 34);
        AddAbility("안정감2", "이동속도가 0.7, 대미지가 10%증가합니다", () => { playerInfo.DamageIncrease += 0.10f; playerInfo.Speed -= 0.7f; }, Ability.ERarity.EPIC, 34);
        AddAbility("안정감3", "이동속도가 1, 대미지가 15%증가합니다", () => { playerInfo.DamageIncrease += 0.15f; playerInfo.Speed -= 1f; }, Ability.ERarity.LEGEND, 34);
        AddAbility("신속1", "이동속도가 0.5 증가합니다", () => { playerInfo.Speed -= 0.5f; }, Ability.ERarity.NORMAL, 35);
        AddAbility("신속2", "이동속도가 1 증가합니다", () => { playerInfo.Speed -= 1f; }, Ability.ERarity.RARE, 35);
        AddAbility("신속3", "이동속도가 1.5 증가합니다", () => { playerInfo.Speed -= 1.5f; }, Ability.ERarity.EPIC, 35);
        AddAbility("유체화", "이동속도가 2.5 증가합니다", () => { playerInfo.Speed -= 2.5f; }, Ability.ERarity.LEGEND, 43);
        AddAbility("부패 1", "고정대미지 0.5, 방어구 관통력이 10증가합니다.", () => { playerInfo.TrueDamage += 0.5f; playerInfo.ArmorPenetration += 10; }, Ability.ERarity.EPIC, 39);
        AddAbility("부패 2", "고정대미지 1, 방어구 관통력이 18증가합니다.", () => { playerInfo.TrueDamage += 1f; playerInfo.ArmorPenetration += 18; }, Ability.ERarity.LEGEND, 39);
        AddAbility("무거운 일격1", "이동속도가 0.5감소, 공격력 1.8증가", () => { playerInfo.AttackDamage += 1.8f; playerInfo.Speed += 0.5f; }, Ability.ERarity.NORMAL, 38);
        AddAbility("무거운 일격2", "이동속도가 0.5감소, 공격력 2.3증가", () => { playerInfo.AttackDamage += 2.3f; playerInfo.Speed += 0.5f; }, Ability.ERarity.RARE, 38);
        AddAbility("무거운 일격3", "이동속도가 0.5감소, 공격력 3.3증가", () => { playerInfo.AttackDamage += 3.3f; playerInfo.Speed += 0.5f; }, Ability.ERarity.EPIC, 38);
        AddAbility("날렵한 일격1", "이동속도가 0.5, 방어구 관통력이 5증가합니다.", () => { playerInfo.ArmorPenetration += 5; playerInfo.Speed -= 0.5f; }, Ability.ERarity.RARE, 46);
        AddAbility("날렵한 일격2", "이동속도가 0.7, 방어구 관통력이 10증가합니다.", () => { playerInfo.ArmorPenetration += 10; playerInfo.Speed -= 0.7f; }, Ability.ERarity.EPIC, 46);
        AddAbility("날렵한 일격3", "이동속도가 1, 방어구 관통력이 15증가합니다.", () => { playerInfo.ArmorPenetration += 15; playerInfo.Speed -= 1f; }, Ability.ERarity.LEGEND, 46);
        AddAbility("태양의 은총1", "모든 스탯이 극소량 증가 합니다.", () => { playerInfo.ArmorPenetration += 5; playerInfo.AttackDamage += 1f; playerInfo.Speed -= 0.3f; playerInfo.TrueDamage += 0.3f; playerInfo.DamageIncrease += 0.1f; }, Ability.ERarity.EPIC, 11);
        AddAbility("태양의 은총2", "모든 스탯이 소량 증가 합니다.", () => { playerInfo.ArmorPenetration += 10; playerInfo.AttackDamage += 1.5f; playerInfo.Speed -= 0.5f; playerInfo.TrueDamage += 0.5f; playerInfo.DamageIncrease += 0.25f; }, Ability.ERarity.LEGEND, 11);

        Debug.Log(Abilities.Count);

    }
    
    // 어빌리티 추가 함수
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
