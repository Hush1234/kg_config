private _vehicle = _this select 0;
private _weaponOld = _this select 1 select 0;
private _magazinesOld = _this select 1 select 1;
private _weaponNew = _this select 2 select 0;
private _magazinesNew = _this select 2 select 1;

if !(_magazinesOld isEqualType []) then {
	_magazinesOld = [_magazinesOld];
};
if !(_magazinesNew isEqualType []) then {
	_magazinesNew = [_magazinesNew];
};

while {alive _vehicle} do {
	if (_vehicle hasWeapon _weaponOld) then {
		{
			_vehicle removeMagazines _x;
		} forEach _magazinesOld;
		_vehicle removeWeapon _weaponOld;
		_vehicle addWeapon _weaponNew;
		{
			_vehicle addMagazine _x;
		} forEach _magazinesNew;
	};

	private _frameNo = diag_frameNo;
	waitUntil {diag_frameNo > _frameNo};
};
