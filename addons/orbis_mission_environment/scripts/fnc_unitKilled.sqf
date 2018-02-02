params ["_unit", "_killer"];

private _typeIndex = _unit getVariable ["unitTypeNumber", -1];
if (_typeIndex < 0) exitWith {};

private _deads = missionNamespace getVariable ["deadUints", []];
if (_unit isEqualTo _killer) then {
	missionNamespace setVariable ["deadUints", _deads pushBack [_typeIndex, -1]];
} else {
	for "_i" from 0 to 4 do {
		if (_killer isKindOf (["Plane", "Helicopter", "Tank", "Car", "Man"] select _i)) exitWith {
			missionNamespace setVariable ["deadUints", _deads pushBack [_typeIndex, _i]];
		};
	};
};
