#include "define_medical.hpp"
#include "script_component.hpp"

params ["_caller", "_target"];

private _joint = _target getVariable [QEGVAR(medical,jointTreatment), []];
private _itemCount = 0;

if (!(_joint isEqualTo [])) then {
	{
		if ((_x select 0) isEqualTo _caller) then {
			_joint deleteAt _itemCount;
		};
		_itemCount = _itemCount + 1;
	} forEach _joint;
};

_target setVariable [QEGVAR(medical,jointTreatment), _joint, true];
