params ["_mineTrigger"];

_mineObject = _mineTrigger getVariable ["mineObject", objNull];
_mineAmmo = _mineTrigger getVariable ["mineAmmo", objNull];

_mineAmmo setDamage 1;
"ACE_HEShellCrater" createVehicle getPosATL _mineObject;
deleteVehicle _mineObject;
