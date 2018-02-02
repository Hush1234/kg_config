//Hinzufügen von Classnames hier und in fn_Helm und in Init
private ["_param"];
_handover = nil;
_param = _this select 0;

_disassemble_antenna = [
	["tfw_roka_a_digi", "tfw_roka_digi"], 
	["tfw_roka_a_arctic", "tfw_roka_arctic"], 
	["tfw_roka_a_desert", "tfw_roka_desert"], 
	["tfw_roka_a_frog", "tfw_roka_frog"], 
	["tfw_roka_a_mc", "tfw_roka_mc"], 
	["tfw_roka_a_spec", "tfw_roka_spec"]
];

_assemble_antenna = [
	["tfw_roka_digi", "tfw_roka_a_digi"], 
	["tfw_roka_arctic", "tfw_roka_a_arctic"], 
	["tfw_roka_desert", "tfw_roka_a_desert"], 
	["tfw_roka_frog", "tfw_roka_a_frog"], 
	["tfw_roka_mc", "tfw_roka_a_mc"], 
	["tfw_roka_spec", "tfw_roka_a_spec"]
];

_assemble_dd_antenna = [
	["tfw_roka_digi", "tfw_roka_a_digi", "tfw_roka_blade_digi", "tfw_roka_dd_digi"], 
	["tfw_roka_arctic", "tfw_roka_a_arctic", "tfw_roka_blade_arctic", "tfw_roka_dd_arctic"], 
	["tfw_roka_desert", "tfw_roka_a_desert", "tfw_roka_blade_desert", "tfw_roka_dd_desert"], 
	["tfw_roka_frog", "tfw_roka_a_frog", "tfw_roka_blade_frog", "tfw_roka_dd_frog"], 
	["tfw_roka_mc", "tfw_roka_a_mc", "tfw_roka_blade_mc", "tfw_roka_dd_mc"], 
	["tfw_roka_spec", "tfw_roka_a_spec", "tfw_roka_blade_spec", "tfw_roka_dd_spec"]
];

_assemble_blade_antenna = [
	["tfw_roka_digi", "tfw_roka_a_digi", "tfw_roka_dd_digi", "tfw_roka_blade_digi"], 
	["tfw_roka_arctic", "tfw_roka_a_arctic", "tfw_roka_dd_arctic", "tfw_roka_blade_arctic"], 
	["tfw_roka_desert", "tfw_roka_a_desert", "tfw_roka_dd_desert", "tfw_roka_blade_desert"], 
	["tfw_roka_frog", "tfw_roka_a_frog", "tfw_roka_dd_frog", "tfw_roka_blade_frog"], 
	["tfw_roka_mc", "tfw_roka_a_mc", "tfw_roka_dd_mc", "tfw_roka_blade_mc"], 
	["tfw_roka_spec", "tfw_roka_a_spec", "tfw_roka_dd_spec", "tfw_roka_blade_spec"]
];

_assemble_whip_antenna = [
	["tfw_roka_digi", "tfw_roka_dd_digi", "tfw_roka_blade_digi"], 
	["tfw_roka_arctic", "tfw_roka_dd_arctic", "tfw_roka_blade_arctic"], 
	["tfw_roka_desert", "tfw_roka_dd_desert", "tfw_roka_blade_desert"], 
	["tfw_roka_frog", "tfw_roka_dd_frog", "tfw_roka_blade_frog"], 
	["tfw_roka_mc", "tfw_roka_dd_mc", "tfw_roka_blade_mc"], 
	["tfw_roka_spec", "tfw_roka_dd_spec", "tfw_roka_blade_spec"]
];

_backpacks = [
	"tfw_roka_digi", 
	"tfw_roka_arctic", 
	"tfw_roka_desert", 
	"tfw_roka_frog", 
	"tfw_roka_mc", 
	"tfw_roka_spec", 

	"tfw_roka_a_digi", 
	"tfw_roka_a_arctic", 
	"tfw_roka_a_desert", 
	"tfw_roka_a_frog", 
	"tfw_roka_a_mc", 
	"tfw_roka_a_spec", 

	"tfw_roka_dd_digi", 
	"tfw_roka_dd_arctic", 
	"tfw_roka_dd_desert", 
	"tfw_roka_dd_frog", 
	"tfw_roka_dd_mc", 
	"tfw_roka_dd_spec", 

	"tfw_roka_blade_digi", 
	"tfw_roka_blade_arctic", 
	"tfw_roka_blade_desert", 
	"tfw_roka_blade_frog", 
	"tfw_roka_blade_mc", 
	"tfw_roka_blade_spec"
];

if (_param == "disassemble_antenna") then {_handover = _disassemble_antenna;};
if (_param == "assemble_antenna") then {_handover = _assemble_antenna;};
if (_param == "assemble_dd_antenna") then {_handover = _assemble_dd_antenna;};
if (_param == "assemble_blade_antenna") then {_handover = _assemble_blade_antenna;};
if (_param == "assemble_whip_antenna") then {_handover = _assemble_whip_antenna;};
if (_param == "backpacks") then {_handover = _backpacks;};
_handover
