	class FIR_F16_Base: Plane_Fighter_03_base_F {
		#include "FIR_F16_UserActions.hpp"

		class EventHandlers {
			// init = "[_this select 0] execVM '\FIR_F16\sqs\init\init.sqf'; _this spawn orbis_fnc_airforce_commonInit;";
		};
	};
	class FIR_F16D_Base: Plane_Fighter_03_base_F {
		#include "FIR_F16_UserActions.hpp"

		class EventHandlers {
			// init = "[_this select 0] execVM '\FIR_F16D\sqs\init\init.sqf'; _this spawn orbis_fnc_airforce_commonInit;";
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
		magazines[] = {"FIR_240rnd_CMFlare_Chaff_Magazine", "FIR_240rnd_CMFlare_Chaff_Magazine", "FIR_240rnd_CMFlare_Chaff_Magazine", "FIR_240rnd_CMFlare_Chaff_Magazine"};

		#include "AerobaticF16_UserActions.hpp"
		#include "AerobaticF16_Components.hpp"
		
		class EventHandlers {
			init = "[_this select 0] execVM '\FIR_F16\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_aerobaticF16Init;";
			killed = "_this call BIS_Effects_EH_Killed; ['toggleSmoke', [this, [0, 0, 0, 0]]] call CBA_fnc_globalEvent";
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
		magazines[] = {"FIR_240rnd_CMFlare_Chaff_Magazine", "FIR_240rnd_CMFlare_Chaff_Magazine", "FIR_240rnd_CMFlare_Chaff_Magazine", "FIR_240rnd_CMFlare_Chaff_Magazine"};

		#include "AerobaticF16_UserActions.hpp"
		#include "AerobaticF16_Components.hpp"

		class EventHandlers {
			init = "[_this select 0] execVM '\FIR_F16D\sqs\init\init.sqf'; _this spawn orbis_airforce_fnc_aerobaticF16Init;";
			killed = "_this call BIS_Effects_EH_Killed; ['toggleSmoke', [this, [0, 0, 0, 0]]] call CBA_fnc_globalEvent";
		};
	};