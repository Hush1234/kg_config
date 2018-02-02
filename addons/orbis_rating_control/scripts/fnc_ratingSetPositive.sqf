#include "script_component.hpp"

params ["_target"];

_unitRating = rating _target;

if (_unitRating < 0) then {
	_target addRating abs _unitRating;
};
