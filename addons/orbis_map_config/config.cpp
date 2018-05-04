class CfgPatches {
	class orbis_map_config {
		name = "Orbis Map Config";
		author = "Orbis2358";
		requiredVersion = 0.1;
		requiredAddons[] = {"zero_buildings"};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
    // class Land_Mil_Guardhouse;
	// class Land_HouseV_1L2;
	class Land_HouseV_3I3;
	// class Land_repair_center;
	class Land_A_Hospital;
	class Land_Mil_House;
	class Land_Mil_Barracks;
	class Land_a_stationhouse;
	class Land_A_Office01;
	// class Land_Barn_W_01;

	/* class Arma3Taviana_Land_Mil_Guardhouse: Land_Mil_Guardhouse {
		#include "eventRmoveSelf.hpp"
	};
	class Arma3Taviana_Land_HouseV_1L2: Land_HouseV_1L2 {
		#include "eventRmoveSelf.hpp"
	}; */
	class Arma3Taviana_Land_HouseV_3I3: Land_HouseV_3I3 {
		#include "eventRmoveSelf.hpp"
	};
	/* class Arma3Taviana_Land_repair_center: Land_repair_center {
		#include "eventRmoveSelf.hpp"
	}; */
	class Arma3Taviana_Land_A_Hospital: Land_A_Hospital {
		#include "eventRmoveSelf.hpp"
	};
	class Arma3Taviana_Land_Mil_House: Land_Mil_House {
		#include "eventRmoveSelf.hpp"
	};
	class Arma3Taviana_Land_Mil_Barracks: Land_Mil_Barracks {
		#include "eventRmoveSelf.hpp"
	};
	class Arma3Taviana_Land_a_stationhouse: Land_a_stationhouse {
		#include "eventRmoveSelf.hpp"
	};
	class Arma3Taviana_Land_A_Office01: Land_A_Office01 {
		#include "eventRmoveSelf.hpp"
	};
	/* class Arma3Taviana_Land_Barn_W_01: Land_Barn_W_01 {
		#include "eventRmoveSelf.hpp"
	}; */
};
