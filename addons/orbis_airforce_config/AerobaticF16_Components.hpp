		class Components: Components {
			class TransportPylonsComponent {
				UIPicture = "\FIR_F16\UI\f16_dynamic_ca.paa";
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
						displayName = "Light Flare";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class CAS_2 {
						displayName = "Heavy Flare";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_Empty_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_SUU25_P_8rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class SEAD {
						displayName = "Camera";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_F16C_center_Fueltank_P_1rnd_M", "FIR_SniperXR_1_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
					class Scrambl {
						displayName = "Ferry";
						attachment[] = {"FIR_Empty_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_F16C_center_Fueltank_P_1rnd_M", "FIR_Empty_P_1rnd_M", "FIR_F16C_Fueltank_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Clean_P_1rnd_M", "FIR_Empty_P_1rnd_M"};
					};
				};
				class pylons {
					class pylons1 {
						hardpoints[] = {"FIR_Aerobatics_Wing", "FIR_MISC"};
						attachment = "FIR_Empty_P_1rnd_M";
						priority = 5;
						maxweight = 300;
						UIposition[] = {0.35,0.0};
					};
					class pylons2: pylons1 {
						hardpoints[] = {"FIR_Aerobatics_Wing", "FIR_Clean_MISC", "FIR_MISC"};
						priority = 4;
						attachment = "FIR_Clean_P_1rnd_M";
						maxweight = 500;
						UIposition[] = {0.345,0.05};
					};
					class pylons3: pylons1 {
						hardpoints[] = {"FIR_Aerobatics_Wing", "FIR_Clean_MISC", "FIR_MISC"};
						priority = 3;
						attachment = "FIR_Clean_P_1rnd_M";
						maxweight = 1050;
						UIposition[] = {0.34,0.1};
					};
					class pylons4: pylons1 {
						hardpoints[] = {"FIR_Aerobatics_Side", "FIR_Clean_MISC", "FIR_MISC"};
						priority = 2;
						attachment = "FIR_F16C_Fueltank_P_1rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.2};
					};
					class pylons5: pylons1 {
						hardpoints[] = {"FIR_Aerobatics_Center","FIR_MISC"};
						priority = 1;
						attachment = "FIR_F16C_center_Fueltank_P_1rnd_M";
						maxweight = 1200;
						UIposition[] = {0.33,0.25};
					};
					class pylons6: pylons1 {
						hardpoints[] = {"FIR_Aerobatics_Aux","FIR_MISC"};
						UIposition[] = {0.33,0.3};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons7: pylons4 {
						UIposition[] = {0.33,0.35};
						mirroredMissilePos = 1;
					};
					class pylons8: pylons3 {
						UIposition[] = {0.33,0.40};
						mirroredMissilePos = 1;
					};
					class pylons9: pylons2 {
						UIposition[] = {0.34,0.45};
						mirroredMissilePos = 1;
					};
					class pylons10: pylons1 {
						UIposition[] = {0.345,0.5};
						mirroredMissilePos = 1;
					};
				};
			};
		};