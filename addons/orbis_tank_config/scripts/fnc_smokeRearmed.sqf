private _vehicle = _this select 0 select 0;
private _turretPath = [_vehicle] call ace_common_fnc_getTurretCommander;

private _maxSmokeMags = _vehicle getVariable ["maxSmokeMags", 0];
private _smokeReserve = _vehicle getVariable ["smokeReserve", 0];
private _smokeMagazine = _vehicle getVariable ["smokeMagazine", "SmokeLauncherMag"];
private _smokeRounds = _vehicle getVariable ["smokeRounds", 2];

private _smokeMagazines = magazinesAllTurrets _vehicle select {_x select 0 isEqualTo _smokeMagazine};
private _fullMagNumber = {_x select 2 isEqualTo _smokeRounds} count _smokeMagazines;
private _leftAmmoCount = 0;
{
	_leftAmmoCount = _leftAmmoCount + (_x select 2);
} forEach (_smokeMagazines select {_x select 2 < _smokeRounds});

private _ammoCount = _leftAmmoCount + _smokeRounds * _fullMagNumber;
private _numberToAdd = _maxSmokeMags;
private _leftoverAmmo = 0;

if (_smokeReserve + _ammoCount < _maxSmokeMags * _smokeRounds) then {
	_numberToAdd = floor ((_smokeReserve + _ammoCount) / _smokeRounds);
	_leftoverAmmo = (_smokeReserve + _ammoCount) % _smokeRounds;
};

_vehicle removeMagazinesTurret [_smokeMagazine, _turretPath];
_smokeReserve = _smokeReserve + _ammoCount;
for "_i" from 1 to _numberToAdd do {
	_vehicle addMagazineTurret [_smokeMagazine, _turretPath];
	_smokeReserve = _smokeReserve - _smokeRounds;
};
if (_leftoverAmmo > 0) then {
	_vehicle addMagazineTurret [_smokeMagazine, _turretPath, _leftoverAmmo];
	_smokeReserve = _smokeReserve - _leftoverAmmo;
};
_vehicle setVariable ["smokeReserve", _smokeReserve];

if (_smokeReserve % _smokeRounds == 0) then {
	hintSilent format ["Reserve smokes left: %1 mags", _smokeReserve / _smokeRounds];
} else {
	hintSilent format ["Reserve smokes left: %1 mags + %2", floor (_smokeReserve / _smokeRounds), _smokeReserve % _smokeRounds];
};
