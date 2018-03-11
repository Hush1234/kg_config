class cfgWeapons {
	class ACE_ItemCore;	// External class reference
	class CBA_MiscItem_ItemInfo;	// External class reference
	
	class Deadly_item_ConcertinaWire : ACE_ItemCore {
		author = "Deadly";
		scope = public;
		displayName = "Concertina Wire";
		descriptionShort = "A concertina wire is a type of barbed wire formed in large coils that can be expanded to form obstacles, any vehicle making contact with it gets its tires destroyed.";
		model = "\z\ace\addons\concertina_wire\data\ACE_ConcertinaWireCoil.p3d";
		picture = "\deadly_concertina_wire\UI\concertina_wire.paa";
		
		canDrop = 0;
		canLock = 0;
		
		class ItemInfo : CBA_MiscItem_ItemInfo {
			mass = 40;
		};
	};
};