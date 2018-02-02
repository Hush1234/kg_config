orbis_airforce_fnc_aerobaticF16Init = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_aerobaticF16Init.sqf";
orbis_airforce_fnc_aerobaticF16Loop = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_aerobaticF16Loop.sqf";
orbis_airforce_fnc_aerobaticF16PostInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_aerobaticF16PostInit.sqf";
orbis_airforce_fnc_autoSwapWeapon = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_autoSwapWeapon.sqf";
orbis_airforce_fnc_autoSwapWeaponTurret = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_autoSwapWeaponTurret.sqf";
orbis_airforce_fnc_commonInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_commonInit.sqf";
orbis_airforce_fnc_FA18Einit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_FA18Einit.sqf";
orbis_airforce_fnc_FA18Finit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_FA18Finit.sqf";
orbis_airforce_fnc_toggleSmoke = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_toggleSmoke.sqf";

ace_pylons_fnc_showDialog_run = compile preprocessFileLineNumbers "z\ace\addons\pylons\functions\fnc_showDialog.sqf";
ace_pylons_fnc_showDialog = {
	[_this select 0, true] call ace_pylons_fnc_showDialog_run;
};
