params ["_vehicle"];

private _time = CBA_missionTime + 5;
waitUntil {(_vehicle animationPhase "hp2_hide" isEqualTo 0) || (CBA_missionTime > _time)};

private _frameNo = diag_frameNo;
waitUntil {diag_frameNo > _frameNo};

if (CBA_missionTime > _time) exitWith {};

_vehicle setPylonLoadOut [1, "FIR_Empty_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [2, "FIR_Clean_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [3, "FIR_Clean_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [4, "FIR_F16C_Fueltank_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [5, "FIR_F16C_center_Fueltank_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [6, "FIR_Empty_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [7, "FIR_F16C_Fueltank_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [8, "FIR_Clean_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [9, "FIR_Clean_P_1rnd_M", false, []];
_vehicle setPylonLoadOut [10, "FIR_Empty_P_1rnd_M", false, []];
_vehicle animate ["hp2_hide", 1];
_vehicle animate ["hp3_hide", 1];
_vehicle animate ["hp7_hide", 1];
_vehicle animate ["hp8_hide", 1];
