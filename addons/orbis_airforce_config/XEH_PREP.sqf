orbis_airforce_fnc_autoSwapWeapon = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_autoSwapWeapon.sqf";
orbis_airforce_fnc_autoSwapWeaponTurret = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_autoSwapWeaponTurret.sqf";
orbis_airforce_fnc_commonInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_commonInit.sqf";

orbis_airforce_fnc_F16AerobaticInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_F16AerobaticInit.sqf";
orbis_airforce_fnc_F16AerobaticPostInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_F16AerobaticPostInit.sqf";
orbis_airforce_fnc_F16CommonLoop = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_F16CommonLoop.sqf";
orbis_airforce_fnc_F16TrainingInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_F16TrainingInit.sqf";
orbis_airforce_fnc_F16TrainingPostInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_F16TrainingPostInit.sqf";

orbis_airforce_fnc_FA18EInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_FA18EInit.sqf";
orbis_airforce_fnc_FA18FInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_FA18FInit.sqf";
orbis_airforce_fnc_FA18FTrainingInit = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_FA18FTrainingInit.sqf";

orbis_airforce_fnc_toggleSmoke = compile preProcessFileLineNumbers "orbis_airforce_config\scripts\fnc_toggleSmoke.sqf";

ace_pylons_fnc_showDialog_run = compile preprocessFileLineNumbers "z\ace\addons\pylons\functions\fnc_showDialog.sqf";
ace_pylons_fnc_showDialog = {
	[_this select 0, true] call ace_pylons_fnc_showDialog_run;
};
