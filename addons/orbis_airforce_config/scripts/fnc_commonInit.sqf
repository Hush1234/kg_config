params ["_vehicle"];

_vehicle setCenterOfMass ([0, 0, _vehicle modelToWorldVisual getCenterOfMass _vehicle select 2] vectorMultiply -1);
