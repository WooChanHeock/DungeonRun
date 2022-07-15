using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemManager : MonoBehaviour
{
    // �������� ������ ����Ʈ
    public List<Item> normalItem;
    public List<Item> rareItem;
    public List<Item> epicItem;

    public List<GameObject> effectList;
    public List<AudioClip> effectSoundList;
    public List<AudioClip> BgmList;

    private void Awake()
    {
        // C# ����Ʈ�� ���ÿ��� �̷����� �ʱ�ȭ�� �ʿ��ϴ�
        normalItem = new List<Item>();
        rareItem = new List<Item>();
        epicItem = new List<Item>();

        RareItemInit();
        NormalItemInit();
        EpicItemInit();

       
    }

    // ��� �������� ����
    private void NormalItemInit()
    {
        normalItem.Add(AddSoundItem(normalItem.Count, "mainSceneBgm", 0));
        normalItem.Add(AddSoundItem(normalItem.Count, "gameSceneBgm", 1));
        normalItem.Add(AddSoundItem(normalItem.Count, "normalBgm", 2));
        normalItem.Add(AddEffectItem(normalItem.Count, "normalHit", 0,0));
        normalItem.Add(AddEffectItem(normalItem.Count, "normalEffect", 1,1));
    }

    private void RareItemInit()
    {
        rareItem.Add(AddSoundItem(rareItem.Count, "rareBgm", 3));
        rareItem.Add(AddEffectItem(rareItem.Count, "rareEffect", 2,2));
    }

    private void EpicItemInit()
    {
        epicItem.Add(AddSoundItem(epicItem.Count, "epicBgm", 4));
        epicItem.Add(AddEffectItem(epicItem.Count, "epicEffect", 3,3));
    }

    private Item AddSoundItem(int idx, string name, int sidx)
    {
        Item item = new ItemSound(idx, name, sidx);
        return item;
    }

    private Item AddEffectItem(int idx, string name, int sidx, int eidx)
    {
        Item item = new ItemEffect(idx, name, sidx, eidx);
        return item;
    }
}
