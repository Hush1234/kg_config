class CfgAmmo {
	class Sh_155mm_AMOS;
	class Smoke_120mm_AMOS_White;
	class Flare_82mm_AMOS_White;
	class rhs_ammo_of462;
	class rhs_ammo_bk_base;
	class SmokeShellArty;

	class rhs_ammo_m1_he: Sh_155mm_AMOS {
		simulation = "shotBullet";
		cost = 100;
		artilleryLock = 1;
		hit = 165; // 110
		indirectHit = 115; // 75
		indirectHitRange = 31;
		timetolive = 220;
		class CamShakeExplode {
			power = "(105*0.2)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((30 + 105^0.5))";
		};
		class CamShakeHit {
			power = 105 * 10;
			duration = "((round (105^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire {
			power = "(105^0.25)*10";
			duration = "((round (105^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((105^0.5))";
		};
	};
	class rhs_ammo_m314_ilum: Flare_82mm_AMOS_White {
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
		intensity = 10000 * 6;
		timeToLive = 90;
	};
	class rhs_ammo_m60a2_smoke: Smoke_120mm_AMOS_White {
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};

	class orbis_ammo_105mm_smoke_green: Smoke_120mm_AMOS_White {
		submunitionAmmo = "SmokeShellGreen";
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0.1;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	
	
	class rhs_ammo_3of56 : rhs_ammo_of462 {
		ace_rearm_caliber = 122;
		ace_rearm_dummy = "dummy_artillery_shell";
		EffectFly = "ArtilleryTrails";
		hit = 215;
		indirectHit = 145;
		indirectHitRange = 45;
	};
	
	class rhs_ammo_bk13 : rhs_ammo_bk_base {
		ace_rearm_caliber = 122;
		ace_rearm_dummy = "dummy_artillery_shell2";
		EffectFly = "ArtilleryTrails";
	};
	
	class rhs_ammo_d462 : Smoke_120mm_AMOS_White {
		ace_rearm_caliber = 122;
		ace_rearm_dummy = "dummy_artillery_shell";
		EffectFly = "ArtilleryTrails";
		submunitionAmmo = "SmokeShellArtyGreen";
		submunitionConeAngle = 6;
		submunitionConeType[] = {"poissondisc",4};
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
	};
	
	class SmokeShellArtyGreen : SmokeShellArty {
		smokeColor[] = {0.2125,0.6258,0.4891,1};
		timeToLive = 60;
	};
	
	class rhs_ammo_s463 : Smoke_120mm_AMOS_White {
		ace_rearm_caliber = 122;
		ace_rearm_dummy = "dummy_artillery_shell";
		EffectFly = "ArtilleryTrails";
		submunitionAmmo = "rhs_ammo_s463_flare";
		submunitionConeAngle = 0;
		submunitionConeType[] = {"randomcenter",1};
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
		triggerDistance = 640;
		triggerSpeedCoef = 1;
	};
	
	class rhs_ammo_s463_flare : Flare_82mm_AMOS_White {
		coefGravity = 0.5;
		hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		explosive = 0;
		ExplosionEffects = "";
		soundHit[] = {"", 0, 1};
		CraterEffects = "";
		whistleDist = 0;
		triggerTime = 0.1;
		lightColor[] = {0.4,0.5,0.4,0.2};
		brightness = 10;
		intensity = 4000000;
		timeToLive = 140;
	};
};
