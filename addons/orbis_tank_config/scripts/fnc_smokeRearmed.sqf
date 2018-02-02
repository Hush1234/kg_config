private _vehicle = _this select 0 select 0;
private _turretPath = [_vehicle] call ace_common_fnc_getTurretCommander;

private _maxSmokeMags = _vehicle getVariable ["maxSmokeMags", 0];
private _smokeReserve = _vehicle getVariable ["smokeReserve", 0];
private _allMagaziens = magazinesAllTurrets _vehicle;
private _turretMagazines = _allMagaziens select {_x select 1 isEqualTo _turretPath};
private _fullMagNumber = {(_x select 0 isEqualTo "SmokeLauncherMag") && (_x select 2 isEqualTo 2)} count _turretMagazines;
private _halfMagNumber = {(_x select 0 isEqualTo "SmokeLauncherMag") && (_x select 2 isEqualTo 1)} count _turretMagazines;

private _ammoCount = _halfMagNumber + 2 * _fullMagNumber;
private _numberToAdd = _maxSmokeMags;
private _leftoverAmmo = 0;

if (_smokeReserve + _ammoCount < _maxSmokeMags * 2) then {
	_numberToAdd = floor ((_smokeReserve + _ammoCount) / 2);
	_leftoverAmmo = (_smokeReserve + _ammoCount) % 2;
};

_vehicle removeMagazinesTurret ["SmokeLauncherMag", _turretPath];
for "_i" from 1 to _numberToAdd do {
	_vehicle addMagazineTurret ["SmokeLauncherMag", _turretPath];
};
if (_leftoverAmmo > 0) then {
	_vehicle addMagazineTurret ["SmokeLauncherMag", _turretPath, 1];
};
_smokeReserve = _smokeReserve + _ammoCount - _numberToAdd * 2 - _leftoverAmmo;
_vehicle setVariable ["smokeReserve", _smokeReserve];

if (_smokeReserve % 2 == 0) then {
	hintSilent format ["Reserve smokes left: %1 mags", _smokeReserve / 2];
} else {
	hintSilent format ["Reserve smokes left: %1 mags + 1", floor (_smokeReserve / 2)];
};
