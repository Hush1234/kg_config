private _checkClear = false;
private _whites = [];
private _blacks = [];

{
	if !(isClass (configFile >> "CfgPatches" >> _x)) then {
		_whites pushBack _x;
	};
} forEach orbis_chk_whitelist;

{
	if (isClass (configFile >> "CfgPatches" >> _x)) then {
		_blacks pushBack _x;
	};
} forEach orbis_chk_blacklist;

systemChat "orbis_check_addons: addon check completed";

if !(_whites isEqualTo []) then {
	systemChat format ["detected whitelisted addons: %1", _whites];
} else {
	systemChat "all whitelisted addons checked";
	_checkClear = true;
};

if !(_blacks isEqualTo []) then {
	systemChat format ["detected blacklisted addons: %1", _blacks];
	_checkClear = false;
} else {
	systemChat "no blacklisted addons checked";
};

if !(_checkClear) then {
	private _text = "애드온이 업데이트 되지 않은것으로 확인되었음<br/>"; 
	_text = _text + "관련 공지는 아래 링크를 참조할것<br/>"; 
	_text = _text + format ["<a href='%1'>공지글 링크</a>", orbis_chk_url]; 
	[parseText _text, "애드온 업데이트 필요"] spawn BIS_fnc_guiMessage;
};
