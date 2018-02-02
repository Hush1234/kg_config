class asdg_OpticRail;
class asdg_OpticRail1913: asdg_OpticRail {
	class compatibleItems {
		SMA_eotechG33_3XDOWN_dummy = 1;
		SMA_eotechG33_tan_3XDOWN_dummy = 1;
		SMA_eotechG33_grn_3XDOWN_dummy = 1;
		SMA_eotech552_3XDOWN_dummy = 1;
		SMA_eotech552_3XDOWN_wdl_dummy = 1;
		SMA_eotech552_3XDOWN_des_dummy = 1;
	};
};

class CfgWeapons {
	class SMA_AssaultBase;
	class SMA_556_RIFLEBASE: SMA_AssaultBase {
		magazines[] = {"rhs_mag_30Rnd_556x45_M855A1_Stanag", "rhs_mag_30Rnd_556x45_M855A1_Stanag_No_Tracer", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Green", "rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Yellow", "rhs_mag_30Rnd_556x45_Mk318_Stanag", "rhs_mag_30Rnd_556x45_Mk262_Stanag", "rhs_mag_30Rnd_556x45_M200_Stanag"};
	};
	class SMA_762_RIFLEBASE: SMA_AssaultBase {
		magazines[] = {"SMA_20Rnd_762x51mm_M80A1_EPR", "SMA_20Rnd_762x51mm_M80A1_EPR_Tracer", "SMA_20Rnd_762x51mm_M80A1_EPR_IR", "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range", "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_Tracer", "SMA_20Rnd_762x51mm_Mk316_Mod_0_Special_Long_Range_IR", "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic", "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_Tracer", "SMA_20Rnd_762x51mm_Lapua_FMJ_Subsonic_IR", "20Rnd_762x51_Mag", "rhsusf_20Rnd_762x51_m118_special_Mag", "rhsusf_20Rnd_762x51_m993_Mag"};
	};

	class InventoryOpticsItem_Base_F;
	class SMA_eotech;
	class SMA_eotechG33_3XDOWN: SMA_eotech {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotechG33_3XUP";
	};
	class SMA_eotechG33_3XUP: SMA_eotechG33_3XDOWN {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotechG33_3XDOWN_dummy";
	};
	class SMA_eotechG33_tan_3XDOWN: SMA_eotech {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotechG33_tan_3XUP";
	};
	class SMA_eotechG33_grn_3XDOWN: SMA_eotech {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotechG33_grn_3XUP";
	};
	class SMA_eotechG33_tan_3XUP: SMA_eotechG33_3XDOWN {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotechG33_tan_3XDOWN_dummy";
	};
	class SMA_eotechG33_grn_3XUP: SMA_eotechG33_3XDOWN {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotechG33_grn_3XDOWN_dummy";
	};
	class SMA_eotechG33_3XDOWN_dummy: SMA_eotech {
		nextOpticAuto = 1;
		nextOpticMode = "SMA_eotechG33_3XDOWN";
		scope = 1;
		displayName = "EOTech EXPS2-2 + G33STS Magnifier";
		model = "\SMA_EOTECH_33\SMA_eotech_G33DOWN";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera = "eye";
			class OpticsModes {
				class AIM {
					opticsZoomMin = 0.750000;
					opticsZoomMax = 0.750000;
					opticsZoomInit = 0.750000;
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					memoryPointCamera = "iron_eye";
					visionMode[] = {};
					opticsFlare = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					opticsDisablePeripherialVision = 0;
				};
			};
		};
	};
	class SMA_eotechG33_tan_3XDOWN_dummy: SMA_eotech {
		nextOpticAuto = 1;
		nextOpticMode = "SMA_eotechG33_tan_3XDOWN";
		scope = 1;
		displayName = "EOTech EXPS2-2 + G33STS Magnifier Tan";
		model = "\SMA_EOTECH_33\SMA_eotechtan_G33DOWN";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera = "eye";
			class OpticsModes {
				class AIM {
					opticsZoomMin = 0.750000;
					opticsZoomMax = 0.750000;
					opticsZoomInit = 0.750000;
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					memoryPointCamera = "iron_eye";
					visionMode[] = {};
					opticsFlare = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					opticsDisablePeripherialVision = 0;
				};
			};
		};
	};
	class SMA_eotechG33_grn_3XDOWN_dummy: SMA_eotech {
		nextOpticAuto = 1;
		nextOpticMode = "SMA_eotechG33_grn_3XDOWN";
		scope = 1;
		displayName = "EOTech EXPS2-2 + G33STS Magnifier OD";
		model = "\SMA_EOTECH_33\SMA_eotechgrn_G33DOWN";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera = "eye";
			class OpticsModes {
				class AIM {
					opticsZoomMin = 0.750000;
					opticsZoomMax = 0.750000;
					opticsZoomInit = 0.750000;
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					memoryPointCamera = "iron_eye";
					visionMode[] = {};
					opticsFlare = 0;
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					cameraDir = "";
					opticsDisablePeripherialVision = 0;
				};
			};
		};
	};

	class SMA_eotech552;
	class SMA_eotech552_3XDOWN: SMA_eotech552 {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotech552_3XUP";
	};
	class SMA_eotech552_3XDOWN_wdl: SMA_eotech552_3XDOWN {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotech552_3XUP_wdl";
	};
	class SMA_eotech552_3XDOWN_des: SMA_eotech552_3XDOWN {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotech552_3XUP_des";
	};
	class SMA_eotech552_3XUP: SMA_eotech552_3XDOWN {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotech552_3XDOWN_dummy";
	};
	class SMA_eotech552_3XUP_wdl: SMA_eotech552_3XUP {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotech552_3XDOWN_wdl_dummy";
	};
	class SMA_eotech552_3XUP_des: SMA_eotech552_3XUP {
		nextOpticAuto = 0;
		nextOpticMode = "SMA_eotech552_3XDOWN_des_dummy";
	};
	class SMA_eotech552_3XDOWN_dummy :SMA_eotech552 {
		nextOpticAuto = 1;
		nextOpticMode = "SMA_eotech552_3XDOWN";
		scope = 1;
		displayName = "EOTech 552 + 3x Magnifier";
		model = "\SMA_eotech_552\SMA_eotech_552_3XDown.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera = "eye";
			class OpticsModes {
				class IronSight {
					opticsZoomMin = 0.750000;
					opticsZoomMax = 0.750000;
					opticsZoomInit = 0.750000;
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					memoryPointCamera = "iron_eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
	};
	class SMA_eotech552_3XDOWN_wdl_dummy :SMA_eotech552 {
		nextOpticAuto = 1;
		nextOpticMode = "SMA_eotech552_3XDOWN_wdl";
		scope = 1;
		displayName = "EOTech 552 + 3x Magnifier (Woodland)";
		model = "\SMA_eotech_552\SMA_eotech_552_3XDown_wdl.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera = "eye";
			class OpticsModes {
				class IronSight {
					opticsZoomMin = 0.750000;
					opticsZoomMax = 0.750000;
					opticsZoomInit = 0.750000;
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					memoryPointCamera = "iron_eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
	};
	class SMA_eotech552_3XDOWN_des_dummy :SMA_eotech552 {
		nextOpticAuto = 1;
		nextOpticMode = "SMA_eotech552_3XDOWN_des";
		scope = 1;
		displayName = "EOTech 552 + 3x Magnifier (Desert)";
		model = "\SMA_eotech_552\SMA_eotech_552_3XDown_des.p3d";
		class ItemInfo: InventoryOpticsItem_Base_F {
			mass = 6;
			opticType = 1;
			optics = 1;
			modelOptics = "\A3\Weapons_f_beta\acc\reticle_MRCO_F";
			memoryPointCamera = "eye";
			class OpticsModes {
				class IronSight {
					opticsZoomMin = 0.750000;
					opticsZoomMax = 0.750000;
					opticsZoomInit = 0.750000;
					opticsID = 1;
					useModelOptics = 0;
					opticsPPEffects[] = {""};
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					memoryPointCamera = "iron_eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
				};
			};
		};
	};
};
