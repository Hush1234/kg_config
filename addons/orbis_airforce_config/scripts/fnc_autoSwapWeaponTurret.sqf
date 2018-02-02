private _vehicle = _this select 0;
private _turretPath = _this select 1;
private _weaponOld = _this select 2 select 0;
private _magazinesOld = _this select 2 select 1;
private _weaponNew = _this select 3 select 0;
private _magazinesNew = _this select 3 select 1;

if !(_magazinesOld isEqualType []) then {
	_magazinesOld = [_magazinesOld];
};
if !(_magazinesNew isEqualType []) then {
	_magazinesNew = [_magazinesNew];
};

while {alive _vehicle} do {
	if (_weaponOld in (_vehicle weaponsTurret _turretPath)) then {
		{
			_vehicle removeMagazinesTurret [_x, _turretPath];
		} forEach _magazinesOld;
		_vehicle removeWeaponTurret [_weaponOld, _turretPath];
		_vehicle addWeaponTurret [_weaponNew, _turretPath];
		{
			_vehicle addMagazineTurret [_x, _turretPath];
		} forEach _magazinesNew;
	};

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
