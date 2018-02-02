params ["_vehicle"];

// init smoke reload
private _maxSmokeMags = {_x isEqualTo "SmokeLauncherMag"} count getArray (configFile >> "CfgVehicles" >> typeOf _vehicle >> "Turrets" >> "MainTurret" >> "Turrets" >> "CommanderOptics" >> "magazines");
_vehicle setVariable ["maxSmokeMags", _maxSmokeMags];
_vehicle setVariable ["smokeReserve", _maxSmokeMags * 6 * 2];

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
