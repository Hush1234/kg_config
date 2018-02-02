private _vehicle = _this select 0;
private _alertAmmotypes = ["ShellBase", "RocketBase", "MissileBase"];
while {alive _vehicle} do {
	if (player in _vehicle) then {
		private _nearObjects = _vehicle nearObjects 100;
		private _nearAmmos = _nearObjects select {
			private _ammo = _x;
			{
				if (typeOf _ammo isKindOf [_x, configFile >> "CfgAmmo"]) exitWith {
					true
				};
				false
			} forEach _alertAmmotypes;
		};
		{
			if (((_x distance _vehicle) / (speed _x / 3.6) < 0.2) && (_x getRelDir _vehicle < 45 || _x getRelDir _vehicle > 315)) exitWith {
				["RHSUSF_Error_High", 0.5, 2] spawn orbis_tank_fnc_repeatSound;
				sleep 2;
			};
		} forEach _nearAmmos;
	};

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
