//==================================================================MCC_fnc_interaction=========================================================================================
// Interaction perent
//==============================================================================================================================================================================
private ["_null","_selected","_dir","_target","_break","_keyName","_key","_text","_objects","_headPos","_upFront"];
disableSerialization;
_break = false;
_text = "";

MCC_interactionKey_holding = _this select 0;

//Find out the key
if (MCC_isCBA) then {
	_key = ["MCC","interactionKey"] call CBA_fnc_getKeybind;
	if (((_key select 5) select 1) select 0) then {_text = "Shift + "};
	if (((_key select 5) select 1) select 1) then {_text = _text + "Ctrl + "};
	if (((_key select 5) select 1) select 2) then {_text = _text + "Alt + "};
	_keyName = format ["%1%2",_text,keyName ((_key select 5) select 0)];

} else {
	waituntil {!isnil "MCC_keyBinds"};

	_key = MCC_keyBinds select 4;
	if (_key select 0) then {_text = "Shift + "};
	if (_key select 1) then {_text = _text + "Ctrl + "};
	if (_key select 2) then {_text = _text + "Alt + "};
	_keyName = format ["%1%2",_text,keyName (_key select 3)];
};

//Fails safe if ui get stuck
if (time > (player getVariable ["MCC_interactionActiveTime",time-5])+10) then {player setVariable ["MCC_interactionActive",false]};

//If we are busy quit
if ((player getVariable ["MCC_interactionActive",false]) || (time < (player getVariable ["MCC_interactionActiveTime",time-5])+0.3) || dialog) exitWith {};

player setVariable ["MCC_interactionActiveTime",time];

//Outside of vehicle
if (vehicle player == player) then {
	_target = cursorTarget;
	player reveal _target;

	if (isNull _target) then {
		_headPos = player selectionPosition "head";
		_upFront = player modelToWorld [(_headPos select 0),(_headPos select 1)+3,(_headPos select 2)];
		_objects = (lineintersectsWith [ATLToASL (player modelToWorld _headPos), ATLToASL _upFront, objNull, objNull, true]);

		if (count _objects > 0) then {
			_target = _objects select 0;
		};
	};

	_objects = player nearObjects [MCC_dummy,10];

	//Handle IED
	if (count _objects > 0) then {
		_selected = ([_objects,[],{player distance _x},"ASCEND"] call BIS_fnc_sortBy) select 0;
		_dir	  = [player, _selected] call BIS_fnc_relativeDirTo;
		if (_dir>340 || _dir < 20) exitWith {
			//IED
			if (((_selected getVariable ["MCC_IEDtype",""]) == "ied") && !(_selected getVariable ["MCC_isInteracted",false])) then {
				_null= [player,_selected] call MCC_fnc_interactIED;
				_break = true;
			};
		};
	};
	if (_break) exitWith {};
};

if !(_break) then {
	player setVariable ["MCC_interactionActive",false];
};
