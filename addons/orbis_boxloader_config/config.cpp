class CfgPatches {
	class orbis_boxloader_config {
		name = "Orbis Boxloader Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"boxloader"};
		units[] = {};
		weapons[] = {};
	};
};

#include "CfgEventHandlers.hpp"

class CfgVehicles {
	class Boxloader_Pallet_base;
	class Land_Boxloader_Pallet_1: Boxloader_Pallet_base {
		class EventHandlers {
			class orbis_config {
				init = "[_this select 0] call orbis_boxloader_fnc_palletLoop;";
			};
		};
	};
};
