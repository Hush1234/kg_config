["toggleSmoke", {_this spawn orbis_airforce_fnc_toggleSmoke;}] call CBA_fnc_addEventHandler;

[
	"ace_pylons_setPylonLoadOutEvent", 
	{
		_this spawn {
			params ["_aircraft", "_pylonIndex", "_pylon", "_turret"];
			sleep 0.1;
			private _isForcedRear = ("FIR_SH_AG_HP" in getArray (configFile >> "CfgMagazines" >> _pylon >> "hardpoints")) && (typeOf _aircraft in ["JS_JC_FA18F"]);
			_aircraft setPylonLoadOut [_pylonIndex, _pylon, true, [_turret, [0]] select _isForcedRear];
		}
	}
] call CBA_fnc_addEventHandler;

[] spawn {
	while {hasInterface} do {
		if ((vehicle player != player) && (isNull (uiNamespace getVariable ["ace_laser_display", displayNull]))) then {
			[player] call ace_laser_fnc_showVehicleHud;
		};
		private _frameNo = diag_frameNo;
		waitUntil {diag_frameNo > _frameNo};
	};
};
