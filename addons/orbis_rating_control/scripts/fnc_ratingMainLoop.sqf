#include "script_component.hpp"

params [];

[ACE_player] call orbis_fnc_ratingSetPositive;
// hintSilent format ["%1", rating ACE_player];

[orbis_fnc_ratingMainLoop, [], 1] call CBA_fnc_waitAndExecute;
