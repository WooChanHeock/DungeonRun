using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// ���������� ������ �����ۿ� ����� ����� Ŭ����
public class Item 
{

    public string itemName;
    public int itemIdx;
    protected bool isHave;

    public void DeleteItem() { isHave = false; PlayerPrefs.SetInt(itemName, 0); }
    public void GetItem() { isHave = true; PlayerPrefs.SetInt(itemName, 1); }
    public bool HaveCheck() { return isHave; }
}
