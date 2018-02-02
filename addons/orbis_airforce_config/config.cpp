class CfgPatches {
	class orbis_airforce_config {
		name = "Orbis Airforce Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"FIR_AirWeaponSystem_US", "FIR_A10A_F", "FIR_A10C_F", /* "FIR_F16_F", "FIR_F16D_F", */"JS_JC_FA18", "JS_JC_SU35"};
		units[] = {/* "F16C_ROKAF_Aerobatics", "F16D_ROKAF_Aerobatics" */};
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

class CfgAmmo {
	class MissileBase;
	class Bo_GBU12_LGB;

	class FIR_APKWS_Rocket: MissileBase {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU10: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU12: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_EGBU12: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU24A: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU24B: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU24C: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU31: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU32: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU38: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU39: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU53: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_GBU54: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
	class FIR_PAVEWAY_IV: Bo_GBU12_LGB {
		#include "ace_missileguidance_default.hpp"
	};
};

class CfgMagazines {
	class VehicleMagazine;
	class FIR_240rnd_CMFlare_Chaff_Magazine: VehicleMagazine {};

	class FIR_M61A2_480rnd_M;
	class FIR_M61A2_412rnd_M: FIR_M61A2_480rnd_M {
		scope = 2;
		count = 412;
	};

	class FIR_960rnd_CMFlare_Chaff_Magazine: FIR_240rnd_CMFlare_Chaff_Magazine {
		count = 960;
	};

	class FIR_F16C_Fueltank_P_1rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_AG_HP", "FIR_Aerobatics_Side"};
	};
	class FIR_F16C_center_Fueltank_P_1rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_Under_HP", "FIR_Aerobatics_Center"};
	};
	class FIR_SUU25_P_8rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_Combined_HP", "FIR_F16_AG_HP", "B_BOMB_PYLON", "FIR_A10_BOMB_HP", "FIR_SH_AG_HP", "FIR_Aerobatics_Side", "FIR_Aerobatics_Wing"};
	};
	class FIR_SniperXR_1_P_1rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_Aux_HP", "FIR_Aerobatics_Aux"};
	};
	/* class FIR_Litening_std_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"B_BOMB_PYLON", "FIR_A10_AUX_HP", "FIR_SH_AUX_HP"};
	};
	class FIR_SniperXR_2_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"B_BOMB_PYLON", "FIR_A10_AUX_HP", "FIR_SH_AUX_HP"};
	}; */

	class FIR_AIM120_P_type1_2rnd_M : VehicleMagazine {
		hardpoints[] = {"FIR_F15SE_AA_UNDER_HP", "FIR_F15SE_Midwing_HP", "FIR_SH_Dual_HP_config"};
	};
	class FIR_AIM132_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"FIR_F16_AA_HP", "FIR_F16_Combined_HP", "FIR_BLUFOR_AA_HP", "FIR_BLUFOR_Combined_HP", "FIR_SH_Wingtip_HP"};
	};
	class FIR_AIM9X_P_2rnd_M : VehicleMagazine{
		displayName = "AIM-9X Sidewinder x2";
		hardpoints[] = {"B_BOMB_PYLON", "FIR_A10C_AA_HP", "FIR_BLUFOR_AA_HP", "FIR_BLUFOR_Combined_HP", "FIR_SH_Dual_HP_config"};			
	};

	/* class js_m_fa18_buddypod_x1: VehicleMagazine {
		displayName = "Buddy Pod";
		hardpoints[] = {"FIR_SH_Under_HP"};		
	}; */
	class js_m_fa18_wing_tank_x1: VehicleMagazine {
		hardpoints[] = {"JS_JC_F18_Pylon", "JSJC_Fueltank"};
	};
};

class CfgWeapons {
	class CannonCore;
	class RocketPods;
	class Mk82BombLauncher;

	class FIR_M61A2 : CannonCore {
		magazines[] = {"FIR_M61A2_412rnd_M", "FIR_M61A2_480rnd_M", "FIR_M61A2_511rnd_M", "FIR_M61A2_578rnd_M", "FIR_M61A2_675rnd_M", "FIR_M61A2_940rnd_M", "FIR_M61A2_TWAS_511rnd_M", "FIR_M61A2_TWAS_Red_511rnd_M"};
	};

	class FIR_APKWS_Launcher: RocketPods {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_GBU10: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_GBU12: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_EGBU12: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_GBU24: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_GBU39: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_GBU53: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_GBU54: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
	class FIR_PAVEWAY_IV: Mk82BombLauncher {
		ace_laser_canSelect = 1;
		ace_laser_showHud = 1;
	};
};

class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeftSensors {
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors {
	class components;
};
/* class VehicleSystemsTemplateLeftSensorsCommander: DefaultVehicleSystemsDisplayManagerLeftSensors {
	class components: components {};
};
class VehicleSystemsTemplateRightSensorsCommander: DefaultVehicleSystemsDisplayManagerRightSensors {
	class components: components {};
};
class VehicleSystemsTemplateLeftSensorsGunner: DefaultVehicleSystemsDisplayManagerLeftSensors {
	class components: components {};
};
class VehicleSystemsTemplateRightSensorsGunner: DefaultVehicleSystemsDisplayManagerRightSensors {
	class components: components {};
}; */
class VehicleSystemsTemplateLeftSensorsPilot: DefaultVehicleSystemsDisplayManagerLeftSensors {
	class components: components {};
};
class VehicleSystemsTemplateRightSensorsPilot: DefaultVehicleSystemsDisplayManagerRightSensors {
	class components: components {};
};

class Eventhandlers;
class CfgVehicles {
	class Plane;
	class Plane_Base_F: Plane {
		class Components;
	};
	class Plane_CAS_01_base_F: Plane_Base_F {};
	class Plane_Fighter_03_base_F: Plane_Base_F {};

	#include "FIR_A10_config.hpp"
	// #include "FIR_F16_config.hpp"
	#include "JSJC_FA18_config.hpp"
	#include "JSJC_Su35_config.hpp"
};
