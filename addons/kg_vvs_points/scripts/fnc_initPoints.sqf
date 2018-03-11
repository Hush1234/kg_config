private _isInit = missionNamespace getVariable ["vvsPointInit", true];

if (_isInit) then {
	private _players = count (allPlayers - entities "HeadlessClient_F");
	private _points = 100 max (linearConversion [10, 30, _players, 100, 200]) min 200;
	missionNamespace setVariable ["VVScoin", _points, true];
	hintSilent format ["VVS points given: %1", _points];
	missionNamespace setVariable ["vvsPointInit", false, true];
} else {
	systemChat "VVS points are already given!";
};
