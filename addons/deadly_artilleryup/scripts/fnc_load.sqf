#include "script_component.hpp"

params ["_unit", "_arty"];

if (stance _unit == "STAND") then {
    [_unit, "AmovPercMstpSrasWrflDnon_diary"] call EFUNC(common,doAnimation);
};

sleep 2;

_pos = getPos _arty;
deleteVehicle _arty; 

_box = createVehicle ["Deadly_D30_Container", [_pos select 0, _pos select 1, 0], [], 0, "NONE"];
	