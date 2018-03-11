class CfgMagazines {
	class VehicleMagazine;
	class FIR_240rnd_CMFlare_Chaff_Magazine: VehicleMagazine {};

	class FIR_M61A2_480rnd_M;
	class FIR_M61A2_412rnd_M: FIR_M61A2_480rnd_M {
		scope = 2;
		count = 412;
	};

	class FIR_960rnd_CMFlare_Chaff_Magazine: FIR_240rnd_CMFlare_Chaff_Magazine {
		count = 960;
	};

	class FIR_F16C_Fueltank_P_1rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_AG_HP", "FIR_F16_Fueltank_HP_config", "FIR_Aerobatics_Side", "FIR_Training_Side"};
	};
	class FIR_F16C_center_Fueltank_P_1rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_Under_HP", "FIR_Aerobatics_Center", "FIR_Training_Center"};
	};
	class FIR_SUU25_P_8rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_Combined_HP", "FIR_F16_AG_HP", "B_BOMB_PYLON", "FIR_A10_BOMB_HP", "FIR_SH_AG_HP", "FIR_Aerobatics_Side", "FIR_Aerobatics_Wing"};
	};
	class FIR_SniperXR_1_P_1rnd_M: VehicleMagazine {
		hardpoints[] = {"FIR_F16_Aux_HP", "FIR_Aerobatics_Aux"};
	};
	/* class FIR_Litening_std_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"B_BOMB_PYLON", "FIR_A10_AUX_HP", "FIR_SH_AUX_HP"};
	};
	class FIR_SniperXR_2_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"B_BOMB_PYLON", "FIR_A10_AUX_HP", "FIR_SH_AUX_HP"};
	}; */

	class FIR_AIM120_P_type1_2rnd_M : VehicleMagazine {
		hardpoints[] = {"FIR_F15SE_AA_UNDER_HP", "FIR_F15SE_Midwing_HP", "FIR_SH_Dual_HP_config"};
	};
	class FIR_AIM132_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"FIR_F16_AA_HP", "FIR_F16_Combined_HP", "FIR_BLUFOR_AA_HP", "FIR_BLUFOR_Combined_HP", "FIR_SH_Wingtip_HP"};
	};
	class FIR_AIM9X_P_2rnd_M : VehicleMagazine{
		displayName = "AIM-9X Sidewinder x2";
		hardpoints[] = {"B_BOMB_PYLON", "FIR_A10C_AA_HP", "FIR_BLUFOR_AA_HP", "FIR_BLUFOR_Combined_HP", "FIR_SH_Dual_HP_config"};	
	};
	class FIR_Meteor_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"B_BOMB_PYLON", "FIR_A10C_AA_HP", "FIR_BLUFOR_AA_HP", "FIR_BLUFOR_Combined_HP", "FIR_SH_Dual_HP_config", "FIR_Meteor_HP_config"};
	};

	class FIR_AGM88_P_1rnd_M : VehicleMagazine {
		hardpoints[] = {"FIR_F16_Combined_HP", "FIR_SH_Combined_HP" ,"FIR_BLUFOR_Combined_HP", "FIR_AV8B_HARM_HP", "FIR_EA18G_Combined_HP", "FIR_HARM_HP_config"};
	};

	/* class js_m_fa18_buddypod_x1: VehicleMagazine {
		displayName = "Buddy Pod";
		hardpoints[] = {"FIR_SH_Under_HP"};		
	}; */
	class js_m_fa18_wing_tank_x1: VehicleMagazine {
		hardpoints[] = {"JS_JC_F18_Pylon", "JSJC_Fueltank"};
	};
};
