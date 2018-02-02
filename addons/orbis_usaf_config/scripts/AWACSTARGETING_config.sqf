_AWACST = _this select 0;
_var = (_AWACST getVariable ["AWACS_ACTIVE",false]);
if (_var) exitWith {_AWACST setVariable ["AWACS_ACTIVE",false,true];};
if (!_var) then {_AWACST setVariable ["AWACS_ACTIVE",true,true];};

_radarsize = 25000;
_allCreatedMarkers = [];
_enemysides = [];
_friendlysides = [];
{ if (((side _AWACST) getFriend _x) < 0.6) then { _enemysides pushBack _x; } else { _friendlysides pushBack _x; }; }forEach [EAST,WEST,resistance];

_fnc_getTargets = {
	_gTargetsValid = [];
	_aTargetsValid = [];
	_sTargetsValid = [];
	_fgTargetsValid = [];
	_faTargetsValid = [];
	_fsTargetsValid = [];

	_allTargets = nearestObjects [_AWACST, ["Landvehicle","Air","Ship"], _radarsize];

	{
		_enemyside = _x;
		{
			if (side _x == _enemyside) then
			{
				switch (true) do {
				    case (_x isKindOf "Landvehicle"): { _gTargetsValid pushBack _x; };
				    case (_x isKindOf "Air"): { _aTargetsValid pushBack _x; };
				    case (_x isKindOf "Ship"): { _sTargetsValid pushBack _x; };
				};
			};
		}forEach _allTargets;
	}forEach _enemysides;

	{
		_friendlyside = _x;
		{
			if (side _x == _friendlyside) then
			{
				switch (true) do {
				    case (_x isKindOf "Landvehicle"): { _fgTargetsValid pushBack _x; };
				    case (_x isKindOf "Air"): { _faTargetsValid pushBack _x; };
				    case (_x isKindOf "Ship"): { _fsTargetsValid pushBack _x; };
				};
			};
		}forEach _allTargets;
	}forEach _friendlysides;
	[_gTargetsValid,_aTargetsValid,_sTargetsValid,_fgTargetsValid,_faTargetsValid,_fsTargetsValid];
};

_getTargets = [] call _fnc_getTargets;
_gTargetsValid =  (_getTargets select 0);
_aTargetsValid =  (_getTargets select 1);
_sTargetsValid =  (_getTargets select 2);
_fgTargetsValid =  (_getTargets select 3);
_faTargetsValid =  (_getTargets select 4);
_fsTargetsValid =  (_getTargets select 5);

[_getTargets] spawn {
	_getTargets = _this select 0;
	_gTargetsValid =  (_getTargets select 0);
	_aTargetsValid =  (_getTargets select 1);
	_sTargetsValid =  (_getTargets select 2);
	_fgTargetsValid =  (_getTargets select 3);
	_faTargetsValid =  (_getTargets select 4);
	_fsTargetsValid =  (_getTargets select 5);

	_VRDtext0 = [parseText format["<t align = 'center' color = '#00CC00'>AWACS TARGETING SYSTEM INITIATED</t>"], [0.25, 1, 0.5, 0.05], [1, 1], 2] spawn 	BIS_fnc_textTiles;
	sleep 1;
	_VRDtextX = [parseText format["<t align = 'center' color = '#00CC00'>FRIENDLIES TRACKED: %1</t>", ((count _fgTargetsValid) + (count _faTargetsValid) + (	count _fsTargetsValid))], [0.25, 1, 0.5, 0.05], [1, 1], 2] spawn BIS_fnc_textTiles;
	sleep 2;
	_VRDtext1 = [parseText format["<t align = 'center' color = '#FF0000'>ENEMIES TRACKED: %1</t>", ((count _gTargetsValid) + (count _aTargetsValid) + (count	 _sTargetsValid))], [0.25, 1, 0.5, 0.05], [1, 1], 2] spawn BIS_fnc_textTiles;
	sleep 2;
_VRDtext2 = [parseText format["<t align = 'center' color = '#00CC00'>TARGETING DATA UPLOADED TO MAP</t>"], [0.25, 1, 0.5, 0.05], [1, 1], 2] spawn BIS_fnc_textTiles;
};

_fnc_UpdateMkrs = {
	_arr = _this select 0;
	_type = toLower(_this select 1);
	if (isNil "_type") then { _type = 'create' };

	for "_i" from 0 to ((count _arr) - 1) do
	{
		_curtarget = _arr select _i;
		_curtargetname = getText (configFile >> 'cfgVehicles' >> typeOf _curtarget >> 'displayName');
		_curtargetmkr = (format ["%1%2",str(_curtarget),_i]);
		_curtargetdir = if (round(getDir _curtarget) >= 360) then {0} else {round(getDir _curtarget)};

		_enoughHeight = ((getpos _curtarget select 2) > 50);
		_inSight = !(terrainIntersect [getPos _AWACST, getPos _curtarget]);
		_distance = (_AWACST distance _curtarget) / _radarsize;
		_chance = true; // (random 1) <  /*chanceFunc*/; 
		if ((alive _curtarget) && _enoughHeight && _inSight && _chance) then {
			if !(_type isEqualTo 'delete') then {
				switch (_type) do {
					case 'create': {
						_g = createMarkerLocal[_curtargetmkr,_curtarget];
						_curtargetmkr setMarkerPosLocal (getPos _curtarget);
						_g setMarkerShapeLocal "ICON";
						switch (true) do {
						    // case (_curtarget isKindOf "Car"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3°",_curtargetname,round(speed _curtarget),_curtargetdir]; _curtargetmkr setMarkerTypeLocal "b_motor_inf" };
						    // case (_curtarget isKindOf "Tank"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3°",_curtargetname,round(speed _curtarget),_curtargetdir]; _curtargetmkr setMarkerTypeLocal "b_armor" };
						    case (_curtarget isKindOf "Helicopter"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3° - %4 m",_curtargetname,round(speed _curtarget),_curtargetdir,round((getPosATL _curtarget) select 2)]; _curtargetmkr setMarkerTypeLocal "b_air" };
						    case (_curtarget isKindOf "Plane"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3° - %4 m",_curtargetname,round(speed _curtarget),_curtargetdir,round((getPosATL _curtarget) select 2)]; _curtargetmkr setMarkerTypeLocal "b_plane" };
						    // case (_curtarget isKindOf "Ship"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3°",_curtargetname,round(speed _curtarget),_curtargetdir]; _curtargetmkr setMarkerTypeLocal "b_naval" };
						};
						if (((side _AWACST) getFriend (side _curtarget)) < 0.6) then { _curtargetmkr setMarkerColorLocal "ColorRed"; } else { _curtargetmkr setMarkerColorLocal "ColorGreen"; };
						_allCreatedMarkers pushBack _curtargetmkr;
					};
					case 'update': {
						_curtargetmkr setMarkerPosLocal (getPos _curtarget);
						switch (true) do {
                            // case (_curtarget isKindOf "Car"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3°",_curtargetname,round(speed _curtarget),_curtargetdir]; };
                            // case (_curtarget isKindOf "Tank"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3°",_curtargetname,round(speed _curtarget),_curtargetdir]; };
                            case (_curtarget isKindOf "Helicopter"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3° - %4 m",_curtargetname,round(speed _curtarget),_curtargetdir,round((getPosATL _curtarget) select 2)]; };
                            case (_curtarget isKindOf "Plane"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3° - %4 m",_curtargetname,round(speed _curtarget),_curtargetdir,round((getPosATL _curtarget) select 2)]; };
                            // case (_curtarget isKindOf "Ship"): { _curtargetmkr setMarkerTextLocal format["%1 - %2 km/h - %3°",_curtargetname,round(speed _curtarget),_curtargetdir]; };
                        };
					};
				};
				//_AWACST reveal [_curtarget, 4];
			} else {
				if (markerColor _curtargetmkr != "") then {
					_allCreatedMarkers = _allCreatedMarkers - [_curtargetmkr];
					deleteMarkerLocal _curtargetmkr;
				};
			};
		} else {
			if (markerColor _curtargetmkr != "") then {
				_allCreatedMarkers = _allCreatedMarkers - [_curtargetmkr];
				deleteMarkerLocal _curtargetmkr;
			};
		};
	};
};

_fnc_refreshEZ = {
		/*{ deleteMarker _x }forEach (_allCreatedMarkers);
		_getTargets = [] call _fnc_getTargets;
		_gTargetsValid =  (_getTargets select 0);
		_aTargetsValid =  (_getTargets select 1);
		_sTargetsValid =  (_getTargets select 2);
		_fgTargetsValid =  (_getTargets select 3);
		_faTargetsValid =  (_getTargets select 4);
		_fsTargetsValid =  (_getTargets select 5);
		if (count _gTargetsValid > 0) then {
			[_gTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _aTargetsValid > 0) then {
			[_aTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _sTargetsValid > 0) then {
			[_sTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _fgTargetsValid > 0) then {
			[_fgTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _faTargetsValid > 0) then {
			[_faTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _fsTargetsValid > 0) then {
			[_fsTargetsValid,'create'] call _fnc_UpdateMkrs;
		};*/
	//More EFFICIENT!
	if ((_AWACST getVariable ["AWACS_CURRENT_TARGETS",0]) == 0) then {
		{ deleteMarkerLocal _x }forEach (_allCreatedMarkers);
		_getTargets = [] call _fnc_getTargets;
		_gTargetsValid =  (_getTargets select 0);
		_aTargetsValid =  (_getTargets select 1);
		_sTargetsValid =  (_getTargets select 2);
		_fgTargetsValid =  (_getTargets select 3);
		_faTargetsValid =  (_getTargets select 4);
		_fsTargetsValid =  (_getTargets select 5);
		if (count _gTargetsValid > 0) then {
			[_gTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _aTargetsValid > 0) then {
			[_aTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _sTargetsValid > 0) then {
			[_sTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _fgTargetsValid > 0) then {
			[_fgTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _faTargetsValid > 0) then {
			[_faTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		if (count _fsTargetsValid > 0) then {
			[_fsTargetsValid,'create'] call _fnc_UpdateMkrs;
		};
		_AWACST setVariable ["AWACS_CURRENT_TARGETS",((count _gTargetsValid) + (count _aTargetsValid) + (count _sTargetsValid) + (count _fgTargetsValid) + (count _faTargetsValid) + (count _fsTargetsValid)),true];
	} else {
		_getTargets = [] call _fnc_getTargets;
		_gTargetsValid =  (_getTargets select 0);
		_aTargetsValid =  (_getTargets select 1);
		_sTargetsValid =  (_getTargets select 2);
		_fgTargetsValid =  (_getTargets select 3);
		_faTargetsValid =  (_getTargets select 4);
		_fsTargetsValid =  (_getTargets select 5);
		if ((_AWACST getVariable ["AWACS_CURRENT_TARGETS",0]) != ((count _gTargetsValid) + (count _aTargetsValid) + (count _sTargetsValid) + (count _fgTargetsValid) + (count _faTargetsValid) + (count _fsTargetsValid))) then {
			if (count _gTargetsValid > 0) then {
			{ deleteMarkerLocal _x }forEach (_allCreatedMarkers);
				[_gTargetsValid,'create'] call _fnc_UpdateMkrs;
			};
			if (count _aTargetsValid > 0) then {
				[_aTargetsValid,'create'] call _fnc_UpdateMkrs;
			};
			if (count _sTargetsValid > 0) then {
				[_sTargetsValid,'create'] call _fnc_UpdateMkrs;
			};
			if (count _fgTargetsValid > 0) then {
				[_fgTargetsValid,'create'] call _fnc_UpdateMkrs;
			};
			if (count _faTargetsValid > 0) then {
				[_faTargetsValid,'create'] call _fnc_UpdateMkrs;
			};
			if (count _fsTargetsValid > 0) then {
				[_fsTargetsValid,'create'] call _fnc_UpdateMkrs;
			};
			_AWACST setVariable ["AWACS_CURRENT_TARGETS",((count _gTargetsValid) + (count _aTargetsValid) + (count _sTargetsValid) + (count _fgTargetsValid) + (count _faTargetsValid) + (count _fsTargetsValid)),true];
		} else {
			if (count _gTargetsValid > 0) then {
				[_gTargetsValid,'update'] call _fnc_UpdateMkrs;
			};
			if (count _aTargetsValid > 0) then {
				[_aTargetsValid,'update'] call _fnc_UpdateMkrs;
			};
			if (count _sTargetsValid > 0) then {
				[_sTargetsValid,'update'] call _fnc_UpdateMkrs;
			};
			if (count _fgTargetsValid > 0) then {
				[_fgTargetsValid,'update'] call _fnc_UpdateMkrs;
			};
			if (count _faTargetsValid > 0) then {
				[_faTargetsValid,'update'] call _fnc_UpdateMkrs;
			};
			if (count _fsTargetsValid > 0) then {
				[_fsTargetsValid,'update'] call _fnc_UpdateMkrs;
			};
		};
	};
};

_AWACST animate ["Radar_dome",1e38];

//createMarker ["zeRadar",getPos _AWACST];
//"zeRadar" setMarkerShape "ELLIPSE";
//"zeRadar" setMarkerSize [_radarsize,_radarsize];
//"zeRadar" setMarkerType "Empty";
//"zeRadar" setMarkerBrush "Border";

while {(ACE_player in _AWACST) && (_AWACST getVariable "AWACS_ACTIVE")} do {
	[] call _fnc_refreshEZ;
	//"zeRadar" setMarkerPos (getPos _AWACST);
	sleep 15;
};

if !(ACE_player in _AWACST) {
	_AWACST setVariable ["AWACS_ACTIVE",false,true];
};

//deleteMarker "zeRadar";

_AWACST setVariable ["AWACS_CURRENT_TARGETS",0,true];
_AWACST animate ["Radar_dome",(_AWACST animationPhase "Radar_dome")];

{ deleteMarkerLocal _x }forEach (_allCreatedMarkers);
