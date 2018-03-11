class Extended_PreStart_EventHandlers {
	class orbis_check_addons {
		init = "call compile preProcessFileLineNumbers 'orbis_check_addons\XEH_preStart.sqf'";
	};
}; 

class Extended_PreInit_EventHandlers {
	class orbis_check_addons {
		init = "call compile preProcessFileLineNumbers 'orbis_check_addons\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class orbis_check_addons {
		init = "call compile preProcessFileLineNumbers 'orbis_check_addons\XEH_postInit.sqf'";
	};
};
