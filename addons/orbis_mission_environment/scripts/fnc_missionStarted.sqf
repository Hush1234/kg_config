#include "script_settings.sqf"
if (LOG_MODE > 0) then {diag_log format ["orbis_mission_environment missionStarted run time: %1", time];};

params ["_missionCenterPos", "_missionAreaRadius", "_player", "_factionArray"];

if (missionNamespace getVariable ["misisonLoopRunning", false]) exitWith {};
missionNamespace setVariable ["misisonLoopRunning", true, true];

// setup weather
private _weatherChance = [["sunny", 0.5], ["cloudy", 0.2], ["rainy", 0.2], ["thunderstorm", 0.1]];
// orbis_winter_setup compatibility
/* if (worldName in ["Altis", "Stratis"]) then {
	_weatherChance = [["sunny", 0.7], ["cloudy", 0.3]];
}; */
private _weather = (_weatherChance apply {_x select 0}) selectRandomWeighted (_weatherChance apply {_x select 1});
private _weatherRandomTime = 300 + (time random 1800); // 5 ~ 35 min
if (LOG_MODE > 0) then {diag_log format ["orbis_mission_environment missionLoop weatherRandomTime: %1", _weatherRandomTime];};
switch (_weather) do { 
	case "sunny": {
		_weatherRandomTime setOvercast 0.0;
		_weatherRandomTime setRain 0.0;
		10 setRainbow 0;
	};
	case "cloudy": {
		_weatherRandomTime setOvercast 0.6;
		_weatherRandomTime setRain 0.0;
		10 setRainbow 0;
	};
	case "rainy": {
		_weatherRandomTime setOvercast 0.8;
		_weatherRandomTime setRain 0.3;
		10 setRainbow 0;
	};
	case "thunderstorm": {
		_weatherRandomTime setOvercast 1.0;
		_weatherRandomTime setRain 0.6;
		10 setRainbow 0;
	};
	default {};
};
missionNamespace setVariable ["missionWeather", _weather, true];
if (LOG_MODE > 0) then {diag_log format ["orbis_mission_environment missionStarted weather: %1", _weather];};

// setup enemy commander type
private _commander = (orbis_mission_commanderList apply {_x select 0}) selectRandomWeighted (orbis_mission_commanderList apply {_x select 1});
private _commanderTendency = orbis_mission_commanderArray select (orbis_mission_commanderList apply {_x select 0} find _commander);
missionNamespace setVariable ["commanderTendency", _commanderTendency];

// setup mission variables
_factionArray call orbis_mission_fnc_setupUnits;
missionNamespace setVariable ["missionCenterPos", _missionCenterPos];
missionNamespace setVariable ["missionAreaRadius", _missionAreaRadius];
missionNamespace setVariable ["missionPlayerPos", getPos _player];
missionNamespace setVariable ["missionStartTime", time];

// sleep for some time
private _timeOld = time;
private _sleepTime = ["start"] call orbis_mission_fnc_sleepTime;
if (LOG_MODE > 0) then {diag_log format ["orbis_mission_environment missionStarted sleepTime: %1", _sleepTime];};
sleep _sleepTime;

// start main loop
[_timeOld, 0, [0, 0, 0, 0, 0], _factionArray] spawn orbis_mission_fnc_missionLoop;
