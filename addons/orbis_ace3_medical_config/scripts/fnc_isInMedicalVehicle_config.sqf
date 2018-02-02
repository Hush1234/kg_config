/*
 * Author: KoffeinFlummi
 * Checks if a unit is in a medical vehicle.
 *
 * Arguments:
 * 0: unit to be checked <OBJECT>
 *
 * Return Value:
 * Is unit in medical vehicle? <BOOL>
 *
 * Example:
 * [player] call ace_medical_fnc_isInMedicalVehicle
 *
 * Public: Yes
 */

#include "define_medical.hpp"
#include "script_component.hpp"

params ["_unit"];
private _vehicle = vehicle _unit;

// if (_unit == _vehicle) exitWith {false};
// if (_unit in [driver _vehicle, gunner _vehicle, commander _vehicle]) exitWith {false};

private _vehicles = nearestObjects [_unit, ["rhsusf_M1085A1P2_B_WD_Medical_fmtv_usarmy", "rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy"], 20];
private _isInMedicalTent = false;
{
	private _posRel = _x worldToModelVisual [getPosATL _unit select 0, getPosATL _unit select 1, (getPosATL _unit select 2) - ((_unit worldToModelVisual (getPosATL _unit)) select 2)];
	if ((vehicle _unit isEqualTo _unit) && (_x animationSourcePhase "deploy_tent" > 0.5) && (abs (_posRel select 0) < 4) && (_posRel select 1 < 0) && (_posRel select 1 > -8.5)) exitWith {
		_isInMedicalTent = true;
	};
} forEach _vehicles;

if ((_unit == _vehicle) && !_isInMedicalTent) exitWith {false};

((_vehicle getVariable [QGVAR(medicClass), getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "attendant")]) > 0) || _isInMedicalTent
