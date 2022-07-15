using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;
using System;
using GoogleMobileAds.Api;
using GoogleMobileAds.Common;

public class MainMenu : MonoBehaviour
{
    //GoogleMobileAds
    private RewardedAd rewardedAd;


    public int stageNum;
    public Text stageText;
    public GameObject optionUI;
    public Text goldText;
    public Animator cameraAnim;
    public GameObject mainUI;
    public GameObject shopUI;
    public GameObject stashUI;
    public GameObject pickUpItemUI;

    public AudioClip mainBgm;

    AudioSource audioSource;

    //����
    public Slider bgmSlider;
    public Slider sfxSlider;
    public AudioMixer audioMixer;
    public ItemManager itemManager;

    // Start is called before the first frame update
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        dailyCheck();

        if (PlayerPrefs.HasKey("stageNum"))
            stageNum = PlayerPrefs.GetInt("stageNum");
        else
        {
            stageNum = 0;
            PlayerPrefs.SetInt("stageNum", stageNum);
            PlayerPrefs.Save();
        }
        stageText.text = "stage " + stageNum.ToString();
        if (PlayerPrefs.HasKey("BGM"))
        {
            float sound = PlayerPrefs.GetFloat("BGM");
            bgmSlider.value = sound;
            if (sound == -40f) audioMixer.SetFloat("BGM", -80);
            else audioMixer.SetFloat("BGM", bgmSlider.value);
        }
        else
        {
            PlayerPrefs.SetFloat("BGM", bgmSlider.maxValue);
            bgmSlider.value = PlayerPrefs.GetFloat("BGM");
        }
        if (PlayerPrefs.HasKey("SFX"))
        {
            float sound = PlayerPrefs.GetFloat("SFX");
            sfxSlider.value = sound;
            if (sound == -40f) audioMixer.SetFloat("SFX", -80);
            else audioMixer.SetFloat("SFX", sfxSlider.value);
        }
        else
        {
            PlayerPrefs.SetFloat("SFX", sfxSlider.maxValue);
            sfxSlider.value = PlayerPrefs.GetFloat("SFX");
        }
        if (PlayerPrefs.HasKey("gold"))
        {
            goldText.text = PlayerPrefs.GetInt("gold").ToString();
        }
        else
        {
            goldText.text = "0";
            PlayerPrefs.SetInt("gold", 0);
            PlayerPrefs.Save();
        }
        mainUI.SetActive(true);
        shopUI.SetActive(false);
        stashUI.SetActive(false);
        pickUpItemUI.SetActive(false);
        audioSource.clip = mainBgm;
        audioSource.loop = true;
        audioSource.Play();

        // unitId ����
        string adUnitId;
#if UNITY_ANDROID
        //adUnitId = "ca-app-pub-8274778145868105/4628713756"; 
        adUnitId = "ca-app-pub-3940256099942544/5224354917";
#elif UNITY_IPHONE
            adUnitId = "ca-app-pub-3940256099942544/1712485313";
#else
            adUnitId = "unexpected_platform";
#endif

        this.rewardedAd = new RewardedAd(adUnitId);

        this.rewardedAd.OnAdLoaded += HandleRewardedAdLoaded; // ���� �ε尡 �Ϸ�Ǹ� ȣ��
        this.rewardedAd.OnAdFailedToLoad += HandleRewardedAdFailedToLoad; // ���� �ε尡 �������� �� ȣ��
        this.rewardedAd.OnAdOpening += HandleRewardedAdOpening; // ���� ǥ�õ� �� ȣ��(��� ȭ���� ����)
        this.rewardedAd.OnAdFailedToShow += HandleRewardedAdFailedToShow; // ���� ǥ�ð� �������� �� ȣ��
        this.rewardedAd.OnUserEarnedReward += HandleUserEarnedReward;// ���� ��û�� �� ������ �޾ƾ��� �� ȣ��
        this.rewardedAd.OnAdClosed += HandleRewardedAdClosed; // �ݱ� ��ư�� �����ų� �ڷΰ��� ��ư�� ���� ������ ���� ���� �� ȣ��

        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);

    }

    public void HandleRewardedAdLoaded(object sender, EventArgs args) { Debug.Log("���� �ε� �Ϸ�"); }

    public void HandleRewardedAdFailedToLoad(object sender, AdFailedToLoadEventArgs args)
    {
        MonoBehaviour.print("���� �ε� ���� : " + args);
    }

    public void HandleRewardedAdOpening(object sender, EventArgs args) { Debug.Log("���� ǥ��"); }

    public void HandleRewardedAdFailedToShow(object sender, EventArgs args)
    {
        MonoBehaviour.print("���� ǥ�� ����: " + args);
    }

    public void HandleRewardedAdClosed(object sender, EventArgs args) { Debug.Log("���� ����"); this.CreateAndLoadRewardedAd(); }

    private void CreateAndLoadRewardedAd()
    {
        // Create an empty ad request.
        AdRequest request = new AdRequest.Builder().Build();
        // Load the rewarded ad with the request.
        this.rewardedAd.LoadAd(request);
    }

    private void HandleUserEarnedReward(object sender, Reward args)
    {

        PlayerPrefs.SetInt("DailyChest", PlayerPrefs.GetInt("DailyChest") + 1);
        PlayerPrefs.SetInt("gold", PlayerPrefs.GetInt("gold") + 100);
        goldText.text = PlayerPrefs.GetInt("gold").ToString();
        pickUpItemUI.GetComponentInChildren<Text>().text = "100gold ȹ��!";
        pickUpItemUI.SetActive(true);
    }

    public void UserChoseToWatchAd()
    {
        if (PlayerPrefs.GetInt("AdGold") < 3)
        {
            if (this.rewardedAd.IsLoaded())
            {
                this.rewardedAd.Show();
            }
        }
        else
        {
            pickUpItemUI.GetComponentInChildren<Text>().text = "���� ��� �������� �����̽��ϴ�.";
            pickUpItemUI.SetActive(true);
        }
        PlayerPrefs.SetInt("AdGold", PlayerPrefs.GetInt("AdGold") + 1);
    }

    public void BGMControl()
    {
        float sound = bgmSlider.value;
        PlayerPrefs.SetFloat("BGM", sound);
        if (sound == -40f)
        {
            audioMixer.SetFloat("BGM", -80);
        }
        else
        {
            audioMixer.SetFloat("BGM", sound);
        }
    }

    public void SFXControl()
    {
        float sound = sfxSlider.value;
        PlayerPrefs.SetFloat("SFX", sound);
        if (sound == -40f)
        {
            audioMixer.SetFloat("SFX", -80);
        }
        else
        {
            audioMixer.SetFloat("SFX", sound);
        }
    }

    public void OptionToggle()
    {
        optionUI.SetActive(!optionUI.activeSelf);
    }

    private void Update()
    {
        if (cameraAnim.GetCurrentAnimatorStateInfo(0).IsName("goToShop"))
        {
            mainUI.SetActive(false);
            if (cameraAnim.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
            {
                shopUI.SetActive(true);
            }
        }
        if (cameraAnim.GetCurrentAnimatorStateInfo(0).IsName("returnToMain"))
        {
            shopUI.SetActive(false);
            if (cameraAnim.GetCurrentAnimatorStateInfo(0).normalizedTime >= 1.0f)
            {
                mainUI.SetActive(true);
                cameraAnim.SetTrigger("Idle");
            }
        }

    }

    public void ShopButton()
    {
        cameraAnim.SetTrigger("shop");
        mainUI.SetActive(false);
    }

    public void StashButton()
    {
        mainUI.SetActive(false);
        stashUI.SetActive(true);
    }

    public void StashReturn()
    {
        mainUI.SetActive(true);
        stashUI.SetActive(false);
    }

    public void MainReturn()
    {
        cameraAnim.SetTrigger("main");
        shopUI.SetActive(false);
    }

    public void StageReset()
    {
        stageNum = 0;
        PlayerPrefs.SetInt("stageNum", stageNum);
        PlayerPrefs.Save();
        stageText.text = "stage " + stageNum.ToString();
    }

    public void itemChest()
    {
        if (PlayerPrefs.GetInt("gold") >= 150)
        {
            PlayerPrefs.SetInt("gold", PlayerPrefs.GetInt("gold") - 150);
            goldText.text = PlayerPrefs.GetInt("gold").ToString();
        }
        else
        {
            pickUpItemUI.GetComponentInChildren<Text>().text = "gold�� �����մϴ�.";
            pickUpItemUI.SetActive(true);
            return;
        }
        getItem();
    }

    private void getItem()
    {
        int rndNum = UnityEngine.Random.Range(0, 1000);
        if (rndNum <= 50)
        {
            int itemNum = UnityEngine.Random.Range(0, itemManager.epicItem.Count);
            itemManager.epicItem[itemNum].GetItem();
            pickUpItemUI.GetComponentInChildren<Text>().text = itemManager.epicItem[itemNum].itemName + "ȹ���Ͽ����ϴ�.";
            pickUpItemUI.SetActive(true);
        }
        else if (rndNum <= 300)
        {
            int itemNum = UnityEngine.Random.Range(0, itemManager.rareItem.Count);
            itemManager.rareItem[itemNum].GetItem();
            pickUpItemUI.GetComponentInChildren<Text>().text = itemManager.rareItem[itemNum].itemName + "ȹ���Ͽ����ϴ�.";
            pickUpItemUI.SetActive(true);

        }
        else
        {
            int itemNum = UnityEngine.Random.Range(0, itemManager.normalItem.Count);
            itemManager.normalItem[itemNum].GetItem();
            pickUpItemUI.GetComponentInChildren<Text>().text = itemManager.normalItem[itemNum].itemName + "ȹ���Ͽ����ϴ�.";
            pickUpItemUI.SetActive(true);
        }
    }

    public void CheckItemPickUp()
    {
        pickUpItemUI.SetActive(false);
    }

    public void dailyCheck()
    {
        //DateTime currentTime = DateTime.UtcNow; //���� �����ð�
        DateTime currentTime = DateTime.Now; //���� �ð�

        // DailyChestŰ�� ���� ���
        if (!PlayerPrefs.HasKey("DailyChest"))
        {
            PlayerPrefs.SetInt("Day", currentTime.Day);
            PlayerPrefs.SetInt("Year", currentTime.Year);
            PlayerPrefs.SetInt("Month", currentTime.Month);
            PlayerPrefs.SetInt("DailyChest", 0);
            PlayerPrefs.SetInt("AdGold", 0);
            return;
        }
        if (PlayerPrefs.GetInt("Day") != currentTime.Day)
        {
            PlayerPrefs.SetInt("DailyChest", 0);
            PlayerPrefs.SetInt("AdGold", 0);
        }
        else if (PlayerPrefs.GetInt("Month") != currentTime.Month)
        {
            PlayerPrefs.SetInt("DailyChest", 0);
            PlayerPrefs.SetInt("AdGold", 0);
        }
        else if (PlayerPrefs.GetInt("Year") != currentTime.Year)
        {
            PlayerPrefs.SetInt("DailyChest", 0);
            PlayerPrefs.SetInt("AdGold", 0);
        }
        else
        {
            Debug.Log("���� �ʱ�ȭ �̹� �Ϸ�");
            return;
        }
        PlayerPrefs.SetInt("Day", currentTime.Day);
        PlayerPrefs.SetInt("Year", currentTime.Year);
        PlayerPrefs.SetInt("Month", currentTime.Month);
    }

    public void dailyChest()
    {
        if (PlayerPrefs.GetInt("DailyChest") < 1)
        {
            getItem();
        }
        else
        {
            pickUpItemUI.GetComponentInChildren<Text>().text = "�����̹� ������ �����̽��ϴ�.";
            pickUpItemUI.SetActive(true);
            return;
        }
        PlayerPrefs.SetInt("DailyChest", PlayerPrefs.GetInt("DailyChest") + 1);
    }
}
