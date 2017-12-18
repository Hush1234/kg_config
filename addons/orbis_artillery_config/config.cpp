class CfgPatches {
	class orbis_artillery_config {
		name = "Orbis RHS Artillery Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_mk6mortar", "rhsusf_c_heavyweapons", "rhsusf_c_statics"};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
