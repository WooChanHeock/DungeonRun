using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Card : MonoBehaviour
{
    AbilityManager abilityManager;
    int abNum;

    void Awake()
    {
        abilityManager = FindObjectOfType<AbilityManager>();
        
    }

    // 랜덤한 어빌리티로 UI초기화
    public void SettingCard()
    {
        abNum = Random.Range(0, abilityManager.Abilities.Count);
        this.transform.Find("Title").GetComponent<Text>().text = abilityManager.Abilities[abNum].Name;
        this.transform.Find("Content").GetComponent<Text>().text = abilityManager.Abilities[abNum].Content;
        this.transform.Find("Image").GetComponent<Image>().sprite = Resources.Load($@"Icon\Icon{abilityManager.Abilities[abNum].ImgNum}", typeof(Sprite)) as Sprite;
        switch (abilityManager.Abilities[abNum].rarity)
        {
            case Ability.ERarity.NORMAL :
                this.GetComponent<Image>().color = new Color(50/255f, 160/255f, 50/255f);
                break;
            case Ability.ERarity.RARE:
                this.GetComponent<Image>().color = new Color(0, 200/255f, 1);
                break;
            case Ability.ERarity.EPIC:
                this.GetComponent<Image>().color = new Color(150/255f, 50/255f, 195/255f);
                break;
            case Ability.ERarity.LEGEND:
                this.GetComponent<Image>().color = new Color(1, 200/255f, 0);
                break;
        }
        
    }

    public void ClickCard()
    {
        abilityManager.Abilities[abNum].AbilAction();
        this.transform.parent.parent.gameObject.SetActive(false);
        FindObjectOfType<GameManager>().pause = false;
        FindObjectOfType<PlayerMove>().pause = false;
        FindObjectOfType<PlayerInfo>().anim.SetTrigger("AttackToRun");
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
