using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// 사운드 아이템
public class ItemSound : Item
{
    public int soundIdx;
    public ItemSound(int idx, string name, int sidx)
    { itemIdx = idx; itemName = name; soundIdx = sidx;
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
