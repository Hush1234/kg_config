class CfgPatches {
	class orbis_winter_setup {
		name = "Orbis Winter Setup";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_goggles"};
		units[] = {};
	};
};

/* class Extended_PreInit_EventHandlers {
	orbis_winter_setup = "call compile preProcessFileLineNumbers 'orbis_winter_setup\XEH_preInit.sqf'";
}; */

/* class Extended_postInit_EventHandlers {
	class orbis_winter_setup {
		init = "call compile preprocessFileLineNumbers 'orbis_winter_setup\XEH_postInit.sqf'";
	};
}; */
