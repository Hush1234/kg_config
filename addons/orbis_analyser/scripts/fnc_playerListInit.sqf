// call orbis_analyser_fnc_playerListInit;

private _sideArray = [west, east, resistance, civilian];
private _sideNames = ["청군", "홍군", "게릴라", "시민"];
private _groupList = [
	["HQ", ""],
	["Alpha 1-1", "HQ"],
	["Alpha 1-2", "알파"],
	["Alpha 1-3", "브라보"],
	["Alpha 1-4", "찰리"],
	["Alpha 1-5", "델타"],
	["Alpha 1-6", "저격조"],
	["Alpha 2-1", "포반"],
	["Alpha 2-2", "기갑조"],
	["Alpha 2-3", "항공조"],
	["Alpha 2-4", "수송조"],
	["Alpha 2-5", "예비군"]
];
private _groupArray = _groupList apply {_x select 0};
private _groupNames = _groupList apply {_x select 1};

private _groups = [];
{
	_groups pushBack (units _x select {_x in allPlayers});
} forEach allGroups;

private _targetGroups = _groups select {side (_x select 0) isEqualTo side player};

private _text = "플레이어 목록";
{
	private _groupName = groupId group (_x select 0);
	private _index = _groupArray find _groupName;
	if (_index >= 0) then {
		_groupName = _groupNames select _index;
	};
	if (_groupName isEqualTo "") exitWith {};
	_text = _text + endl + endl + format ["%1", _groupName];
	{
		private _job = "분대원";
		if ([_x] call ace_medical_fnc_isMedic) then {
			_job = "의무병";
		};
		if (leader _x isEqualTo _x) then {
			_job = "분대장";
		};
		_text = _text + endl + format ["%1: %2", _job, name _x];
	} forEach _x;
} forEach _targetGroups;

_text
