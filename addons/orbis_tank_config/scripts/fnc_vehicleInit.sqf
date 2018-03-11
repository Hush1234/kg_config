private _vehicle = _this select 0;
private _magazine = param [1, "SmokeLauncherMag"];

// init smoke reload
private _maxSmokeMags = {_x select 0 isEqualTo _magazine} count magazinesAllTurrets _vehicle;
private _magzineAmmoCount = getNumber (configFile >> "CfgMagazines" >> _magazine >> "count");
_vehicle setVariable ["maxSmokeMags", _maxSmokeMags];
_vehicle setVariable ["smokeReserve", _maxSmokeMags * _magzineAmmoCount * 6];
_vehicle setVariable ["smokeMagazine", _magazine];
_vehicle setVariable ["smokeRounds", _magzineAmmoCount];

// add smoke reload action
private _action = [
	"reloadSmoke",
	"Rearm Smoke",
	"",
	{[_this select 0] call orbis_tank_fnc_rearmSmokeScreen},
	{[_this select 0] call orbis_tank_fnc_canRearmSmoke},
	{},
	[],
	[0, 0, 0],
	10
] call ace_interact_menu_fnc_createAction;

[
	_vehicle,
	0,
	["ACE_MainActions"],
	_action
] call ace_interact_menu_fnc_addActionToObject; 

// start shell alert system
[_vehicle] spawn orbis_tank_fnc_shellAlert;
