params ["_sound", "_delay", "_number"];

private _current = 0;
while {_current < _number} do {
	playSound _sound;
	_current = _current + 1;
	sleep _delay;
};
