class CfgVehicles {
	class Bag_Base;

	class tfw_ilbe_wd: Bag_Base {
		scope = 0;
	};
	class tfw_ilbe_a_wd: Bag_Base {
		scope = 0;
	};
	class tfw_ilbe_dd_wd: Bag_Base {
		scope = 0;
	};
	class tfw_ilbe_blade_wd: Bag_Base {
		scope = 0;
	};

	class tfw_roka_digi: tfw_ilbe_wd {
		scope = 2;
		displayName = "ROKA RT-1523G (ASIP) Digi";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Digi_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_arctic: tfw_roka_digi{
		displayName = "ROKA RT-1523G (ASIP) Arctic";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Arctic_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_desert: tfw_roka_arctic{
		displayName = "ROKA RT-1523G (ASIP) Desert";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Desert_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_frog: tfw_roka_arctic{
		displayName = "ROKA RT-1523G (ASIP) Frog";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Frog_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_mc: tfw_roka_arctic{
		displayName = "ROKA RT-1523G (ASIP) MC";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_MC_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_spec: tfw_roka_arctic{
		displayName = "ROKA RT-1523G (ASIP) Spec";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Spec_Backpack_Radio_IA.paa"};
	};

	class tfw_roka_a_digi: tfw_ilbe_a_wd {
		scope = 2;
		displayName = "ROKA RT-1523G (ASIP) Digi ANT";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Digi_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_a_arctic: tfw_roka_a_digi{
		displayName = "ROKA RT-1523G (ASIP) Arctic ANT";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Arctic_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_a_desert: tfw_roka_a_arctic{
		displayName = "ROKA RT-1523G (ASIP) Desert ANT";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Desert_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_a_frog: tfw_roka_a_arctic{
		displayName = "ROKA RT-1523G (ASIP) Frog ANT";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Frog_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_a_mc: tfw_roka_a_arctic{
		displayName = "ROKA RT-1523G (ASIP) MC ANT";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_MC_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_a_spec: tfw_roka_a_arctic{
		displayName = "ROKA RT-1523G (ASIP) Spec ANT";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Spec_Backpack_Radio_IA.paa"};
	};

	class tfw_roka_dd_digi: tfw_ilbe_dd_wd {
		scope = 2;
		displayName = "ROKA RT-1523G (ASIP) Digi VHF/ UHF Antenna";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Digi_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_dd_arctic: tfw_roka_dd_digi{
		displayName = "ROKA RT-1523G (ASIP) Arctic VHF/ UHF Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Arctic_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_dd_desert: tfw_roka_dd_arctic{
		displayName = "ROKA RT-1523G (ASIP) Desert VHF/ UHF Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Desert_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_dd_frog: tfw_roka_dd_arctic{
		displayName = "ROKA RT-1523G (ASIP) Frog VHF/ UHF Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Frog_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_dd_mc: tfw_roka_dd_arctic{
		displayName = "ROKA RT-1523G (ASIP) MC VHF/ UHF Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_MC_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_dd_spec: tfw_roka_dd_arctic{
		displayName = "ROKA RT-1523G (ASIP) Spec VHF/ UHF Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Spec_Backpack_Radio_IA.paa"};
	};

	class tfw_roka_blade_digi: tfw_ilbe_blade_wd {
		scope = 2;
		displayName = "ROKA RT-1523G (ASIP) Digi VHF Blade Antenna";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Digi_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_blade_arctic: tfw_roka_blade_digi{
		displayName = "ROKA RT-1523G (ASIP) Arctic VHF Blade Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Arctic_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_blade_desert: tfw_roka_blade_arctic{
		displayName = "ROKA RT-1523G (ASIP) Desert VHF Blade Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Desert_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_blade_frog: tfw_roka_blade_arctic{
		displayName = "ROKA RT-1523G (ASIP) Frog VHF Blade Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Frog_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_blade_mc: tfw_roka_blade_arctic{
		displayName = "ROKA RT-1523G (ASIP) MC VHF Blade Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_MC_Backpack_Radio_IA.paa"};
	};
	class tfw_roka_blade_spec: tfw_roka_blade_arctic{
		displayName = "ROKA RT-1523G (ASIP) Spec VHF Blade Antenna";
		hiddenSelectionsTextures[] = {"orbis_tfw_config\textures\ROKA_D_Spec_Backpack_Radio_IA.paa"};
	};
};
