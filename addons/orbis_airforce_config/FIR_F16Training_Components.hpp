		class Components: Components {
			class TransportPylonsComponent {
				class Presets {
					class Empty {
						displayName = "Empty";
						attachment[] = {};
					};
					class CAP {
						displayName = "Clean";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class CAS_1 {
						displayName = "Clean";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class CAS_2 {
						displayName = "Clean";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class SEAD {
						displayName = "Clean";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class Scrambl {
						displayName = "Ferry";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_F16C_center_Fueltank_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
				};
				class pylons {
					class pylons1 {
						hardpoints[] = {"FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons2: pylons1 {
						hardpoints[] = {"FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_Clean_P_1rnd_M";
					};
					class pylons3: pylons1 {
						hardpoints[] = {"FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_Clean_P_1rnd_M";
					};
					class pylons4: pylons1 {
						hardpoints[] = {"FIR_Training_Side", "FIR_Clean_MISC", "FIR_MISC"};
						attachment = "FIR_F16C_Fueltank_P_1rnd_M";
					};
					class pylons5: pylons1 {
						hardpoints[] = {"FIR_Training_Center", "FIR_MISC"};
						attachment = "FIR_F16C_center_Fueltank_P_1rnd_M";
					};
					class pylons6: pylons1 {
						hardpoints[] = {"FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons7: pylons4 {};
					class pylons8: pylons3 {};
					class pylons9: pylons2 {};
					class pylons10: pylons1 {};
				};
			};
		};