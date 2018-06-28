class Extended_PreStart_EventHandlers {
    class orbis_boxloader_config {
        init = "call compile preProcessFileLineNumbers 'orbis_boxloader_config\XEH_preStart.sqf'";
    };
};

class Extended_PreInit_EventHandlers {
    class orbis_boxloader_config {
        init = "call compile preProcessFileLineNumbers 'orbis_boxloader_config\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class orbis_boxloader_config {
        init = "call compile preProcessFileLineNumbers 'orbis_boxloader_config\XEH_postInit.sqf'";
    };
};
