using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 이펙트 아이템
public class ItemEffect : Item
{
    public int effectIdx;
    public int effectSoundIdx;
    public ItemEffect(int idx, string name, int sidx, int eidx) { itemIdx = idx; itemName = name; effectSoundIdx = sidx; effectIdx = eidx;
        if (PlayerPrefs.HasKey(name))
        {
            if (PlayerPrefs.GetInt(name) == 0)
            {
                isHave = false;
            }
            else
            {
                isHave = true;
            }
        }
        else
        {
            PlayerPrefs.SetInt(name, 0);
            isHave = false;
        }
    }
}
