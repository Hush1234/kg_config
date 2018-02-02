	class JS_JC_FA18E: Plane_Base_F {
		class Components: Components {
			#include "JSJC_FA18_Sensors.hpp"

			class TransportPylonsComponent {
				class Pylons {
					class pylon1 {
						hardpoints[] = {
							/* "JS_JC_F18_Pylon",
							"B_MISSILE_PYLON",
							"B_ASRRAM_EJECTOR",
							"B_ZEPHYR",
							"B_AMRAAM",
							"SCALPEL_1RND_EJECTOR",
							"B_BIM9X_RAIL",
							"B_BIM9X_DUAL_RAIL",
							"B_AMRAAM_D_RAIL",
							"B_AMRAAM_D_DUAL_RAIL",
							"B_AGM65_RAIL",
							"B_GBU12",
							"B_GBU12_DUAL_RAIL",
							"B_BOMB_PYLON",
							"FIR_SH_Combined_HP", */
							"FIR_SH_Wingtip_HP" /* , // Short-range Single
							"FIR_SH_AA_HP", // Mid-range Single
							"FIR_SH_Dual_HP_config", // AA Dual-rail
							"FIR_SH_AG_HP",
							"FIR_SH_Under_HP",
							"FIR_SH_Fueltank_HP",
							"FIR_SH_Aux_HP" */
						};
					};
					class pylon2: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP"};
					};
					class pylon3: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
					};
					class pylon4: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
					};
					class pylon5: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", /* "FIR_SH_AG_HP", */"JSJC_Fueltank"};
					};
					class pylon6: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", /* "FIR_SH_AG_HP", */"JSJC_Fueltank"};
					};
					class pylon7: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "JSJC_Fueltank"};
					};
					class pylon8: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "JSJC_Fueltank"};
					};
					class pylon9: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP", "FIR_SH_AUX_HP"};
					};
					class pylon10: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP"};
					};
					class pylon11: pylon1 {
						hardpoints[] = {"FIR_SH_Under_HP", "JSJC_Fueltank"};
					};
				};
			};
		};
		class Eventhandlers: Eventhandlers {
			class JS_JC_FA18E {
				init = "_this spawn JS_JC_fnc_FA18E_init; _this spawn orbis_airforce_fnc_FA18Einit; _this call BIS_fnc_AircraftSystemsInit";
				hit = ""; // _this call BIS_fnc_PlaneAiEject
			};
		};
	};

	class JS_JC_FA18F: Plane_Base_F {
		class Components: Components {
			// #include "JSJC_FA18_Sensors.hpp"

			class TransportPylonsComponent {
				class Pylons {
					class pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP"};
					};
					class pylon2: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP"};
					};
					class pylon3: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
					};
					class pylon4: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
					};
					class pylon5: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
					};
					class pylon6: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
					};
					class pylon7: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
					};
					class pylon8: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
					};
					class pylon9: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP"};
					};
					class pylon10: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP"};
					};
					class pylon11: pylon1 {
						hardpoints[] = {"FIR_SH_Under_HP", "JSJC_Fueltank"};
					};
				};
			};
		};
		/* class NewTurret;
		class Turrets {
			class MainTurret: NewTurret {
				class Components: Components {
					#include "JSJC_FA18_Sensors.hpp"
				};
			};
		}; */
		class Eventhandlers: Eventhandlers {
			class JS_JC_FA18F {
				init = "_this spawn JS_JC_fnc_FA18F_init; _this spawn orbis_airforce_fnc_FA18Finit; _this call BIS_fnc_AircraftSystemsInit";
				hit = "";
			};
		};
	};