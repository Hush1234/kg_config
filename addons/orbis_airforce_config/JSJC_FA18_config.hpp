	class JS_JC_FA18E: Plane_Base_F {
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;

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
						attachment = "FIR_AIM9X_P_1rnd_M";
					};
					class pylon2: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP"};
						attachment = "FIR_AIM9X_P_1rnd_M";
					};
					class pylon3: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
						attachment = "FIR_AIM9X_P_1rnd_M";
					};
					class pylon4: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
						attachment = "FIR_AIM9X_P_1rnd_M";
					};
					class pylon5: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", /* "FIR_SH_AG_HP", */"JSJC_Fueltank"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon6: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", /* "FIR_SH_AG_HP", */"JSJC_Fueltank"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon7: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "JSJC_Fueltank"};
						attachment = "FIR_AIM120_P_type1_2rnd_M";
					};
					class pylon8: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "JSJC_Fueltank"};
						attachment = "FIR_AIM120_P_type1_2rnd_M";
					};
					class pylon9: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP", "FIR_SH_AUX_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon10: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon11: pylon1 {
						hardpoints[] = {"FIR_SH_Under_HP", "JSJC_Fueltank"};
						attachment = "js_m_fa18_wing_tank_x1";
					};
				};
			};
		};

		class Eventhandlers: Eventhandlers {
			class JS_JC_FA18E {
				init = "_this spawn JS_JC_fnc_FA18E_init; _this spawn orbis_airforce_fnc_FA18EInit; _this call BIS_fnc_AircraftSystemsInit";
				hit = ""; // _this call BIS_fnc_PlaneAiEject
			};
		};
	};

	class JS_JC_FA18F: Plane_Base_F {
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;

		class Components: Components {
			#include "JSJC_FA18_Sensors.hpp"

			class TransportPylonsComponent {
				class Pylons {
					class pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP"};
						attachment = "FIR_AIM9X_P_1rnd_M";
					};
					class pylon2: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP"};
						attachment = "FIR_AIM9X_P_1rnd_M";
					};
					class pylon3: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon4: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon5: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
						attachment = "FIR_AGM65G_P_1rnd_M";
					};
					class pylon6: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
						attachment = "FIR_AGM65G_P_1rnd_M";
					};
					class pylon7: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
						attachment = "FIR_GBU38_P_1rnd_M";
					};
					class pylon8: pylon1 {
						hardpoints[] = {"FIR_SH_Wingtip_HP", "FIR_SH_AA_HP", "FIR_SH_Dual_HP_config", "FIR_SH_AG_HP", "JSJC_Fueltank"};
						attachment = "FIR_GBU38_P_1rnd_M";
					};
					class pylon9: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon10: pylon1 {
						hardpoints[] = {"FIR_SH_AA_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylon11: pylon1 {
						hardpoints[] = {"FIR_SH_Under_HP", "JSJC_Fueltank"};
						attachment = "js_m_fa18_wing_tank_x1";
					};
				};
			};
		};

		class Turrets {
			class MainTurret: NewTurret {
				// isCopilot = 1;
				primaryGunner = 0;

				class Components: Components {
					#include "JSJC_FA18_Sensors.hpp"
				};
			};
		};

		class Eventhandlers: Eventhandlers {
			class JS_JC_FA18F {
				init = "_this spawn JS_JC_fnc_FA18F_init; _this spawn orbis_airforce_fnc_FA18FInit; _this call BIS_fnc_AircraftSystemsInit";
				hit = "";
			};
		};
	};

	/* class JS_JC_FA18F_Training: JS_JC_FA18F {
		displayName = "F/A-18 F Super Hornet (Training)";
		weapons[] = {"js_w_master_arms_safe"};
		magazines[] = {};

		class Components: Components {
			class TransportPylonsComponent {
				class Pylons {
					class pylon1 {
						hardpoints[] = {};
					};
					class pylon2: pylon1 {
						hardpoints[] = {};
					};
					class pylon3: pylon1 {
						hardpoints[] = {};
					};
					class pylon4: pylon1 {
						hardpoints[] = {};
					};
					class pylon5: pylon1 {
						hardpoints[] = {};
					};
					class pylon6: pylon1 {
						hardpoints[] = {};
					};
					class pylon7: pylon1 {
						hardpoints[] = {"JSJC_Fueltank"};
					};
					class pylon8: pylon1 {
						hardpoints[] = {"JSJC_Fueltank"};
					};
					class pylon9: pylon1 {
						hardpoints[] = {};
					};
					class pylon10: pylon1 {
						hardpoints[] = {};
					};
					class pylon11: pylon1 {
						hardpoints[] = {"JSJC_Fueltank"};
					};
				};
			};
		};

		class Turrets: Turrets {
			class MainTurret: NewTurret {
				isCopilot = 1;
				gunnerName = "Instructor";
			};
		};

		class Eventhandlers: Eventhandlers {
			class JS_JC_FA18F_Training: JS_JC_FA18F {
				init = "_this spawn JS_JC_fnc_FA18F_init; _this spawn orbis_airforce_fnc_FA18FTrainingInit; _this call BIS_fnc_AircraftSystemsInit";
			};
		};
	}; */