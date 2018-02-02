class Orbis_Civilian_Config {
	class generalConfig {
		loopTime = 1;
		spawnTime = 5;
		maxTries = 10;
		maxViewDistance = 300;
	};

	class locationsConfig {
		locationTypes[] = {"nameCityCapital", "nameCity", "nameVillage"};
		maxDistances[] = {500, 400, 300};
	};

	class mineConfig {
		forgiveLimit = 3;
		maxMines = 20;
		minMineDistance = 20;
		mineDispersion = 10;
		mineOffset = 5;
		mineActivationRadius = 10;
	};

	class militiaConfig {
		friendlyLimit = 10;
		maxMilitia = 30;
	};
};
