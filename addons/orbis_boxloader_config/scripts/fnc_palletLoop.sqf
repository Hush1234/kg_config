private _object = _this select 0;

while {alive _object} do {
	if (getPosATL _object select 2 < -1) then {
		_object setVelocity [0, 0, 0];
		_object setPosATL [getPosATL _object select 0, getPosATL _object select 1, 1];
	};

	sleep 3;
};
