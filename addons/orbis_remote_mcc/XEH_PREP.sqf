orbis_mcc_fnc_missionRequested = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_missionRequested.sqf';
orbis_mcc_fnc_startMission = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_startMission.sqf';

// mcc functions
if !(isClass (configFile >> "CfgPatches" >> "mcc_sandbox")) then {
	MCC_fnc_bdButtonsModule = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_bdButtonsModule.sqf';
	MCC_fnc_bdCreateManual = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_bdCreateManual.sqf';
	MCC_fnc_bdNumpadModule = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_bdNumpadModule.sqf';
	MCC_fnc_bdStart = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_bdStart.sqf';
	MCC_fnc_bdWatch = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_bdWatch.sqf';
	MCC_fnc_bdWireModule = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_bdWireModule.sqf';
	MCC_fnc_CBAInteractionKeybind = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_CBAInteractionKeybind.sqf';
	MCC_fnc_initBombDefuse = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_initBombDefuse.sqf';
	MCC_fnc_interactIED = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_interactIED.sqf';
	MCC_fnc_interaction = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_interaction.sqf';
	MCC_fnc_interactionsBuildInteractionUI = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_interactionsBuildInteractionUI.sqf';
	MCC_fnc_interactProgress = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_interactProgress.sqf';
	MCC_fnc_pickItem = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_pickItem.sqf';
	MCC_fnc_pickItem_general = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_pickItem_general.sqf';
	MCC_fnc_setVehicleInit = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_setVehicleInit.sqf';
	MCC_fnc_time2string = compile preprocessFileLineNumbers 'orbis_remote_mcc\scripts\fnc_time2string.sqf';
};
