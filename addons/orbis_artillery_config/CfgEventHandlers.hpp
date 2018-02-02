class Extended_PreStart_EventHandlers {
    class orbis_artillery_config {
        init = "call compile preProcessFileLineNumbers 'orbis_artillery_config\XEH_preStart.sqf'";
    };
};

class Extended_PreInit_EventHandlers {
    class orbis_artillery_config {
        init = "call compile preProcessFileLineNumbers 'orbis_artillery_config\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class orbis_artillery_config {
        init = "call compile preProcessFileLineNumbers 'orbis_artillery_config\XEH_postInit.sqf'";
    };
};

/* class Extended_FiredBIS_EventHandlers {
    class Mortar_01_base_F {
        class orbis_artillery_config {
            firedBIS = QUOTE(_this call FUNC(handleFired));
        };
    };
}; */
