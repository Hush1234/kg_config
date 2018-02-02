params ["_vehicle"];

[_vehicle, ["js_w_fa18_m61", "js_m_fa18_m61"], ["FIR_M61A2", "FIR_M61A2_412rnd_M"]] spawn orbis_airforce_fnc_autoSwapWeapon;
[_vehicle, ["js_w_fa18_CMFlareLauncher", "240Rnd_CMFlare_Chaff_Magazine"], ["FIR_CMLauncher", "240Rnd_CMFlareMagazine"]] spawn orbis_airforce_fnc_autoSwapWeapon;
