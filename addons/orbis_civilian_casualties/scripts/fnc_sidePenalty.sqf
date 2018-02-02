params ["_levelOfViolence", "_playersArray", "_civiliansArray"];

private _maxViewDistance = getNumber (configFile >> "Orbis_Civilian_Config" >> "generalConfig" >> "maxViewDistance");
private _friendlyLimit = getNumber (configFile >> "Orbis_Civilian_Config" >> "militiaConfig" >> "friendlyLimit");

private _militiaArray = missionNamespace getVariable ["militiaArray", []];
private _militiaArrayNew = [];
private _availCivilians = [];

if (_levelOfViolence > _friendlyLimit) then {
	if (civilian getFriend west != 0) then {
		civilian setFriend [west, 0];
	};

	_militiaArray = _militiaArray select {alive _x};

	{
		private _isInSight = [_x, _playersArray, _maxViewDistance] call orbis_civ_fnc_obstacleCheck;
		private _hasArmed = _x getVariable ["hasArmed", false];
		if (!_isInSight && !_hasArmed) then {
			_availCivilians pushBack _x;
		};
	} forEach _civiliansArray;

	// diag_log format ["availCivils: %1", _availCivilians];

	if (!(_availCivilians isEqualTo [])) then {
		_availCivilians = _availCivilians call BIS_fnc_arrayShuffle;
		_militiaArray = [_militiaArray, _levelOfViolence, _availCivilians] call orbis_civ_fnc_spawnMilitia;
	};
};

missionNamespace setVariable ["militiaArray", _militiaArray];

_levelOfViolence
