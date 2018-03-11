class Extended_PreStart_EventHandlers {
    class deadly_artilleryup {
        init = "call compile preProcessFileLineNumbers 'deadly_artilleryup\XEH_preStart.sqf'";
    };
};

class Extended_PreInit_EventHandlers {
    class deadly_artilleryup {
        init = "call compile preProcessFileLineNumbers 'deadly_artilleryup\XEH_preInit.sqf'";
    };
};

class Extended_PostInit_EventHandlers {
    class deadly_artilleryup {
        init = "call compile preProcessFileLineNumbers 'deadly_artilleryup\XEH_postInit.sqf'";
    };
};

/* class Extended_FiredBIS_EventHandlers {
    class Mortar_01_base_F {
        class deadly_artilleryup {
            firedBIS = QUOTE(_this call FUNC(handleFired));
        };
    };
}; */
