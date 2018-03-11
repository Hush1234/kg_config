class CfgVehicles {
	class EventHandlers;
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class Turrets;
		class MainTurret;	
	};
	class StaticCannon: StaticWeapon {};

	class RHS_M119_base: StaticCannon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				magazines[] = {
					"RHS_mag_m1_he_12",
					"rhs_mag_m314_ilum_4",
					"orbis_mag_m60_green_4"
				};
			};
		};
	};

	class RHS_M252_Base: StaticCannon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
			};
		};
	};

	class rhs_D30_base: StaticCannon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				magazines[] = {
					"rhs_mag_3of56",
					"rhs_mag_bk13",
					"rhs_mag_d462",
					"rhs_mag_s463"
				};
			};
		};
		class EventHandlers: EventHandlers {
		init = "{(_this select 0) removeMagazine _x} forEach ['rhs_mag_3of56','rhs_mag_bk13','rhs_mag_d462','rhs_mag_s463'];";
			class RHS_EventHandlers {
				fired = "_this spawn rhs_fnc_fired_d30";
			};
		};
	};

	class MBT_01_base_F;
	class MBT_01_arty_base_F : MBT_01_base_F {
		class Turrets;
		class MainTurret;	
	};
	
	class rhsusf_m109tank_base : MBT_01_arty_base_F {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
			};
		};
	};
	
	class ace_rearm_defaultCarriedObject;
	class dummy_artillery_shell : ace_rearm_defaultCarriedObject {
		model = "\rhsusf\addons\rhsusf_m252\rhs_81case_single_small";
	};
	class dummy_artillery_shell2 : ace_rearm_defaultCarriedObject {
		model = "\a3\Props_F_Orange\Items\Tools\Crowbar_01_F.p3d";
	};

	/* class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class ACE_Equipment {
				class ace_mk6mortar_rangetalbe {
					statement = "['ACE_RangeTable_82mm'] call ace_mk6mortar_fnc_rangeTableOpen";
				};
				class M119_Rangetable_Open: ace_mk6mortar_rangetalbe {
					displayName = "Open M119 105mm Rangetable";
					condition = "'M119_RangeTable' in (items ACE_player)";
					statement = "['M119_RangeTable'] call ace_mk6mortar_fnc_rangeTableOpen";
				};
			};
		};
	}; */
};
