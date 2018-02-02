#include "script_component.hpp"

params ["_unit", "_tripodClass"];

_unit removeItem _tripodClass;

if (stance _unit == "STAND") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary"] call EFUNC(common,doAnimation);
};

[{
    params ["_unit"];

    private _direction = getDir _unit;
    private _position = getPosASL _unit vectorAdd [0.8 * sin _direction, 0.8 * cos _direction, 0.02];

    private _tripod = "ACE_ConcertinaWireCoil" createVehicle [0, 0, 0];

    [{
        (_this select 0) params ["_tripod", "_direction", "_position"];

        _tripod setDir _direction;
        _tripod setPosASL _position;

		if ((getPosATL _tripod select 2) - (getPos _tripod select 2) < 1E-5) then { // if not on object, then adjust to surface normale
			_tripod setVectorUp (surfaceNormal (position _tripod));
		};

		[_this select 1] call CBA_fnc_removePerFrameHandler;
    }, 0, [_tripod, _direction, _position]] call CBA_fnc_addPerFrameHandler;

}, [_unit], 1] call CBA_fnc_waitAndExecute;
