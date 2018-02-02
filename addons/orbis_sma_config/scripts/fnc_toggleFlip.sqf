private ["_currentOptic", "_configNext", "_isAuto", "_nextOptic"];
private _unit = call CBA_fnc_currentUnit;

_currentOptic = (primaryWeaponItems _unit) select 2;
_configNext = configProperties [configFile >> "CfgWeapons" >> _currentOptic, "configName _x == 'nextOpticMode'"];

if (!(_configNext isEqualTo [])) then {
	_nextOptic = getText (_configNext select 0);
	_unit removePrimaryWeaponItem _currentOptic;
	_unit addPrimaryWeaponItem _nextOptic;
};

[orbis_fnc_toggleFlip_auto] call CBA_fnc_execNextFrame;
