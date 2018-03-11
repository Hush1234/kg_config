orbis_chk_currentVersion = 29;
orbis_chk_url = "http://cafe.naver.com/kimchiguys/53054";
orbis_chk_whitelist = [];
orbis_chk_blacklist = ["Ryanzombies"];

[] spawn {
	sleep 0.1;
	call orbis_chk_fnc_checkClasses;
};
