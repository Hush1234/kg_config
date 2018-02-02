class CfgVehicles {
	class Man;	// External class reference
	
	class CAManBase : Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class dead_concertina_wire_place {
					displayName = "Place Concertina Wire";
                    condition = "[_player,'Deadly_item_ConcertinaWire'] call ace_common_fnc_hasItem";
                    statement = "[_player,'Deadly_item_ConcertinaWire'] call deadly_concertina_wire_fnc_place";
					showDisabled = 0;
					priority = 2;
					icon = "\Deadly_Concertina_Wire\UI\concertina_wire.paa";
				};
			};
		};
	};

    class ThingX;
    class ACE_ConcertinaWireCoil: ThingX {
        class ACE_Actions {
            class ACE_MainActions {
                class ACE_Deploy;
				
                class ACE_Pickup : ACE_Deploy {
                    displayName = "Pick up Concertina Wire";
					statement = "[_player,_target] call deadly_concertina_wire_fnc_pickup";
                };
            };
        };
    };
};
