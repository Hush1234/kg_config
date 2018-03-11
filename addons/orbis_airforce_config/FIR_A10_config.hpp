	class FIR_A10A_Base: Plane_CAS_01_base_F {
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;

		#include "FIR_A10_UserActions.hpp"
		
		class EventHandlers {
			// init = "[_this select 0] execVM '\FIR_A10A\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_commonInit;";
		};
	};
	class FIR_A10C_Base: Plane_CAS_01_base_F {
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;

		#include "FIR_A10_UserActions.hpp"

		class Components: Components {
			class TransportPylonsComponent {
				class Pylons {
					class pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_JAM_HP", "FIR_A10C_JAM_HP"};
						attachment = "FIR_ALQ184_2_P_1rnd_M";
					};
					class pylons2: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP"};
						attachment = "FIR_Hydra_P_7rnd_M";
					};
					class pylons3: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_BOMB_2K_HP", "FIR_A10C_BOMB_2K_HP", "FIR_A10_MAV_HP"};
						attachment = "FIR_AGM65G_P_1rnd_M";
					};
					class pylons4: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_BOMB_2K_HP", "FIR_A10C_BOMB_2K_HP"};
						attachment = "FIR_GBU38_P_1rnd_M";
					};
					class pylons5: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_BOMB_2K_HP", "FIR_A10C_BOMB_2K_HP"};
						attachment = "FIR_GBU12_P_1rnd_M";
					};
					class pylons6: pylons5 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_BOMB_2K_HP", "FIR_A10C_BOMB_2K_HP"};
					};
					class pylons7: pylons4 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_BOMB_2K_HP", "FIR_A10C_BOMB_2K_HP"};
					};
					class pylons8: pylons3 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_BOMB_2K_HP", "FIR_A10C_BOMB_2K_HP", "FIR_A10_MAV_HP"};
					};
					class pylons9: pylons2 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP", "FIR_A10_AUX_HP"};
						attachment = "FIR_Litening_std_P_1rnd_M";
					};
					class pylons10: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_A10_BOMB_HP", "FIR_A10C_BOMB_HP"};
						attachment = "FIR_Hydra_P_7rnd_M";
					};
				};
			};
		};

		class EventHandlers {
			// init = "[_this select 0] execVM '\FIR_A10C\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_commonInit;";
		};
	};