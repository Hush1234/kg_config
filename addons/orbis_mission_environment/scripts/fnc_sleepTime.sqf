#include "script_settings.sqf"
private _mode = _this select 0;

private _sleepTime = 0;

if (DEV_MODE > 0) then {
	switch (_mode) do {
		case "start" : {_sleepTime = 180 + (time random 0)}; // 3 min
		case "loop" : {_sleepTime = 60 + (time random 0)}; // 1 min
		default {};
	};
} else {
	switch (_mode) do {
		case "start" : {_sleepTime = 1800 + (time random 900)}; // 30 ~ 45 min
		case "loop" : {_sleepTime = 900 + (time random 900)}; // 15 ~ 30 min
		default {};
	};
};

_sleepTime
