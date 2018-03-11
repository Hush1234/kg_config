class CfgPatches {
	class orbis_airforce_config {
		name = "Orbis Airforce Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_pylons", "FIR_AirWeaponSystem_US", "FIR_A10A_F", "FIR_A10C_F", "FIR_F16_F", "FIR_F16D_F", "JS_JC_FA18", "JS_JC_SU35"};
		units[] = {"F16C_ROKAF_Aerobatics", "F16D_ROKAF_Aerobatics", "F16D_Training"/* , "JS_JC_FA18F_Training" */};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"

class ace_missileguidance_AttackProfiles {
	class orbis_default {
		name = "DIR";
		nameLocked = "LOBL";
		functionName = "";
	};
};

#include "baseClasses.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"

class CfgVehicles {
	class Plane;
	class Plane_Base_F: Plane {};
	class Plane_CAS_01_base_F: Plane_Base_F {};
	class Plane_Fighter_03_base_F: Plane_Base_F {};

	#include "FIR_A10_config.hpp"
	#include "FIR_F16_config.hpp"
	#include "JSJC_FA18_config.hpp"
	#include "JSJC_Su35_config.hpp"
};
