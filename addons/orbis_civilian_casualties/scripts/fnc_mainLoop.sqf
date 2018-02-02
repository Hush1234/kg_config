// diag_log format ["mainLoop time: %1", CBA_missionTime];

params ["_lastTimeStamp", "_elapsedTime"];

private _unitsArray = allUnits;
private _civiliansArray = [];
private _loopTime = getNumber (configFile >> "Orbis_Civilian_Config" >> "generalConfig" >> "loopTime");
private _spawnTime = getNumber (configFile >> "Orbis_Civilian_Config" >> "generalConfig" >> "spawnTime");

_elapsedTime = _elapsedTime + (CBA_missionTime - _lastTimeStamp);

{
	if ((side _x) == civilian) then {
		private _hasTrigger = _x getVariable ["hasTrigger", false];
		if (!_hasTrigger) then {
			_killedEventID = _x addEventHandler ["Killed", {_this spawn orbis_civ_fnc_civKilledEvent}];
			_x setVariable ["killedEventID", _killedEventID];
			_x setVariable ["hasTrigger", true];
		};
		_civiliansArray pushBack _x;
	};
} forEach _unitsArray;

// _civiliansArray = [_civiliansArray] call orbis_civ_fnc_spawnCivilians;

if (_elapsedTime >= _spawnTime) then {
	private _townNames = missionNamespace getVariable ["townNames", []];
	private _townNamespaces = missionNamespace getVariable ["townNamespaces", []];
	private _playersArray = allPlayers - entities "HeadlessClient_F";
	private _levelOfViolence = missionNamespace getVariable ["levelOfViolence", 0];

	{
		private _townIndex = _townNames find _x;
		private _currentNamespace = _townNamespaces select _townIndex;
		private _executionPoint = _currentNamespace select 0;
		private _civDeathPositions = _currentNamespace select 1;
		private _civDeathPosMean = [0, 0];
		private _civDeathPosSTD = [0, 0];

		if (!(_civDeathPositions isEqualTo [])) then {
			for "_i" from 0 to 1 do {
				{
					_civDeathPosMean set [_i, (_civDeathPosMean select _i) + (_x select _i)];

				} forEach _civDeathPositions;
				_civDeathPosMean set [_i, (_civDeathPosMean select _i) / (count _civDeathPositions)];

				{
					_civDeathPosSTD set [_i, (_civDeathPosSTD select _i) + (((_civDeathPosMean select _i) - (_x select _i)) ^ 2)];
				} forEach _civDeathPositions;
				_civDeathPosSTD set [_i, sqrt ((_civDeathPosSTD select _i) / (count _civDeathPositions))];
			};

			_executionPoint = [_executionPoint, _civDeathPosMean, _civDeathPosSTD, _playersArray] call orbis_civ_fnc_killPenalty;

			_currentNamespace = [_executionPoint, _civDeathPositions];
			_townNamespaces set [_townIndex, _currentNamespace];

			// diag_log format ["time: %1, town: %2, exp: %3", CBA_missionTime, _x, _executionPoint];
		};
	} forEach _townNames;

	_levelOfViolence = [_levelOfViolence, _playersArray, _civiliansArray] call orbis_civ_fnc_sidePenalty;
	_elapsedTime = _elapsedTime - _spawnTime;
	missionNamespace setVariable ["townNamespaces", _townNamespaces];
	missionNamespace setVariable ["levelOfViolence", _levelOfViolence];

	// diag_log format ["lv: %1", _levelOfViolence];
};

[orbis_civ_fnc_mainLoop, [CBA_missionTime, _elapsedTime], _loopTime] call CBA_fnc_waitAndExecute;
