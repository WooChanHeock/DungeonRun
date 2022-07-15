using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Audio;

public class Audio : MonoBehaviour
{ 
    public AudioClip carHit;
    public AudioClip boom;
    public AudioClip slimeHit;
    public AudioClip slimeDie;
    public AudioClip turtleShellHit;
    public AudioClip turtleShellDie;

    public Slider sfxSlider;
    public AudioMixer audioMixer;
    public AudioSource audioSource;

    public void AudioControl()
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

    void Awake()
    {
        this.audioSource = GetComponent<AudioSource>();
    }

    void Start()
    {
        // 효과음 소리 설정
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
    }

}
