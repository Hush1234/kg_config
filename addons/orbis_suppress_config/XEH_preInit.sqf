#include "define_suppress.hpp"
#include "script_component.hpp"	

FUNC(pinnedDown) = "orbis_suppress_config\scripts\fnc_pinnedDown.sqf" call SLX_XEH_COMPILE;
FUNC(impact) = "orbis_suppress_config\scripts\fnc_impact.sqf" call SLX_XEH_COMPILE;

GVAR(itensity) = 100;
[
    "L_Suppress_Intensity",
    "SLIDER",
    ["Supress Intensity", "Adjust Suppress Effect"],
    "Laxemann Suppress",
    [0, 100, 100, 0],
    nil,
    {
        params ["_value"];
        GVAR(intensity) = _value / 100;
    }
] call CBA_Settings_fnc_init;
