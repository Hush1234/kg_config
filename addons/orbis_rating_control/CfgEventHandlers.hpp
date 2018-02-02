class Extended_PreStart_EventHandlers {
	class orbis_rating_control {
		init = "call compile preProcessFileLineNumbers 'orbis_rating_control\XEH_preStart.sqf'";
	};
}; 

class Extended_PreInit_EventHandlers {
	class orbis_rating_control {
		init = "call compile preProcessFileLineNumbers 'orbis_rating_control\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class orbis_rating_control {
		init = "call compile preProcessFileLineNumbers 'orbis_rating_control\XEH_postInit.sqf'";
	};
};
