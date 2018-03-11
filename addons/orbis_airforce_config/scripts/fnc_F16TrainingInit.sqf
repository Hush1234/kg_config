params ["_vehicle"];

_vehicle animate ["hp2_hide", 1];
_vehicle animate ["hp3_hide", 1];
_vehicle animate ["hp7_hide", 1];
_vehicle animate ["hp8_hide", 1];

[_vehicle] spawn orbis_airforce_fnc_F16TrainingPostInit;
[_vehicle, false, ""] spawn orbis_airforce_fnc_F16CommonLoop;
