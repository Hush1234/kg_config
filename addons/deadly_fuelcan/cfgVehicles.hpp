class cfgVehicles {
	class Man;	// External class reference
	
	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class dead_fuelcan_place {
					displayName = "Place Canister";
                    condition = "[_player,'Deadly_item_FuelCan'] call ace_common_fnc_hasItem";
                    statement = "[_player,'Deadly_item_FuelCan'] call deadly_fuelcan_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\Deadly_FuelCan\UI\Fuel_Canister.paa";
				};
			};
		};
	};
	
	class Land_CanisterFuel_F;
	
	class Deadly_FuelCanister : Land_CanisterFuel_F {
		class EventHandlers {
			class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers {};
		};
		author = "Deadly";
		displayname = "Fuel Canister";
		
		ace_cargo_size = 1;
		
		class ACE_Actions {
			class ACE_MainActions {
				selection = "";
				distance = 4;
				condition = "true";
				
				class ACE_Pickup {
					selection = "";
					displayName = "Dump Canister";
					distance = 4;
					condition = "true";
					statement = "[_player,_target] call deadly_fuelcan_fnc_dump";
					showDisabled = 0;
					exceptions[] = {};
					priority = 5;
					icon = "\Deadly_FuelCan\UI\Fuel_Canister.paa";
				};
			};
		};
	};
};
