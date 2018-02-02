class CfgPatches {
	class orbis_stui_config {
		name = "Orbis STUI Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"STUI_Core", "stui_groupindicators", "stui_nametags", "stui_stamina"};
		units[] = {};
		weapons[] = {};
	};
};

class Extended_PreInit_EventHandlers {
	orbis_stui_config = "call compile preProcessFileLineNumbers 'orbis_stui_config\XEH_preInit.sqf'";
};

class Extended_PostInit_EventHandlers {
	orbis_stui_config = "call compile preProcessFileLineNumbers 'orbis_stui_config\XEH_postInit.sqf'";
};
