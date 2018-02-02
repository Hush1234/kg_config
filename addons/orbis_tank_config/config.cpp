class CfgPatches {
	class orbis_tank_config {
		name = "Orbis Tank Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"RHS_US_A2Port_Armor", "rhsusf_c_m1a2", "rhsusf_c_m113"};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"

class CfgSounds {
	class RHSUSF_Error_High {
		name="Tank beep high";
		sound[]=
		{
			"\rhsusf\addons\rhsusf_c_m1a1\scripts\alarm_loop1.wss",
			10,
			1.5
		};
		titles[]={};
	};
};
