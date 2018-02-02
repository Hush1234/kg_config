class Extended_PreStart_EventHandlers {
	class orbis_remote_mcc {
		init = "call compile preProcessFileLineNumbers 'orbis_remote_mcc\XEH_preStart.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
	class orbis_remote_mcc {
		init = "call compile preProcessFileLineNumbers 'orbis_remote_mcc\XEH_preInit.sqf'";
	};
};

class Extended_PostInit_EventHandlers {
	class orbis_remote_mcc {
		init = "call compile preProcessFileLineNumbers 'orbis_remote_mcc\XEH_postInit.sqf'";
	};
};
