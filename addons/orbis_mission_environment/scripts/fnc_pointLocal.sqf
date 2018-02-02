private _points = _this select 0;
private _pointRatio = missionNamespace getVariable ["commanderTendency", [1, 1, 1, 1, 1]];

_pointRatio set [0, 0.2]; // plane
_pointRatio set [1, 0.5]; // heli

_pointRatio
