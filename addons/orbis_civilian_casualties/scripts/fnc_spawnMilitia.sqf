params ["_militiaArrayNew", "_levelOfViolence", "_availCivilians"];

private _weaponsList = [
["rhs_weap_ak74m", "rhs_sidor", ["rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK", "rhs_30Rnd_545x39_AK"], 0.6],
["rhs_weap_pkm", "rhs_sidor", ["rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR", "rhs_100Rnd_762x54mmR"], 0.2],
["rhs_weap_rpg7", "rhs_sidor", ["rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag", "rhs_rpg7_PG7VL_mag"], 0.2]
];
private _weaponsChance = _weaponsList apply {_x select 3};

private _unit = objNull;
private _itemsToGive = [];
private _primaryWeapon = "";
private _invItems = [];

private _maxMilitia = getNumber (configFile >> "Orbis_Civilian_Config" >> "militiaConfig" >> "maxMilitia");
private _spawnMax = ((_levelOfViolence min _maxMilitia) - (count _militiaArrayNew)) min (count _availCivilians);
private _spawnCount = 0;

while {_spawnCount < _spawnMax} do {
	_spawnCount = _spawnCount + 1;
	_unit = (_availCivilians select _spawnCount);
	_itemsToGive = _weaponsList selectRandomWeighted _weaponsChance;
	_primaryWeapon = _itemsToGive select 0;
	_backpackItem = _itemsToGive select 1;
	_invItems = _itemsToGive select 2;

	_killedEventID = _unit getVariable ["killedEventID", 0];
	_unit removeEventHandler ["Killed", _killedEventID];
	_unit addWeapon _primaryWeapon;
	_unit addBackpack _backpackItem;
	{
		_unit addItem _x;
	} forEach _invItems;
	reload _unit;

	_unit setVariable ["hasArmed", true];
	_militiaArrayNew pushBack _unit;
};

_militiaArrayNew
