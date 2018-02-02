// ["mccRequest", [_player, _mccArray]] call CBA_fnc_serverEvent;
#include "script_settings.sqf"

// check if is running on server & mcc is installed
if !(isServer) exitWith {
	if (LOG_MODE > 0) then {diag_log "orbis_remote_mcc mcc request fail: missionRequested not running on server";};
};
if !(isClass (configFile >> "CfgPatches" >> "mcc_sandbox")) exitWith {
	if (LOG_MODE > 0) then {diag_log "orbis_remote_mcc mcc request fail: mcc is not installed";};
};

// check if a mission is already running
private _objects = entities [[], ["Logic"], true] select {typeOf _x isEqualTo "MCC_ModuleObjective_F"};
private _isRunning = !(_objects apply {!(_x getVariable ["RscAttributeTaskState", ""] in ["Succeeded", "Failed"])} isEqualTo []);
if (_isRunning) exitWith {
	if (LOG_MODE > 0) then {diag_log "orbis_remote_mcc mcc request fail: a mission is already running";};
};

params ["_player", "_mccArray"];
if (LOG_MODE > 0) then {diag_log format ["orbis_remote_mcc mcc requested by: %1, mccArray: %2", name _player, _mccArray];};

// run mcc scripts for a mission
private _enemyfaction = _mccArray select 1 select 1;
private _enemySide = _mccArray select 1 select 0;
[_enemyfaction, _enemySide] call MCC_fnc_MWCreateUnitsArray;
[_enemyfaction] call MCC_fnc_createConfigs;

_mccArray spawn MCC_fnc_MWinitMission;

// run enemy reinforcing scripts
// [_missionCenterPos, _missionAreaRadius, _missionPlayerPos, [_playerSide, _objectSide, _objectFaction]]
[(_mccArray select 0 select 0) select 0, (_mccArray select 0 select 3) * 2, _player, [_mccArray select 1 select 2, _mccArray select 1 select 0, _mccArray select 1 select 1]] spawn orbis_mission_fnc_missionStarted;
