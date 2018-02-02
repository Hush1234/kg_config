fn_tfw_ilbe_classnames = compileFinal preprocessFile "orbis_tfw_config\scripts\fnc_classnames.sqf";
fn_tfw_ilbe_alle_items = compileFinal preprocessFile "orbis_tfw_config\scripts\fnc_alle_items.sqf";


orbis_tfw_normal = [
	"tfw_roka_digi", 
	"tfw_roka_arctic", 
	"tfw_roka_desert", 
	"tfw_roka_frog", 
	"tfw_roka_mc", 
	"tfw_roka_spec"
];

orbis_tfw_a = [
	"tfw_roka_a_digi", 
	"tfw_roka_a_arctic", 
	"tfw_roka_a_desert", 
	"tfw_roka_a_frog", 
	"tfw_roka_a_mc", 
	"tfw_roka_a_spec"
];

orbis_tfw_dd = [
	"tfw_roka_dd_digi", 
	"tfw_roka_dd_arctic", 
	"tfw_roka_dd_desert", 
	"tfw_roka_dd_frog", 
	"tfw_roka_dd_mc", 
	"tfw_roka_dd_spec"
];

orbis_tfw_blade = [
	"tfw_roka_blade_digi", 
	"tfw_roka_blade_arctic", 
	"tfw_roka_blade_desert", 
	"tfw_roka_blade_frog", 
	"tfw_roka_blade_mc", 
	"tfw_roka_blade_spec"
];

_action_assemble_antenna = [
	"tfw_ilbe_assemble_antenna",
	"Extend whip antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_antenna.sqf"},
	{backpack player in orbis_tfw_normal}
] call ace_interact_menu_fnc_createAction;
[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_antenna] call ace_interact_menu_fnc_addActionToClass;

_action_disassemble_antenna = [
	"tfw_ilbe_disassemble_antenna",
	"Disassemble whip antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\disassemble_antenna.sqf"},
	{backpack player in orbis_tfw_a}
] call ace_interact_menu_fnc_createAction;
[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_disassemble_antenna] call ace_interact_menu_fnc_addActionToClass;

_action_assemble_dd = [
	"tfw_ilbe_assemble_dd_antenna",
	"Assemble DD antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_dd_ant.sqf"},
	{(backpack player in (orbis_tfw_normal + orbis_tfw_a + orbis_tfw_blade)) && "tfw_dd" in (items player + assignedItems player);}
] call ace_interact_menu_fnc_createAction;
[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_dd] call ace_interact_menu_fnc_addActionToClass;

_action_assemble_blade = [
	"tfw_ilbe_assemble_blade_antenna",
	"Assemble Blade antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_blade_ant.sqf"},
	{(backpack player in (orbis_tfw_normal + orbis_tfw_a + orbis_tfw_dd)) && "tfw_blade" in (items player + assignedItems player);}
] call ace_interact_menu_fnc_createAction;
[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_blade] call ace_interact_menu_fnc_addActionToClass;

_action_assemble_whip = [
	"tfw_ilbe_assemble_whip_antenna",
	"Assemble Whip antenna",
	"y\tfw_radios_acre\addons\ilbe\data\icons\interact_icon.paa",
	{nul = [] execvm "y\tfw_radios_acre\addons\ilbe\scripts\assemble_whip_ant.sqf"},
	{(backpack player in (orbis_tfw_dd + orbis_tfw_blade)) && "tfw_whip" in (items player + assignedItems player);}
] call ace_interact_menu_fnc_createAction;
[typeOf player, 1, ["ACE_SelfActions", "ACE_Equipment"], _action_assemble_whip] call ace_interact_menu_fnc_addActionToClass;
