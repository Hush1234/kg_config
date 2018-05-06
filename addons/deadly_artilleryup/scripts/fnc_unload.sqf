#include "script_component.hpp"

params ["_unit", "_box"];

if (stance _unit == "STAND") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary"] call EFUNC(common,doAnimation);
};

sleep 2;

_pos = getPos _box;
deleteVehicle _box; 

_arty = createVehicle ["rhs_D30_msv", [_pos select 0, _pos select 1, 0], [], 0, "CAN_COLLIDE"];
_unit disableCollisionWith _arty;
_arty setDir (getDir _unit);

sleep 1;

_unit enableCollisionWith _arty;
