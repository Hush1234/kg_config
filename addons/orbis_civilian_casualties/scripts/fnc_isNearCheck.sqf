params ["_target", "_objects", "_maxDistance"];

private _isNear = false;

if (typeName _objects != "ARRAY") then {
	_objects = [_objects];
};

{
	if ((_target distance  _x) <= _maxDistance) exitWith {
		_isNear = true;
	};
} forEach _objects;

_isNear
