orbis_fnc_attachCurrent = compile preprocessFileLineNumbers 'orbis_usaf_config\scripts\fnc_attachCurrent.sqf';
orbis_fnc_paradropCargos = compile preprocessFileLineNumbers 'orbis_usaf_config\scripts\fnc_paradropCargos.sqf';

// Lala_C17_fnc_attachToSmooth = compile preprocessFileLineNumbers 'orbis_usaf_config\scripts\fnc_attachToSmooth_config.sqf';
Lala_C17_fnc_canLoad = compile preprocessFileLineNumbers 'orbis_usaf_config\scripts\fnc_canLoad_config.sqf';
Lala_C17_fnc_loadCargo = compile preprocessFileLineNumbers 'orbis_usaf_config\scripts\fnc_loadCargo_config.sqf';
Lala_C17_fnc_unloadCargo = compile preprocessFileLineNumbers 'orbis_usaf_config\scripts\fnc_unloadCargo_config.sqf';


//vDirAndUp = [obj1,obj2] call KK_fnc_vectorDirAndUpRelative;
KK_fnc_vectorDirAndUpRelative = {
    private ["_o1","_o2","_v"];
    _o1 = _this select 0;
    _o2 = _this select 1;
    _v = _o2 worldToModelVisual [0,0,0];
    [
        _o2 worldToModelVisual vectorDirVisual _o1 vectorDiff _v,
        _o2 worldToModelVisual vectorUpVisual _o1 vectorDiff _v
    ]
};

//[obj1,obj2] call KK_fnc_attachToRelative;
KK_fnc_attachToRelative = {
    private ["_o","_v"];
    _o = _this select 0;
    _v = _this call KK_fnc_vectorDirAndUpRelative;
    _o attachTo [_this select 1];
    _o setVectorDirAndUp _v;
};
