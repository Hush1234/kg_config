class CfgVehicles {
    class Man;
    class CAManBase: Man {
        ACE_GForceCoef = 0.6;
    };

    class B_Soldier_05_f;
    class B_Pilot_F: B_Soldier_05_f {
        ACE_GForceCoef = 0.6;
    };
    class I_Soldier_04_F;
    class I_pilot_F: I_Soldier_04_F {
        ACE_GForceCoef = 0.6;
    };
    class O_helipilot_F;
    class O_Pilot_F: O_helipilot_F {
        ACE_GForceCoef = 0.6;
    };
};

class CfgWeapons {
    class ItemCore;
    class Uniform_Base: ItemCore {
        ACE_GForceCoef = 1;
    };

    class U_B_PilotCoveralls: Uniform_Base {
        ACE_GForceCoef = 1;
    };
    class U_I_pilotCoveralls: Uniform_Base {
        ACE_GForceCoef = 1;
    };
    class U_O_PilotCoveralls: Uniform_Base {
        ACE_GForceCoef = 1;
    };
};
