#include "script_component.hpp"

params ["_unit", "_arty"];

if (stance _unit == "STAND") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary"] call EFUNC(common,doAnimation);
};

sleep 2;

if (stance _unit == "STAND") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary"] call EFUNC(common,doAnimation);
};

_pos = getPos _unit;
_dir = (getDir _unit) + 90;
_pos = (_pos vectorAdd [4 * sin _dir, 4 * cos _dir, 0]);

deleteVehicle _arty; 

_box = createVehicle ["Deadly_D30_Container", [_pos select 0, _pos select 1, 0.5], [], 0, "CAN_COLLIDE"];
_unit disableCollisionWith _box;
_box setDir (getDir _unit);

sleep 2;

_unit enableCollisionWith _box;
