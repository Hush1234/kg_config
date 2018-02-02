private _vehicle = _this select 0;
private _cause = _this select 1;
private _damgage = _this select 2;

if !(_vehicle isKindOf "Tank_F") exitWith {};

private _impact = 30;

hintSilent format ["%1", _impact];

[_impact] call ace_hearing_fnc_earRinging;
