class CfgPatches {
	class kg_rhs_config {
		name = "KG RHS Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_accessory", "rhsusf_c_weapons"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgMagazines {
	class CA_LauncherMagazine;

	class rhs_mag_maaws_HEAT: CA_LauncherMagazine {
		mass = 50;
	};
	class rhs_mag_maaws_HEDP: CA_LauncherMagazine {
		mass = 40;
	};
	class rhs_mag_maaws_HE: CA_LauncherMagazine {
		mass = 35;
	};
};

class CfgWeapons {
	class Launcher_Base_F;
	class WeaponSlotsInfo;
	class ItemCore;
	class acc_pointer_IR: ItemCore {};

	class rhs_weap_maaws: Launcher_Base_F {
		class WeaponSlotsInfo: WeaponSlotsInfo {
			mass = 100;
		};
	};

	class rhsusf_acc_anpeq15A: acc_pointer_IR {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15A";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15A";
		MRT_switchItemHintText = "No mode to toggle";
	};
	class rhsusf_acc_anpeq15 : acc_pointer_IR {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_light";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_light";
		MRT_switchItemHintText = "Switched to IRLaser";
	};
	class rhsusf_acc_anpeq15_bk : rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_light";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_bk_light";
	};
	class rhsusf_acc_anpeq15_h : rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_light_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_light_h";
	};
	class rhsusf_acc_anpeq15_bk_h : rhsusf_acc_anpeq15_bk {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_light_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_bk_light_h";
	};
	class rhsusf_acc_anpeq15_light : rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15";
		MRT_switchItemHintText = "Switched to Flashlight";
	};
	class rhsusf_acc_anpeq15_bk_light : rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_bk";
	};
	class rhsusf_acc_anpeq15_light_h : rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_h";
	};
	class rhsusf_acc_anpeq15_bk_light_h : rhsusf_acc_anpeq15_bk_light {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_bk_h";
	};
	class rhsusf_acc_anpeq15_wmx : rhsusf_acc_anpeq15 {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_light";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_wmx_light";
	};
	class rhsusf_acc_anpeq15_wmx_light : rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_wmx";
	};
	class rhsusf_acc_anpeq15_wmx_h : rhsusf_acc_anpeq15_wmx {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_light_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_wmx_light_h";
	};
	class rhsusf_acc_anpeq15_wmx_light_h : rhsusf_acc_anpeq15_wmx_light {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_wmx_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_wmx_h";
	};
	class rhsusf_acc_anpeq15_top: rhsusf_acc_anpeq15A {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_top";
	};
	class rhsusf_acc_anpeq15_bk_top: rhsusf_acc_anpeq15_top {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_bk_top";
	};
	class rhsusf_acc_anpeq15_top_h: rhsusf_acc_anpeq15_top {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_top_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_top_h";
	};
	class rhsusf_acc_anpeq15_bk_top_h: rhsusf_acc_anpeq15_bk_top {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15_bk_top_h";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15_bk_top_h";
	};
	class rhsusf_acc_anpeq15side: acc_pointer_IR {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15side";
		MRT_switchItemHintText = "No mode to toggle";
	};
	class rhsusf_acc_anpeq15side_bk: rhsusf_acc_anpeq15side {
		MRT_SwitchItemNextClass = "rhsusf_acc_anpeq15side_bk";
		MRT_SwitchItemPrevClass = "rhsusf_acc_anpeq15side_bk";
	};
	class rhsusf_acc_M952V: rhsusf_acc_anpeq15_light {
		MRT_SwitchItemNextClass = "rhsusf_acc_M952V";
		MRT_SwitchItemPrevClass = "rhsusf_acc_M952V";
		MRT_switchItemHintText = "No mode to toggle";
	};
	class rhsusf_acc_wmx: rhsusf_acc_M952V {
		MRT_SwitchItemNextClass = "rhsusf_acc_wmx";
		MRT_SwitchItemPrevClass = "rhsusf_acc_wmx";
	};
};

class CfgFunctions {
	class RHS {
		class functions {
			class accCombo
			{
				file = "\rhsusf\addons\rhsusf_c_weapons\scripts\rhs_anpeq15_rail.sqf";
				description = "RHS acc_combo replacing dummy";
			};
		};
	};
};

/*
                file = "\rhsusf\addons\rhsusf_c_weapons\scripts\acc_combo.sqf";
                description = "Handling of surefire/ir laser combo";
*/

