using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Audio;

public class GameManager : MonoBehaviour
{
    // �ð� ����
    [SerializeField]
    private Image gaugeBar;
    [SerializeField]
    private Image faceImage;
    public Sprite[] faceSprites;
    public float limitTime;
    public float maxTime;

    // ���� ����
    public Slider bgmSlider;
    public AudioMixer audioMixer;
    public AudioSource bgmAudioSource;

    // UI ����
    public GameObject failUI;
    public GameObject clearUI;
    public GameObject cardUI;
    public GameObject optionUI;
    public Slider expSlider;
    public Text levelText;

    // �׹��� �͵�
    //public Button testButton;
    public bool pause;
    public GameObject player;
    public GameObject stage;
    public GameObject [] stageList;

    // ������ �迭
    public List<GameObject> effectList;
    public List<AudioClip> effectSoundList;
    public List<AudioClip> bgmList;

    float reset;

    void Awake()
    {
        // �������� ����
        if (PlayerPrefs.GetInt("stageNum") < stageList.Length)
            stage = stageList[PlayerPrefs.GetInt("stageNum")];
        else
            stage = stageList[stageList.Length-1];

       

        maxTime = limitTime = stage.GetComponent<StageInfo>().stageTime;
        pause = false;
        // �������� ����
        Instantiate(stage);

    }

    private void Start()
    {
        // BGM ���� ����
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
                //�ð��������� ���� ���� ����! 
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

    // �ɷ� ȹ��� UI ��� �� ���� ǥ��
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
