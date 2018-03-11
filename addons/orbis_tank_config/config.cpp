class CfgPatches {
	class orbis_tank_config {
		name = "Orbis Tank Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_overpressure", "RHS_US_A2Port_Armor", "rhsusf_c_m1a2", "rhsusf_c_m113"};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"

class CfgWeapons {
	class CannonCore;
	class cannon_120mm: CannonCore {
		ace_overpressure_range = 0.1;
	};
	class cannon_125mm: CannonCore {
		ace_overpressure_range = 0.1;
	};
	class cannon_105mm: CannonCore {
		ace_overpressure_range = 0.1;
	};
	class mortar_155mm_AMOS: CannonCore {
		ace_overpressure_range = 0.1;
	};
};

#include "CfgVehicles.hpp"

class CfgSounds {
	class RHSUSF_Error_High {
		name = "Tank beep high";
		sound[] = {
			"\rhsusf\addons\rhsusf_c_m1a1\scripts\alarm_loop1.wss",
			10,
			1.5
		};
		titles[] = {};
	};
};
