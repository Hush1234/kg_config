private _vehicle = _this select 0;
private _useCannon = _this select 1;
private _flare = _this param [2, 0];

while {alive _vehicle} do {
	if (_vehicle hasWeapon "FIR_M61A2") then {
		if !(_useCannon) then {
			_vehicle removeMagazines "FIR_M61A2_511rnd_M";
			_vehicle removeMagazines "FIR_M61A2_TWAS_511rnd_M";
			_vehicle removeMagazines "FIR_M61A2_TWAS_Red_511rnd_M";

			_vehicle removeweapon "FIR_M61A2";
		};

		if (_flare isEqualType "") then {
			if (_flare isEqualTo "") then {
				_vehicle removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
				_vehicle removeweapon "FIR_CMLauncher";
			} else {
				_vehicle removeMagazines "FIR_240rnd_CMFlare_Chaff_Magazine";
				_vehicle addMagazine _flare;
			};
		};

		private _f16_pylon = getPylonMagazines _vehicle;
		private _fuelcount = {_x == "FIR_F16C_Fueltank_P_1rnd_M"} count _f16_pylon;
		private _fuelcount2 = {_x == "FIR_F16C_center_Fueltank_P_1rnd_M"} count _f16_pylon;
		private _fuelLevel = 1;
		switch (_fuelcount) do {
			case 2: {
				if (_fuelcount2 == 1) then {
					_fuelLevel = 1;
					_vehicle animate ["fuelswitch",1];      
				} else {
					_fuelLevel = 0.9;
					_vehicle animate ["fuelswitch",1];          
				};
			};
			case 1: {
				if (_fuelcount2 == 1) then {
					_fuelLevel = 0.8;
					_vehicle animate ["fuelswitch",1];      
				} else {
					_fuelLevel = 0.7;
					_vehicle animate ["fuelswitch",1];          
				};
			};
			case 0: {
				if (_fuelcount2 == 1) then {
					_fuelLevel = 0.6;
					_vehicle animate ["fuelswitch",1];      
				} else {
					_fuelLevel = 0.5;
					_vehicle animate ["fuelswitch",0];          
				};
			};
		};
		_vehicle setFuel (_fuelLevel min fuel _vehicle);
	};

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
