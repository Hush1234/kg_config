	class FIR_F16_Base: Plane_Fighter_03_base_F {
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;

		rudderCoef[] = {0.25, 0.9, 1.3, 1.375, 1.4, 1.425, 1.45, 1.475, 1.49, 1.505, 1.35, 0.55, 0.45, 0.35, 0.25, 0.15}; // {0.5, 1.8, 2.6, 2.75, 2.8, 2.85, 2.9, 2.95, 2.98, 3.01, 2.7, 1.1, 0.9, 0.7, 0.5, 0.3}
		wheelSteeringSensitivity = 1.2;

		#include "FIR_F16_UserActions.hpp"

		class Components: Components {
			class TransportPylonsComponent {
				class pylons {
					class pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_F16_AA_HP"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylons2: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_Clean_MISC", "FIR_F16_AA_HP"};
						attachment = "FIR_AIM9X_P_1rnd_M";
					};
					class pylons3: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_Clean_MISC", "FIR_F16_AA_HP", "FIR_Meteor_HP_config", "FIR_HARM_HP_config"};
						attachment = "FIR_AIM120_P_1rnd_M";
					};
					class pylons4: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_Clean_MISC", "FIR_F16_Fueltank_HP_config", "FIR_HARM_HP_config"};
						attachment = "FIR_F16C_Fueltank_P_1rnd_M";
					};
					class pylons5: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_F16_Under_HP"};
						attachment = "FIR_F16C_center_Fueltank_P_1rnd_M";
					};
					class pylons6: pylons1 {
						hardpoints[] = {"FIR_MISC", "FIR_F16_Aux_HP"};
						attachment = "FIR_Empty_P_1rnd_M";
					};
					class pylons7: pylons4 {};
					class pylons8: pylons3 {};
					class pylons9: pylons2 {};
					class pylons10: pylons1 {};
				};
			};
		};

		class EventHandlers {
			init = "[_this select 0] execVM '\FIR_F16\sqs\init\init.sqf'; [_this select 0, true] spawn orbis_airforce_fnc_F16CommonLoop;";
		};
	};
	class FIR_F16D_Base: Plane_Fighter_03_base_F {
		receiveRemoteTargets = true;
		reportRemoteTargets = true;
		reportOwnPosition = true;

		rudderCoef[] = {0.25, 0.9, 1.3, 1.375, 1.4, 1.425, 1.45, 1.475, 1.49, 1.505, 1.35, 0.55, 0.45, 0.35, 0.25, 0.15}; // {0.5, 1.8, 2.6, 2.75, 2.8, 2.85, 2.9, 2.95, 2.98, 3.01, 2.7, 1.1, 0.9, 0.7, 0.5, 0.3}
		wheelSteeringSensitivity = 1.2;

		#include "FIR_F16_UserActions.hpp"

		class EventHandlers {
			init = "[_this select 0] execVM '\FIR_F16D\sqs\init\init.sqf'; [_this select 0, true] spawn orbis_airforce_fnc_F16CommonLoop;";
		};
	};

	class FIR_F16C: FIR_F16_Base {};
	class FIR_F16C_ROKAF: FIR_F16C {};
	class F16C_ROKAF_Aerobatics: FIR_F16C_ROKAF {
		displayName = "F-16C Fighting Falcon (ROKAF Aerobatics)";
		fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "ROKAF Aerobatics";
		fir_f16d_custom_code = "FIR_F16C_ROKAF_Aerobatics";
		fir_f16_custom_preview_pic = "\FIR_F16\ui\preview\pic_rokaf.paa";
		hiddenselectionstextures[] = {"FIR_F16\skin\body_rokaf_co.paa","FIR_F16\skin\wing_rokaf_co.paa","",""};
		editorPreview = "\FIR_F16\ui\preview\pic_rokaf.paa";
		weapons[] = {"FIR_MasterArm", "FIR_CMLauncher"};
		magazines[] = {"FIR_960rnd_CMFlare_Chaff_Magazine"};

		#include "FIR_F16Aerobatic_Components.hpp"
		#include "FIR_F16Aerobatic_UserActions.hpp"
		
		class EventHandlers {
			init = "[_this select 0] execVM '\FIR_F16\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_F16AerobaticInit;";
			killed = "_this call BIS_Effects_EH_Killed; ['toggleSmoke', [this, 'off', [0, 0, 0, 0]]] call CBA_fnc_globalEvent";
		};
	};

	class FIR_F16D: FIR_F16D_Base {};
	class FIR_F16D_ROKAF: FIR_F16D {};
	class F16D_ROKAF_Aerobatics: FIR_F16D_ROKAF {
		displayName = "F-16D Fighting Falcon (ROKAF Aerobatics)";
		fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "ROKAF Aerobatics";
		fir_f16d_custom_code = "FIR_F16D_ROKAF_Aerobatics";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_rokaf.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_rokaf_d_co.paa", "FIR_F16D\skin\wing_rokaf_co.paa"};
		editorPreview = "\FIR_F16D\ui\preview\pic_rokaf.paa";
		weapons[] = {"FIR_MasterArm", "FIR_CMLauncher"};
		magazines[] = {"FIR_960rnd_CMFlare_Chaff_Magazine"};

		#include "FIR_F16Aerobatic_Components.hpp"
		#include "FIR_F16Aerobatic_UserActions.hpp"

		class EventHandlers {
			init = "[_this select 0] execVM '\FIR_F16D\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_F16AerobaticInit;";
			killed = "_this call BIS_Effects_EH_Killed; ['toggleSmoke', [this, 'off', [0, 0, 0, 0]]] call CBA_fnc_globalEvent";
		};
	};
	class F16D_Training: FIR_F16D_ROKAF {
		displayName = "F-16D Fighting Falcon (ROKAF Training)";
		fir_f16d_custom_skin = 1;
		fir_f16d_custom_name = "ROKAF Training";
		fir_f16d_custom_code = "FIR_F16D_ROKAF_Training";
		fir_f16d_custom_preview_pic = "\FIR_F16D\ui\preview\pic_rokaf.paa";
		hiddenselectionstextures[] = {"FIR_F16D\skin\body_rokaf_d_co.paa", "FIR_F16D\skin\wing_rokaf_co.paa"};
		editorPreview = "\FIR_F16D\ui\preview\pic_rokaf.paa";
		weapons[] = {"FIR_MasterArm"};
		magazines[] = {};

		#include "FIR_F16Training_Components.hpp"

		class EventHandlers {
			init = "[_this select 0] execVM '\FIR_F16D\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_F16TrainingInit;";
		};
	};