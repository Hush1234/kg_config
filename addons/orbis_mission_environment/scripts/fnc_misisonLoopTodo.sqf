/*
dummy script
saved for later use 
*/

#include "script_settings.sqf"
diag_log format ["orbis_mission_environment missionLoop run time: %1", time];

params ["_timeOld", "_points", "_factionArray"];
_factionArray params ["_playerSide", "_objectSide", "_objectFaction"];

private _playerCount = count (allPlayers - entities "HeadlessClient_F");
private _playerCountInit = missionNamespace getVariable ["playerCountInit", _playerCount];
_points = _points + (time - _timeOld) * _playerCount * POINT_MULTIPLIER;
diag_log format ["orbis_mission_environment missionLoop points: %1", _points];

// set up units array
private _playerSidePlanes = (entities "Plane") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _playerSidehelis = (entities "Helicopter") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _playerSidetanks = (entities "Tank") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _playerSidevehicles = (entities "Car") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _playerSideinfs = (entities "Man") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _playerSideUnits = [_playerSidePlanes, _playerSidehelis, _playerSidetanks, _playerSidevehicles, _playerSideinfs];

private _objectSidePlanes = (entities "Plane") select {(side _x isEqualTo _objectSide) && (alive _x)};
private _objectSidehelis = (entities "Helicopter") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _objectSidetanks = (entities "Tank") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _objectSidevehicles = (entities "Car") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _objectSideinfs = (entities "Man") select {(side _x isEqualTo _playerSide) && (alive _x)};
private _objectSideUnits = [_objectSidePlanes, _objectSidehelis, _objectSidetanks, _objectSidevehicles, _objectSideinfs];

// update dead units
private _deadUnits = missionNamespace getVariable ["deadUints", []];
private _planeKills = _deadUnits select {_x select 0 isEqualTo 0};
private _heliKills = _deadUnits select {_x select 0 isEqualTo 1};
private _tankKills = _deadUnits select {_x select 0 isEqualTo 2};
private _vehicleKills = _deadUnits select {_x select 0 isEqualTo 3};
private _infKills = _deadUnits select {_x select 0 isEqualTo 4};

private _unkwownKills = _deadUnits select {_x select 1 isEqualTo -1};
private _planeUnkwownKills = _unkwownKills select {_x select 0 isEqualTo 0};
private _heliUnkwownKills = _unkwownKills select {_x select 0 isEqualTo 1};
private _tankUnkwownKills = _unkwownKills select {_x select 0 isEqualTo 2};
private _vehicleUnkwownKills = _unkwownKills select {_x select 0 isEqualTo 3};
private _infUnkwownKills = _unkwownKills select {_x select 0 isEqualTo 4};
missionNamespace setVariable ["deadUints", []];

// update score assessment
private _scoreNamspace = missionNamespace getVariable ["scoreNamespace", [[0, 0, 0, 0, 0], [0, 0, 0, 0, 0], [0, 0, 0, 0, 0], [0, 0, 0, 0, 0], [0, 0, 0, 0, 0]]];
private _scoreNamspaceOld = _scoreNamspace;
{
	_x set [0, _x + _planeKills select {_x select 1 isEqualTo _forEachIndex}];
	_x set [1, _x + _heliKills select {_x select 1 isEqualTo _forEachIndex}];
	_x set [2, _x + _tankKills select {_x select 1 isEqualTo _forEachIndex}];
	_x set [3, _x + _vehicleKills select {_x select 1 isEqualTo _forEachIndex}];
	_x set [4, _x + _infKills select {_x select 1 isEqualTo _forEachIndex}];
} forEach _scoreNamspace;

missionNamespace setVariable ["scoreNamespace", _scoreNamspace];
private _scores = _scoreNamspace apply {[(_x select 0) * PLANE_SCORE + (_x select 1) * HELI_SCORE, (_x select 2) * TANK_SCORE + (_x select 3) * VEHICLE_SCORE + (_x select 4) * INF_SCORE]};
private _aaScores = _scores select 0;
private _agScores = _scores select 1;
diag_log format ["orbis_mission_environment missionLoop scores: %1", _scores];

// update threat assessment
private _airThreat = missionNamespace getVariable ["airThreat", 0];
private _groundThreat = missionNamespace getVariable ["groundThreat", 0];
_airThreat = _airThreat + (time - _timeOld) * ((count _playerSidePlanes * PLANE_SCORE) + (count _playerSidehelis * HELI_SCORE));
_groundThreat = _groundThreat + (time - _timeOld) * ((count _playerSidetanks * TANK_SCORE) + (count _playerSidevehicles * VEHICLE_SCORE) + (count _playerSideinfs * INF_SCORE));
private _totalThreat = _airThreat + _groundThreat;
missionNamespace setVariable ["airThreat", _airThreat];
missionNamespace setVariable ["groundThreat", _groundThreat];
diag_log format ["orbis_mission_environment missionLoop airThreat: %1, groundThreat: %2", _airThreat, _groundThreat];

// estimate price for current units
private _pointAssessment = [0, 0, 0, 0, 0];
{
	_pointAssessment set [(_objectSideUnits select _forEachIndex) * (orbis_misison_pointsGeneral select _forEachIndex)];
} forEach _pointAssessment;
diag_log format ["orbis_mission_environment missionLoop pointAssessment: %1", _pointAssessment];

// calculate score/point effectiveness
private _aaScoreEffectiveness = [-1, -1, -1, -1, -1];
private _aaScoreAverage = 0;
private _aaScoreCount = 0;
for "_i" from 0 to 4 do {
	if !(_pointAssessment select _i isEqualTo 0) then {
		_aaScoreEffectiveness set [_i, ((_aaScores select _i) - (_scoreNamspaceOld select _i)) / (_pointAssessment select _i)];
		_aaScoreAverage = _aaScoreAverage + (((_aaScores select _i) - (_scoreNamspaceOld select _i)) / (_pointAssessment select _i));
		_aaScoreCount = _aaScoreCount + 1;
	};
};
if (_aaScoreCount isEqualTo 0) then {
	_aaScoreEffectiveness = [1, 1, 1, 1, 1];
	_aaScoreAverage = 1;
} else {
	_aaScoreAverage = _aaScoreAverage / _aaScoreCount;
	_aaScoreEffectiveness apply {if (_x < 0) then {_aaScoreAverage} else {_x}};
};

private _agScoreEffectiveness = [-1, -1, -1, -1, -1];
private _agScoreAverage = 0;
private _agScoreCount = 0;
for "_i" from 0 to 4 do {
	if !(_pointAssessment select _i isEqualTo 0) then {
		_agScoreEffectiveness set [_i, ((_agScores select _i) - (_scoreNamspaceOld select _i)) / (_pointAssessment select _i)];
		_agScoreAverage = _agScoreAverage + (((_agScores select _i) - (_scoreNamspaceOld select _i)) / (_pointAssessment select _i));
		_agScoreCount = _agScoreCount + 1;
	};
};
if (_agScoreCount isEqualTo 0) then {
	_agScoreEffectiveness = [1, 1, 1, 1, 1];
	_agScoreAverage = 1;
} else {
	_agScoreAverage = _agScoreAverage / _agScoreCount;
	_agScoreEffectiveness apply {if (_x < 0) then {_agScoreAverage} else {_x}};
};

diag_log format ["orbis_mission_environment missionLoop aaScoreEffectiveness: %1, agScoreEffectiveness: %2", _aaScoreEffectiveness, _agScoreEffectiveness];

// calculate point distribution
private _totalEffectiveness = [0, 0, 0, 0, 0];
private _effectivenessSum = 0;
{
	private _value = (((_aaScoreEffectiveness select _forEachIndex) * _airThreat) + ((_agScoreEffectiveness select _forEachIndex) * _groundThreat)) / _totalThreat;
	_totalEffectiveness set [_forEachIndex, _value];
	_effectivenessSum = _effectivenessSum + _value;
} forEach _totalEffectiveness;
private _pointRatio = _totalEffectiveness apply {_x / _effectivenessSum};
private _pointDistribution = _pointRatio apply {_x * _points};
_points = 0;
diag_log format ["orbis_mission_environment missionLoop pointDistribution: %1", _pointDistribution];

// get spawn location
private _missionCenterPos = missionNamespace getVariable ["missionCenterPos", [0, 0, 0]];
private _missionAreaRadius = missionNamespace setVariable ["missionAreaRadius", 500];
private _missionPlayerPos = missionNamespace setVariable ["missionPlayerPos", [0, 0, 0]];
private _locationNames = ["NameCity", "NameCityCapital", "NameVillage", "NameLocal", "Hill", "Mount", "Airport"];

private _missionToPlayer = _missionCenterPos getDir _missionPlayerPos;
private _dirMax = _missionToPlayer + 45;
private _missionToPlane = _dirMax + (time random 270);
if (_missionToPlane >= 360) then {
	_missionToPlane = _missionToPlane - 360;
};
private _planeLoaction = (_missionCenterPos getPos [40000, _missionToPlane]) set [2, 1000];
private _groundLocation = getPos selectRandom (nearestLocations [_missionPlayerPos, _locationNames, 50000] select {(getPos _x distance _missionCenterPos > _missionAreaRadius) && (getPos _x distance _missionCenterPos < (_missionAreaRadius * 3)) && (getPos _x distance _missionPlayerPos > 2000)});

// spawn reinforcing units
private _spawnGroups = [];

while {{(_x select 2) <= _pointDistribution select 0} count orbis_mission_planeArray > 0} do { // plane
	private _thisSpawn = selectRandom (orbis_mission_planeArray select {_x <= _pointDistribution select 0});
	private _spawnLocation = [[_planeLoaction, 300]] call BIS_fnc_randomPos;
	private _group = createGroup _objectSide;
	private _vehicle = _group createUnit [_thisSpawn select 1, _spawnLocation, [], 0, "NONE"];
	_vehicle flyInHeight (300 + time random 1500);
	_spawnGroups pushBack _group;

	_pointDistribution set [0, (_pointDistribution select 0) - (_thisSpawn select 2)];
};

while {{(_x select 2) <= _pointDistribution select 1} count orbis_mission_heliArray > 0} do { // heli
	private _thisSpawn = selectRandom (orbis_mission_heliArray select {_x <= _pointDistribution select 1});
	private _spawnLocation = _groundLocation findEmptyPosition [0, 1000, _thisSpawn select 1]; 
	private _group = createGroup _objectSide;
	_group createUnit [_thisSpawn select 1, _spawnLocation, [], 0, "NONE"];
	_spawnGroups pushBack _group;

	_pointDistribution set [1, (_pointDistribution select 1) - (_thisSpawn select 2)];
};

while {{(_x select 2) <= _pointDistribution select 2} count orbis_mission_tankArray > 0} do { // tank
	private _thisSpawn = selectRandom (orbis_mission_tankArray select {_x <= _pointDistribution select 2});
	private _spawnLocation = _groundLocation findEmptyPosition [0, 1000, _thisSpawn select 1];
	private _group = createGroup _objectSide;
	_group createUnit [_thisSpawn select 1, _spawnLocation, [], 0, "NONE"];
	_spawnGroups pushBack _group;

	_pointDistribution set [2, (_pointDistribution select 2) - (_thisSpawn select 2)];
};

while {{(_x select 2) <= _pointDistribution select 3} count orbis_mission_vehicleArray > 0} do { // vehicle
	private _thisSpawn = selectRandom (orbis_mission_vehicleArray select {_x <= _pointDistribution select 3});
	private _spawnLocation = _groundLocation findEmptyPosition [0, 1000, _thisSpawn select 1];
	private _group = createGroup _objectSide;
	_group createUnit [_thisSpawn select 1, _spawnLocation, [], 0, "NONE"];
	_spawnGroups pushBack _group;

	_pointDistribution set [3, (_pointDistribution select 3) - (_thisSpawn select 2)];
};

while {{(_x select 2) <= _pointDistribution select 4} count orbis_mission_infArray > 0} do { // inf
	private _thisSpawn = selectRandom (orbis_mission_infArray select {_x <= _pointDistribution select 4});
	private _spawnLocation = _groundLocation findEmptyPosition [0, 1000];
	private _group = [_spawnLocation, _objectSide, _thisSpawn select 0] call BIS_fnc_spawnGroup;
	_spawnGroups pushBack _group;

	_pointDistribution set [4, (_pointDistribution select 4) - (_thisSpawn select 2)];
};

// return leftover points
diag_log format ["orbis_mission_environment missionLoop pointLeftover: %1", _pointDistribution];
{
	_points = _points + _x;
	_pointDistribution set [_forEachIndex, 0];
} forEach _pointDistribution;

// add waypoint to AO
{
	_x addWaypoint [_missionCenterPos, _missionAreaRadius];
} forEach _spawnGroups;

// add killed triggers to units
{
	private _units = _x;
	private _typeNumber = _forEachIndex;
	{
		if (_x getVariable ["unitTypeNumber", -1] < 0) then {
			_x setVariable ["unitTypeNumber", _typeNumber, true];
			_x addEventHandler ["killed", {_this call orbis_mission_fnc_unitKilled}];
		};
	} forEach _units;
} forEach _playerSideUnits;

{
	private _units = _x;
	private _typeNumber = _forEachIndex;
	{
		if (_x getVariable ["unitTypeNumber", -1] < 0) then {
			_x setVariable ["unitTypeNumber", _typeNumber, true];
			_x addEventHandler ["killed", {_this call orbis_mission_fnc_unitKilled}];
		};
	} forEach _units;
} forEach _objectSideUnits;

// pause script for a moment
private _sleepTime = 300 + (time random 600); // 5 ~ 15 min
diag_log format ["orbis_mission_environment missionLoop sleepTime: %1", _sleepTime];
sleep _sleepTime;

// check if objects are still running
private _objects = entities [[], ["Logic"], true] select {typeOf _x isEqualTo "MCC_ModuleObjective_F"};
private _isRunning = !(_objects apply {!(_x getVariable ["RscAttributeTaskState", ""] in ["Succeeded", "Failed"])} isEqualTo []);
diag_log format ["orbis_mission_environment missionLoop isRunning: %1", _isRunning];

if (_isRunning) then { // start the next loop or end & set weather changes
	[time, _points, _factionArray] spawn orbis_mission_fnc_missionLoop;
} else {
	missionNamespace setVariable ["misisonLoopRunning", false, true];

	// weather change
	private _weatherMaintain = sleep (300 + (time random 300)); // 5 ~ 10 min
	diag_log format ["orbis_mission_environment missionLoop weatherMaintain: %1", _weatherMaintain];
	sleep _weatherMaintain;
	private _weather = missionNamespace getVariable ["missionWeather", "sunny"];
	private _weatherRandomTime = 300 + (time random 1800);
	diag_log format ["orbis_mission_environment missionLoop weatherRandomTime: %1", _weatherRandomTime];
	switch ([_weather, ""] selectRandomWeighted [0.5, 0.5]) do { 
		case "sunny": {
			_weatherRandomTime setOvercast 0.0;
			_weatherRandomTime setRain 0.0;
			10 setRainbow 0;
		};
		case "cloudy": {
			_weatherRandomTime setOvercast 0.2;
			_weatherRandomTime setRain 0.0;
			10 setRainbow 0;
		};
		case "rainy": {
			_weatherRandomTime setOvercast 0.2;
			_weatherRandomTime setRain 0.0;
			sleep _weatherRandomTime;
			30 setRainbow 1;
		};
		case "thunderstorm": {
			_weatherRandomTime setOvercast 0.2;
			_weatherRandomTime setRain 0.0;
			sleep _weatherRandomTime;
			30 setRainbow 1;
		};
		default {};
	};
};
