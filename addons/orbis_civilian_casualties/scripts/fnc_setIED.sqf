params ["_roadPosATL", "_minesArray"];

private _availIED = [["IEDLandSmall_F", "IEDLandSmall_Remote_Ammo"], ["IEDLandBig_F", "IEDLandBig_Remote_Ammo"], ["IEDUrbanSmall_F", "IEDUrbanSmall_Remote_Ammo"], ["IEDUrbanBig_F", "IEDUrbanBig_Remote_Ammo"]];
private _IEDChances = [0, 0, 0.8, 0.2];
private _IEDType = _availIED selectRandomWeighted _IEDChances;
private _IEDObject = _IEDType select 0;
private _iedBlast = _IEDType select 1;

private _mineOffset = getNumber (configFile >> "Orbis_Civilian_Config" >> "mineConfig" >> "mineOffset");
private _mineActivationRadius = getNumber (configFile >> "Orbis_Civilian_Config" >> "mineConfig" >> "mineActivationRadius");

private _mineObject = createMine [_IEDObject, _roadPosATL, [], _mineOffset];
private _mineTrigger = createTrigger ["EmptyDetector", getPosATL _mineObject];
private _mineAmmo = _iedBlast createVehicle getPosATL _mineObject;

_mineTrigger setVariable ["mineObject", _mineObject];
_mineTrigger setVariable ["mineAmmo", _mineAmmo];

_mineTrigger setTriggerArea [_mineActivationRadius, _mineActivationRadius, 0, false];
_mineTrigger setTriggerActivation ["WEST", "PRESENT", false];
_mineTrigger setTriggerStatements [
	"this",
	"[thisTrigger] spawn orbis_civ_fnc_mineExplode;",
	""
];

_mineObject addEventHandler ["Killed", {[_mineObject, _mineAmmo] spawn orbis_civ_fnc_mineExplode;}];
_mineAmmo addEventHandler ["Killed", {[_mineObject, _mineAmmo] spawn orbis_civ_fnc_mineExplode;}];

_mineIndex = count _minesArray;
_minesArray pushBack [_mineObject, _mineTrigger, false];

_minesArray
