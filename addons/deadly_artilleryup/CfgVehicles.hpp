class CfgVehicles {
	class EventHandlers;
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class Turrets;
		class MainTurret;	
	};
	class StaticCannon: StaticWeapon {};
	class rhs_D30_base: StaticCannon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ACE_Mk6_RscWeaponRangeArtillery";
				gunnerOpticsModel = "\A3\Weapons_F\acc\reticle_Mortar_01_F.p3d";
				magazines[] = {
					"rhs_mag_3of56",
					"rhs_mag_d462",
					"rhs_mag_s463",
					"rhs_mag_3of69m"
				};
			};
		};
		class EventHandlers: EventHandlers {
			class RHS_EventHandlers {
				fired = "_this spawn rhs_fnc_fired_d30";
			};
		};
	};
};
