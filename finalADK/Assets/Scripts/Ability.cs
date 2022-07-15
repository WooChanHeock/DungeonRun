using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Ability : MonoBehaviour
{
    public enum ERarity
    {
        NORMAL,
        RARE,
        EPIC,
        LEGEND
    }
    Action abilityAction;
    public string abilityName;
    public string abilityContent;
    int imgNum;
    public ERarity rarity;

    public Action AbilAction {
        get
        {
            return abilityAction;
        }
        set
        {
            abilityAction += value;
        }
    }

    public string Name
    {
        get
        {
            return abilityName;
        }
        set
        {
            abilityName = value;
        }
    }

    public string Content
    {
        get
        {
            return abilityContent;
        }
        set
        {
            abilityContent = value;
        }
    }

    public int ImgNum
    {
        get
        {
            return imgNum;
        }
        set
        {
            imgNum = value;
        }
    }
}
