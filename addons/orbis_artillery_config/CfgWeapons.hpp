class CfgWeapons {
	/* class ACE_RangeTable_82mm {
		artyInfo = "mortar_82mm";
	};
	
	class M119_RangeTable: ACE_RangeTable_82mm {
        displayName = "M119 105mm Rangetable";
        descriptionShort = "Range Table for the M119 105mm Artillery";
		artyInfo = "M119";
	}; */

	class mortar_155mm_AMOS;
	class RHS_weap_M119: mortar_155mm_AMOS {
		magazines[] =
		{
			"RHS_mag_m1_he_12",
			"rhs_mag_m314_ilum_4",
			"orbis_mag_m60_green_4"
		};
	};
};



/*
_weaponName = vehicle ACE_player;

_magazines = getArray (configFile >> "CfgWeapons" >> _weaponName >> "magazines");
_initSpeed = getNumber (configFile >> "CfgMagazines" >> (_magazines select 0) >> "initSpeed");

_multiplier = 0.19;

_initSpeed = _initSpeed * _multiplier;

[_initSpeed, 0] call ace_mk6mortar_fnc_dev_buildTable;
*/

/* close 0.19


medium 0.30


far 0.48


further 0.80


extreme 1.0 */
