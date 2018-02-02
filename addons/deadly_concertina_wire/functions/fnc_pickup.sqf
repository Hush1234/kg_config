#include "script_component.hpp"

params ["_unit", "_tripod"];

if (stance _unit == "STAND") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary"] call EFUNC(common,doAnimation);
};

[{
    params ["_unit", "_tripod"];

    if (isNull _tripod) exitWith {};

    deleteVehicle _tripod;
	
    [_unit, "Deadly_item_ConcertinaWire"] call EFUNC(common,addToInventory);
}, [_unit, _tripod], 1] call CBA_fnc_waitAndExecute;
