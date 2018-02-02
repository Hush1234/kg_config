params ["_unit", "_killer"];

private _locationTypes = getArray (configFile >> "Orbis_Civilian_Config" >> "locationsConfig" >> "locationTypes");
private _maxDistances = getArray (configFile >> "Orbis_Civilian_Config" >> "locationsConfig" >> "maxDistances");
private _nearestTowns = [];
{
	_nearestTowns pushBack nearestLocation [_unit, _x];
} forEach _locationTypes;

private _town = locationNull;
private _distance = selectMax _maxDistances;
{
	_currentDistance = (getPosASL _unit) distance _x;
	_maxDistance = _maxDistances select (_nearestTowns find _x);
	if ((_currentDistance <= _maxDistance) && ((isNull _town) || (_currentDistance < _distance))) then {
		_distance = _currentDistance;
		_town = _x;
	};
} forEach _nearestTowns;

private _levelOfViolence = missionNamespace getVariable ["levelOfViolence", 0];
_levelOfViolence = _levelOfViolence + 1;
missionNamespace setVariable ["levelOfViolence", _levelOfViolence];

if (!isNull _town) then {
	private _townNames = missionNamespace getVariable ["townNames", []];
	private _townNamespaces = missionNamespace getVariable ["townNamespaces", []];

	if (!(_town in _townNames)) then {
		_townNames pushBack _town;
		_townNamespaces pushBack [0, []];
		missionNamespace setVariable ["townNames", _townNames];
	};

	private _townIndex = _townNames find _town;
	private _currentNamespace = _townNamespaces select _townIndex;
	private _executionPoint = _currentNamespace select 0;
	private _civDeathPositions = _currentNamespace select 1;

	_executionPoint = _executionPoint + 1;
	_civDeathPositions pushBack (getPosASL _unit);

	_currentNamespace = [_executionPoint, _civDeathPositions];
	_townNamespaces set [_townIndex, _currentNamespace];
	missionNamespace setVariable ["townNamespaces", _townNamespaces];
};
