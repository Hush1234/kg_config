	class FIR_A10A_Base: Plane_CAS_01_base_F {
		#include "FIR_A10_UserActions.hpp"
		
		class EventHandlers {
			// init = "[_this select 0] execVM '\FIR_A10A\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_commonInit;";
		};
	};
	class FIR_A10C_Base: Plane_CAS_01_base_F {
		class Components: Components {
			#include "FIR_A10_UserActions.hpp"
			
			class TransportPylonsComponent {
				class Pylons {
					class pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_JAM_HP","FIR_A10C_JAM_HP","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
					};
					class pylons2: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
					};
					class pylons3: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_MAV_HP","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
					};
					class pylons4: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
					};
					class pylons5: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
					};
					class pylons6: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
					};
					class pylons7: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
					};
					class pylons8: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_MAV_HP","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_BOMB_2K_HP","FIR_A10C_BOMB_2K_HP"};
					};
					class pylons9: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP","FIR_A10_AUX_HP"};
					};
					class pylons10: pylons1 {
						hardpoints[] = {"FIR_MISC","FIR_A10_BOMB_HP","FIR_A10C_BOMB_HP"};
					};
				};
			};
		};
		class EventHandlers {
		// init = "[_this select 0] execVM '\FIR_A10C\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_commonInit;";
		};
	};