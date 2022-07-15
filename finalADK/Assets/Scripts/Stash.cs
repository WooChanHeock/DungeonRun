using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stash : MonoBehaviour
{
    public Text itemName;
    public Button itemEquip;
    public ItemManager itemManager;
    public List<Item> items;
    public int equipSound;
    public int equipEffect;
    public int currentIdx;

    void Start()
    {
        currentIdx = 0;
        if (PlayerPrefs.HasKey("equipSound"))
        {
            equipSound = PlayerPrefs.GetInt("equipSound");
        }
        else
        {
            PlayerPrefs.SetInt("equipSound", 1);
            PlayerPrefs.SetInt("gameSceneBgm", 1);
        }
        if (PlayerPrefs.HasKey("equipEffect"))
        {
            equipEffect = PlayerPrefs.GetInt("equipEffect");
        }
        else
        {
            PlayerPrefs.SetInt("equipEffect", 0);
            PlayerPrefs.SetInt("normalHit", 1);
        }
        items = new List<Item>();
        items.AddRange(itemManager.normalItem);
        items.AddRange(itemManager.rareItem);
        items.AddRange(itemManager.epicItem);
        Debug.Log(items.Count);
        StashInit();
    }

    public void ItemResetButton()
    {
        foreach (Item i in items)
        {
            i.DeleteItem();
        }
        Debug.Log("������ �ʱ�ȭ");
    }

    public void EquipButton()
    {
        if (items[currentIdx].GetType() == typeof(ItemEffect))
        {
            ItemEffect itemEffect = (ItemEffect)items[currentIdx];
            PlayerPrefs.SetInt("equipEffect", itemEffect.effectIdx);
            equipEffect = itemEffect.effectIdx;
        }
        else if (items[currentIdx].GetType() == typeof(ItemSound))
        {
            ItemSound itemSound = (ItemSound)items[currentIdx];
            Debug.Log(itemSound.soundIdx);
            PlayerPrefs.SetInt("equipSound", itemSound.soundIdx);
            equipSound = itemSound.soundIdx;

        }
        itemEquip.GetComponentInChildren<Text>().text = "��� ��";
        itemEquip.enabled = false;
        Debug.Log("���� ��ư");
    }

    public void RightButton()
    {
        if (currentIdx == items.Count - 1)
            currentIdx = 0;
        else
            currentIdx++;
        StashInit();

        Debug.Log("������ ��ư");
    }

    public void LeftButton()
    {
        if (currentIdx == 0)
            currentIdx = items.Count - 1;
        else
            currentIdx--;
        StashInit();

        Debug.Log("���� ��ư");
    }

    void StashInit()
    {
        itemName.text = items[currentIdx].itemName;
        if (items[currentIdx].HaveCheck())
        {
            if (items[currentIdx].GetType() == typeof(ItemEffect))
            {
                ItemEffect itemEffect = (ItemEffect)items[currentIdx];
                if (itemEffect.effectIdx == equipEffect)
                {
                    itemEquip.GetComponentInChildren<Text>().text = "��� ��";
                    itemEquip.enabled = false;
                }
                else
                {
                    itemEquip.GetComponentInChildren<Text>().text = "��� �ϱ�";
                    itemEquip.enabled = true;
                }
            }
            else if (items[currentIdx].GetType() == typeof(ItemSound))
            {
                ItemSound itemSound = (ItemSound)items[currentIdx];
                if (itemSound.soundIdx == equipSound)
                {
                    itemEquip.GetComponentInChildren<Text>().text = "��� ��";
                    itemEquip.enabled = false;
                }
                else
                {
                    itemEquip.GetComponentInChildren<Text>().text = "��� �ϱ�";
                    itemEquip.enabled = true;
                }
            }
        }
        else
        {
            itemEquip.GetComponentInChildren<Text>().text = "��� �Ұ�";
            itemEquip.enabled = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
