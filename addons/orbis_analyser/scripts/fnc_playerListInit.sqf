// call orbis_analyser_fnc_playerListInit;

private _playerArray = [];
{
	private _side = "";
	{
		if (_x in allPlayers) exitWith {
			_side = side _x;
		};
	} forEach units _x;
	if !(_side isEqualTo "") then {
		_playerArray pushBack [_x, _side, (units _x) select {isPlayer _x}];
	};
} forEach allGroups;

private _text = "Players List";
{
	_x params ["_group", "_side", "_units"];
	_text = _text + endl + endl + format ["%1, %2", _side, groupId _group];
	{
		_text = _text + endl;
		if (leader _group isEqualTo leader _x) then {
			_text = _text + format ["Leader: %1", name _x];
		} else {
			_text = _text + format ["Member: %1", name _x];
		};
	} forEach _units;
} forEach _playerArray;

_text
