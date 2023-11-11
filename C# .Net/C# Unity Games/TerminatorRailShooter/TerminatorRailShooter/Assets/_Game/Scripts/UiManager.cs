using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;

[System.Serializable]
public class UiManager 
{
    [SerializeField] Slider healthBar;

    [Header("Weapon HUD")]
    [SerializeField] Image weaponIcon;
    [SerializeField] TextMeshProUGUI ammoText;
    [SerializeField] GameObject reloadWarning;
    [SerializeField] RectTransform crossHair;

    private WeaponData currentWeapon;

    public void Init(float maxHealth)
    {
        if (crossHair != null)
            Cursor.visible = false;

        healthBar.maxValue = maxHealth;
        healthBar.value = maxHealth;
        PlayerScript.OnWeaponChanged += UpdateWeapon;
    }

    public void RemoveEvent()
    {
        PlayerScript.OnWeaponChanged -= UpdateWeapon;
    }

    private void UpdateWeapon(WeaponData obj)
    {
        if (currentWeapon != null)
            currentWeapon.OnWeaponFired -= UpdateAmmo;

        currentWeapon = obj;
        currentWeapon.OnWeaponFired += UpdateAmmo;
        weaponIcon.sprite = currentWeapon.GetIcon;
    }

    public void UpdateHealth(float value)
    {
        healthBar.value = value;
    }

    void UpdateAmmo(int ammo)
    {
        reloadWarning.SetActive(ammo <= 0);

        ammoText.SetText(ammo.ToString("00"));
    }

    public void MoveCrosshair(Vector3 mousePosition)
    {
        if (crossHair != null)
            crossHair.position = mousePosition;
    }
}
