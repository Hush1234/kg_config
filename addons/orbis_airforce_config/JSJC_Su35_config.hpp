	class JS_JC_SU35: Plane_Base_F {
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;

		class Components: Components {
			#include "JSJC_FA18_Sensors.hpp"

			class TransportPylonsComponent {
				class Pylons {
					class pylon1 {
						hardpoints[] = {
							/* "O_KAB250_BOMB",
							"O_R73",
							"O_R77",
							"O_KH25",
							"O_BOMB_PYLON",
							"O_MISSILE_PYLON",
							"UNI_SCALPEL",
							"JS_JC_SU35_Pylon",
							"FIR_OPFOR_Combined_HP", */ // AA & AG
							"FIR_OPFOR_AA_HP" // AA Only
						};
						attachment = "FIR_R73_P_1rnd_M";
					};
					class pylon2: pylon1 {
						hardpoints[] = {"FIR_OPFOR_AA_HP"};
						attachment = "FIR_R73_P_1rnd_M";
					};
					class pylon3: pylon1 {
						hardpoints[] = {"FIR_OPFOR_AA_HP"};
						attachment = "FIR_R73_P_1rnd_M";
					};
					class pylon4: pylon1 {
						hardpoints[] = {"FIR_OPFOR_AA_HP"};
						attachment = "FIR_R73_P_1rnd_M";
					};
					class pylon5: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
					class pylon6: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
					class pylon7: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
					class pylon8: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
					class pylon9: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
					class pylon10: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
					class pylon11: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
					class pylon12: pylon1 {
						hardpoints[] = {"FIR_OPFOR_Combined_HP"};
						attachment = "FIR_R77_P_1rnd_M";
					};
				};
			};
		};
	};