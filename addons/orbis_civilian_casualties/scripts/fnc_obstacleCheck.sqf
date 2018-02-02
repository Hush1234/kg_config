params ["_target", "_viewers", "_maxDistance"];

private _doesIntersect = false;

if ((typeName _target) == "OBJECT") then {
	{
		if (lineIntersects [getPosASL _target, eyePos _x, _target, _x] && ((_target distance eyePos _x) <= _maxDistance)) exitWith {
			_doesIntersect = true;
		};
	} forEach _viewers;
} else {
	{
		if (lineIntersects [_target, eyePos _x, _x] && ((_target distance eyePos _x) <= _maxDistance)) exitWith {
			_doesIntersect = true;
		};
	} forEach _viewers;
};

_doesIntersect
