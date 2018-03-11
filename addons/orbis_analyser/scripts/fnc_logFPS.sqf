#include "script_settings.hpp"

while {DEBUG_MODE > 0} do {
	private _players = {alive _x} count (allPlayers - entities "HeadlessClient_F");
	private _HC = count (entities "HeadlessClient_F");
	private _ai = {(!isPlayer _x) && (alive _x)} count entities "CAManBase";
	private _active = vehicles select {(count crew _x > 0) && (alive _x)};
	private _planes = {(getPos _x select 2) > 5} count (_active);
	private _vehicles = {(getPos _x select 2) < 5} count (_active);

	diag_log format ["orbis_fps_analyser players: %1, HC: %2, ai: %3, planes: %4, vehicles: %5, fps: %6", _players, _HC, _ai, _planes, _vehicles, diag_fps];

	private _time = time;
	waitUntil {time > _time + 60};
};
