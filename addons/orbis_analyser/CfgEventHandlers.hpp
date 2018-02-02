class Extended_PreStart_EventHandlers {
	class orbis_analyser {
		init = "call compile preProcessFileLineNumbers 'orbis_analyser\XEH_preStart.sqf'";
	};
}; 

class Extended_PreInit_EventHandlers {
	class orbis_analyser {
		init = "call compile preProcessFileLineNumbers 'orbis_analyser\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class orbis_analyser {
		init = "call compile preProcessFileLineNumbers 'orbis_analyser\XEH_postInit.sqf'";
	};
};
