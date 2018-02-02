params ["_executionPoint", "_civDeathPosMean", "_civDeathPosSTD", "_playersArray"];

// diag_log format ["killPenalty received: %1, %2, %3, %4", _executionPoint, _civDeathPosMean, _civDeathPosSTD, _playersArray];

private _maxTries = getNumber (configFile >> "Orbis_Civilian_Config" >> "generalConfig" >> "maxTries");
private _forgiveLimit = getNumber (configFile >> "Orbis_Civilian_Config" >> "mineConfig" >> "forgiveLimit");
private _maxMines = getNumber (configFile >> "Orbis_Civilian_Config" >> "mineConfig" >> "maxMines");

private _minesArray = missionNamespace getVariable ["minesArray", []];
private _randomPos = [0, 0];
private _roadRadius = 50;
private _roadList = [];
private _numTry1 = 0;
private _numTry2 = 0;

_minesArray = _minesArray select {!isNull (_x select 0)};

while {(_executionPoint > _forgiveLimit) && (count _minesArray <= _maxMines) && (_numTry1 < _maxTries)} do {
	_numTry1 = _numTry1 + 1;
	private _mineDispersion = getNumber (configFile >> "Orbis_Civilian_Config" >> "mineConfig" >> "mineDispersion");
	for "_i" from 0 to 1 do {
		private _valMean = _civDeathPosMean select _i;
		private _valDispersion = _mineDispersion * (_civDeathPosSTD select _i);
		_randomPos set [_i, _valMean + (_numTry1 random (2 * _valDispersion)) - _valDispersion];
	};

	while {(_roadList isEqualTo []) && (_numTry2 < _maxTries)} do {
		_numTry2 = _numTry2 + 1;
		_roadRadius = _roadRadius + 50;
		_roadList = _randomPos nearRoads _roadRadius;
	};
	// diag_log format ["numTry2: %1", _numTry2];
	// diag_log format ["roadList: %1", _roadList];

	if (!(_roadList isEqualTo [])) then {
		// diag_log "roadList not null";
		private _randomRoad = _roadList call BIS_fnc_selectRandom;
		private _roadPosASL = getPosASL _randomRoad;
		private _roadPosATL = getPosATL _randomRoad;
		private _maxViewDistance = getNumber (configFile >> "Orbis_Civilian_Config" >> "generalConfig" >> "maxViewDistance");
		private _minMineDistance = getNumber (configFile >> "Orbis_Civilian_Config" >> "mineConfig" >> "minMineDistance");
		private _isInSight = [_roadPosASL, _playersArray, _maxViewDistance] call orbis_civ_fnc_obstacleCheck;
		private _isNearMines = [_raodPosASL, _minesArray, _minMineDistance] call orbis_civ_fnc_isNearCheck;
		// diag_log format ["isInSight: %1, isNearMines: %2", _isInSight, _isNearMines];
		if (!_isInSight && !_isNearMines) then {
			_minesArray = [_roadPosATL, _minesArray] call orbis_civ_fnc_setIED;
			_executionPoint = _executionPoint - 1;
		};
	};
};

// diag_log format ["numTry1: %1", _numTry1];

missionNamespace setVariable ["minesArray", _minesArray];

_executionPoint
