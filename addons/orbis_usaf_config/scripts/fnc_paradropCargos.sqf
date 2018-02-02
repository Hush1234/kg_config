params ["_carrier"];

private _cargoList =  _carrier getVariable ["cargoList", []];

private _deployChute = {
	private _cargo = _this select 0;
	private _carrier = _this select 1;
	private _chute = "B_Parachute_02_F" createVehicle [0, 0, 100];

	_chute setposASL (getPosASL _cargo);
	_chute setVelocity (velocity _cargo);
	_cargo attachTo [_chute, [0, 0, -5]];

	waitUntil {(getPosATL _cargo select 2 < 1) && (vectorMagnitude velocity _cargo < 1)};
	detach _cargo;
	_cargo enableCollisionWith _carrier;
};

private _pushCargo = {
	private _cargo = _this select 0;
	private _carrier = _this select 1;
	private _deployChute = _this select 2;
	private _offset = -14;
	private _position = _carrier worldToModelVisual [getPosATL _cargo select 0, getPosATL _cargo select 1, (getPosATL _cargo select 2) - ((_cargo worldToModelVisual (getPosATL _cargo)) select 2)];

	_cargo disableCollisionWith _carrier;
	while {_position select 1 > _offset} do {
		_position = _position vectorDiff [0, 0.30, 0];
		private _vector = [_cargo, _carrier] call KK_fnc_vectorDirAndUpRelative;
		_cargo attachTo [_carrier, _position];
		_cargo setVectorDirAndUp _vector;
		sleep 0.01;
	};
	detach _cargo;
	[_cargo, _carrier] call _deployChute;
};

{
	if (_x in attachedObjects _carrier) then {
		[_x, _carrier, _deployChute] spawn _pushCargo;
	};
} forEach _cargoList;
