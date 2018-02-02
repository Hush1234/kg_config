private _name_terr = worldName;
if !(_name_terr=="Altis" or _name_terr=="Stratis") exitWith {};

if (isServer) then {
	0 setOvercast 0;
	0 setRain 0;
	0 setRainbow 0;
	setWind [0, 0, true];
	forceWeatherChange;
};

if !(hasInterface) exitWith {};

// ace_goggles_fnc_applyRainEffect = compile preprocessFileLineNumbers "";
// incr = compileFinal preprocessFileLineNumbers "false";

// [direction_storm, duration_storm, effect_on_objects, ambient_sounds_al, breath_vapors, snow_burst_server_side, snow_burst_client_side, al_fog_snow, snow_indoor, local_fog] execvm "AL_snowstorm\al_snow.sqf";
// [80, -1, false, 10, true, false, false, false, false, false] execvm "orbis_winter_setup\AL_snowstorm\al_snow.sqf";

/* start_effect_proces = false;
al_snowstorm_om = true;
al_snow_indoor = false;
in_da_house = false;
al_local_fog_snow = false;
finishRotocol = true;
hunt_alias = player;
ambient_sounds_al = 30;
alias_drop_fog_factor = 0.01; */

if (_name_terr=="Altis" or _name_terr=="Stratis" or _name_terr=="Tanoa" or _name_terr=="Malden") then {
	terrain_type_vanilla = true;
} else {
	terrain_type_vanilla = false;
};

fnc_snow_breath = compile preprocessFileLineNumbers "orbis_winter_setup\AL_snowstorm\snow_breath.sqf";
fnc_spawnSnow = {
	private _mod = vehicle player != player;
	private _particle = "#particlesource" createVehicleLocal (getposasl vehicle player vectorAdd [0, 0, 10]);
	_particle attachto [vehicle player, [0, 0, 10]];
	_particle setDropInterval 0.001 / 5;
	_particle setParticleRandom [15, [25, 25, 2], [0 /*vitx*/, 0 /*vity*/, 0], 0, 0.1, [0, 0, 0, 0.1], 1, 1];
	_particle setParticleCircle [0, [0 /*vitx*/, 0 /*vity*/, 0]];
	_particle setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal.p3d", 16, 12, 8, 0], "", "Billboard", 1, 60, [0, 0, 0], [0 /*vitx*/, 0 /*vity*/, 0], 1, 1.4 /*1.6*/, 1, 0.1, [0.05, 0.05, 0.05 /*0.09*/], [[1, 1, 1, 1]], [0.08], 1, 0, "", "", vehicle player];

	while {true} do {
		waitUntil {(_mod || (vehicle player != player)) && !(_mod && (vehicle player != player))};
		_particle attachto [vehicle player, [0, 0, 0]];
	};
};

//[] execVM "orbis_winter_setup\AL_snowstorm\alias_snowstorm_effect.sqf";
/* [] spawn fnc_spawnSnow;
[] spawn fnc_spawnSnow;
[] spawn fnc_spawnSnow;
[] spawn fnc_spawnSnow; */

[] spawn {
	{
		if !(_x getVariable ["snow_breath_active", false]) then {
			[_x] spawn fnc_snow_breath;
			_x setVariable ["snow_breath_active", true];
		};
	} forEach allUnits;

	sleep 10;
};
