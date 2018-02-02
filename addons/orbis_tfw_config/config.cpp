class CfgPatches {
	class orbis_tfw_config {
		name = "Orbis TFW Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"tfw_radios_acre_ilbe"};
		units[] = {
			"tfw_roka_digi", 
			"tfw_roka_arctic", 
			"tfw_roka_desert", 
			"tfw_roka_frog", 
			"tfw_roka_mc", 
			"tfw_roka_spec", 

			"tfw_roka_a_digi", 
			"tfw_roka_a_arctic", 
			"tfw_roka_a_desert", 
			"tfw_roka_a_frog", 
			"tfw_roka_a_mc", 
			"tfw_roka_a_spec", 

			"tfw_roka_dd_digi", 
			"tfw_roka_dd_arctic", 
			"tfw_roka_dd_desert", 
			"tfw_roka_dd_frog", 
			"tfw_roka_dd_mc", 
			"tfw_roka_dd_spec", 

			"tfw_roka_blade_digi", 
			"tfw_roka_blade_arctic", 
			"tfw_roka_blade_desert", 
			"tfw_roka_blade_frog", 
			"tfw_roka_blade_mc", 
			"tfw_roka_blade_spec"
		};
		weapons[] = {};
	};
};

#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"
