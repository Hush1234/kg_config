#include "script_component.hpp"

params ["_unit", "_box"];
/*
if (stance _unit == "STAND") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary"] call EFUNC(common,doAnimation);
};

sleep 1;
*/

deleteVehicle _box; 

_pos = getPos _unit;
_dir = (getDir _unit);
_pos = (_pos vectorAdd [3 * sin _dir, 3 * cos _dir, 0]);

_arty = createVehicle ["rhs_D30_msv", [_pos select 0, _pos select 1, (_pos select 2) + 2], [], 0, "CAN_COLLIDE"];
_unit disableCollisionWith _arty;
_arty enableSimulation false;
_arty setDir (getDir _unit);

_arty setVariable ["ace_dragging_dragPosition", [0,3.5,0.5]];
[_unit, _arty] call ace_dragging_fnc_startDrag;

sleep 2;

_unit enableCollisionWith _arty;
_arty enableSimulation true;
