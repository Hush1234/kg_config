/*
	spent case ejection

	a: reyhard
*/
params["_v","","","","_ammo"];

if(!local _v)exitWith{};

if (!(_ammo isKindOf 'ShellBase')) exitWith {};

_v animateDoor ["recoil",1,true];
_v animateDoor ["recoil",0];

waitUntil {(_v animationPhase "recoil_BEGIN")< 0.98};

private _shposmem1 = _v selectionPosition ["ejector_pos", "memory"];
private _shposmem2 = _v selectionPosition ["ejector_dir", "memory"];

private _ejectWorldPos = _v modelToWorldVisual _shposmem1;
private _ejectWorldDir = _v modelToWorldVisual _shposmem2;

private _vector = (_ejectWorldPos vectorFromTo _ejectWorldDir) vectorMultiply (2+random(4));
private _particle = "rhs_casing_122mm" createVehicle _ejectWorldPos;
_particle disableCollisionWith _v;
_particle setpos _ejectWorldPos;

_particle setVelocity _vector;
//_particle setVectorDirAndUp [_vector,_vector];
_particle setMass 220.001;

private _sleepTime = _v getVariable ["rhs_caseDeleteTime",120];
if(_sleepTime != -1)then{
	sleep _sleepTime;
	deleteVehicle _particle;
};
