/*
	m119 spent case & recoil handling

	a: reyhard
*/

params["_v"];

// run only on local object
if(!local _v)exitWith{};

sleep 1;

waitUntil {(_v animationPhase "recoil_BEGIN")< 0.37};

private _shposmem1 = _v selectionPosition ["ejector_pos", "memory"];
private _shposmem2 = _v selectionPosition ["ejector_dir", "memory"];

private _ejectWorldPos = _v modelToWorldVisual _shposmem1;
private _ejectWorldDir = _v modelToWorldVisual _shposmem2;

private _vector = [((_ejectWorldDir select 0) - (_ejectWorldPos select 0))*29, ((_ejectWorldDir select 1) - (_ejectWorldPos select 1))*29, 1+random 1];

private _particle = "rhs_casing_105mm_m14b1" createVehicle _ejectWorldPos;
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
