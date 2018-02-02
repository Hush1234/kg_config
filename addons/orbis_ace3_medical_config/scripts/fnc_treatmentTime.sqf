#include "define_medical.hpp"
#include "script_component.hpp"

params ["_caller", "_timeArray"];

private _class = _caller getVariable [QGVAR(medicClass), [0, 1] select (_caller getUnitTrait "medic")];
if (([_caller] call FUNC(isInMedicalVehicle)) || {[_caller] call FUNC(isInMedicalFacility)}) then {
    _class = _class + 1; //boost by one: untrained becomes medic, medic becomes doctor
};

_timeArray select (0 max _class min 2)
