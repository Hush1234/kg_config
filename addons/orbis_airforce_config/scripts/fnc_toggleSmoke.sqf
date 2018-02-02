params ["_vehicle", "_smokeMod", "_particleColor"];

private _smokeModOld = _vehicle getVariable ["smokeMod", "off"];
private _particleColorOld = _vehicle getVariable ["particleColor", [0, 0, 0, 0]];
private _objectFollowOld = _vehicle getVariable ["objectFollow", objNull];
private _particleSourceOld = _vehicle getVariable ["smokeSource", objNull];

if (_smokeMod isEqualTo _smokeModOld) exitWith {};
if (_smokeMod isEqualTo "off") exitWith {
	_vehicle setVariable ["smokeMod", "off"];
	_vehicle setVariable ["particleColor", [0, 0, 0, 0]];
	_vehicle setVariable ["objectFollow", objNull];
	_vehicle setVariable ["smokeSource", objNull];
};

deleteVehicle _objectFollowOld;
deleteVehicle _particleSourceOld;

sleep 0.3;

private _objectFollow = "Land_Bucket_F" createVehicleLocal (getPos _vehicle);
_objectFollow attachTo [_vehicle, [0.0, -8.0, 0.0]];
hideObject _objectFollow;
private _particleSource = "#particlesource" createVehicleLocal (getPos _vehicle);
_particleSource attachTo [_objectFollow, [0, 0, 0]];
_particleSource setParticleCircle [0, [0, 0, 0]];
_particleSource setParticleRandom [15, [0.1, 0.1, 0.1], [12.0, 12.0, 12.0], 0.0, 0.0, [0, 0, 0, 0.05], 0, 0];
_particleSource setParticleParams [["\A3\data_f\ParticleEffects\Universal\Universal", 16, 12, 8, 0], "",
/*Type*/ "Billboard",
/*TimmerPer*/ 1,
/*Lifetime*/ 25,
/*Position*/ [0, 0, 0],
/*MoveVelocity*/ [0, 0, 0],
/*Simulation*/ 0, 11.55, 9, 12.0, //rotationVel,weight,volume,rubbing
/*Scale*/ [2, 8, 2],
/*Color*/ [_particleColor],
/*AnimSpeed*/ [0.125],
/*randDirPeriod*/ 1,
/*randDirIntesity*/ 0,
/*onTimerScript*/ "",
/*DestroyScript*/ "",
/*Follow*/ _objectFollow
];
_particleSource setDropInterval 0.004;

_vehicle setVariable ["smokeMod", _smokeMod];
_vehicle setVariable ["particleColor", _particleColor];
_vehicle setVariable ["objectFollow", _objectFollow];
_vehicle setVariable ["smokeSource", _particleSource];
