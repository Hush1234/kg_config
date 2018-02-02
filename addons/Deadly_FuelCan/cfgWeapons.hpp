class cfgWeapons {
	class ACE_ItemCore;	// External class reference
	class CBA_MiscItem_ItemInfo;	// External class reference
	
	class Deadly_item_FuelCan : ACE_ItemCore {
		author = "Deadly";
		scope = public;
		displayName = "Fuel Canister";
		descriptionShort = "Can refuel vehicle when meet an emergency situation.";
		model = "\A3\Structures_F\Items\Vessels\CanisterFuel_F.p3d";
		picture = "\Deadly_FuelCan\UI\Fuel_Canister.paa";
		
		canDrop = 0;
		canLock = 0;
		
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 80;
		};
	};
};