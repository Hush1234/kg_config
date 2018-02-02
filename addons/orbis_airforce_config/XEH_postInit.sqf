["toggleSmoke", {_this spawn orbis_airforce_fnc_toggleSmoke;}] call CBA_fnc_addEventHandler;

[] spawn {
	while {hasInterface} do {
		if ((vehicle player != player) && (isNull (uiNamespace getVariable ["ace_laser_display", displayNull]))) then {
			[player] call ace_laser_fnc_showVehicleHud;
		};
		private _frameNo = diag_frameNo;
		waitUntil {diag_frameNo > _frameNo};
	};
};
