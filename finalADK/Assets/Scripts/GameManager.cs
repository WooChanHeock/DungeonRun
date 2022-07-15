using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Audio;

public class GameManager : MonoBehaviour
{
    // 시간 관련
    [SerializeField]
    private Image gaugeBar;
    [SerializeField]
    private Image faceImage;
    public Sprite[] faceSprites;
    public float limitTime;
    public float maxTime;

    // 사운드 관련
    public Slider bgmSlider;
    public AudioMixer audioMixer;
    public AudioSource bgmAudioSource;

    // UI 관련
    public GameObject failUI;
    public GameObject clearUI;
    public GameObject cardUI;
    public GameObject optionUI;
    public Slider expSlider;
    public Text levelText;

    // 그밖의 것들
    //public Button testButton;
    public bool pause;
    public GameObject player;
    public GameObject stage;
    public GameObject [] stageList;

    // 아이템 배열
    public List<GameObject> effectList;
    public List<AudioClip> effectSoundList;
    public List<AudioClip> bgmList;

    float reset;

    void Awake()
    {
        // 스테이지 세팅
        if (PlayerPrefs.GetInt("stageNum") < stageList.Length)
            stage = stageList[PlayerPrefs.GetInt("stageNum")];
        else
            stage = stageList[stageList.Length-1];

       

        maxTime = limitTime = stage.GetComponent<StageInfo>().stageTime;
        pause = false;
        // 스테이지 생성
        Instantiate(stage);

    }

    private void Start()
    {
        // BGM 볼륨 맞춤
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

        bgmAudioSource.loop = true;
        if (PlayerPrefs.GetInt("equipSound") == 1)
            bgmAudioSource.clip = stage.GetComponent<StageInfo>().stageBgm;
        else
            bgmAudioSource.clip = bgmList[PlayerPrefs.GetInt("equipSound")];
        bgmAudioSource.Play();
    }

    public void AudioControl()
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

    public void OptionToggle()
    {
        optionUI.SetActive(!optionUI.activeSelf);
    }

   

    // Update is called once per frame
    void Update()
    {
        if (!pause)
        {
            limitTime -= Time.deltaTime;
            gaugeBar.fillAmount = limitTime / maxTime;
            if (limitTime / maxTime <= 0.5f)
            {
                faceImage.sprite = faceSprites[1];
            }
            //Debug.Log(LimitTime);
            if (limitTime < 0)
            {
                pause = true;
                player.GetComponent<PlayerMove>().pause = true;
                failUI.SetActive(true);
                //시간제한으로 인해 게임 오버! 
                //SceneManager.LoadScene(0);
            }
            PlayerInfo playerInfo = player.GetComponent<PlayerInfo>();
            expSlider.value = playerInfo.Exp / (playerInfo.LevelExp * 0.5f * playerInfo.Level);
        }
        else
        {
            reset = Time.deltaTime;
        }
    }

    // 능력 획득시 UI 출력 및 랜덤 표시
    public void GetAbility()
    {
        pause = true;
        player.GetComponent<PlayerMove>().pause = true;
        cardUI.SetActive(true);
        cardUI.transform.Find("Canvas").Find("Card1").GetComponent<Card>().SettingCard();
        cardUI.transform.Find("Canvas").Find("Card3").GetComponent<Card>().SettingCard();
        cardUI.transform.Find("Canvas").Find("Card2").GetComponent<Card>().SettingCard();
    }
}
