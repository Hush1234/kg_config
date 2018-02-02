class ACE_Medical_Actions {
	class Basic {
		class Bandage {
			treatmentType = "Bandage";
		};
		class Morphine: Bandage {
			treatmentType = "Injection";
			treatmentDisplay = "Morphine";
		};
		class Epinephrine: Bandage {
			treatmentType = "Injection";
			treatmentDisplay = "Epinephrine";
		};
		class BloodIV: Bandage {
			treatmentType = "Injection";
			treatmentDisplay = "IV";
		};
		class BodyBag: Bandage {
			treatmentType = "none";
		};
		class Diagnose: Bandage {
			treatmentType = "none";
		};
		class CPR: Bandage {
			treatmentType = "Others";
			treatmentDisplay = "Performing CPR";
		};
	};

	class Advanced {
		class fieldDressing {
			treatmentType = "Bandage";
			requiredMedic = 0; // 0 = All, 1 = Medic, 2 = Doc
			treatmentTime = "[ACE_player, [16, 8, 6]] call orbis_fnc_treatmentTime";
		};
		class PackingBandage: fieldDressing {
			treatmentType = "Bandage";
			requiredMedic = 1;
		};
		class ElasticBandage: fieldDressing {
			treatmentType = "Bandage";
			requiredMedic = 1;
		};
		class QuikClot: fieldDressing {
			treatmentType = "Bandage";
			requiredMedic = 1;
		};
		class Morphine: fieldDressing {
			treatmentType = "Injection";
			treatmentDisplay = "Morphine";
			treatmentTime = "[ACE_player, [6, 3, 3]] call orbis_fnc_treatmentTime";
		};
		class Tourniquet: fieldDressing {
			treatmentType = "TourniquetOn";
			treatmentTime = "[ACE_player, [3, 3, 3]] call orbis_fnc_treatmentTime";
		};
		class RemoveTourniquet: Tourniquet {
			treatmentType = "TourniquetOff";
		};
		class Adenosine: Morphine {
			treatmentDisplay = "Adenosine";
		};
		class Atropine: Morphine {
			treatmentDisplay = "Atropine";
		};
		class Epinephrine: Morphine {
			treatmentDisplay = "Epinephrine";
		};
		class BloodIV: fieldDressing {
			treatmentType = "Injection";
			treatmentDisplay = "IV";
			requiredMedic = 1;
			treatmentTime = "[ACE_player, [12, 12, 12]] call orbis_fnc_treatmentTime";
		};
		class SurgicalKit: fieldDressing {
			treatmentType = "Others";
			treatmentDisplay = "Using SurgicalKit";
			requiredMedic = 2;
			// treatmentTime = "[ACE_player, [120, 80, 60]] call orbis_fnc_treatmentTime";
		};
		class PersonalAidKit: fieldDressing {
			treatmentType = "Others";
			treatmentDisplay = "Using PAK";
			requiredMedic = 2;
			treatmentTime = "[ACE_player, [120, 80, 40]] call orbis_fnc_treatmentTime";
		};
		class CPR: fieldDressing {
			treatmentType = "Others";
			treatmentDisplay = "Performing CPR";
			treatmentTime = "[ACE_player, [12, 12, 12]] call orbis_fnc_treatmentTime";
		};
		class CheckPulse: fieldDressing {
			treatmentType = "none";
			treatmentTime = "[ACE_player, [6, 3, 3]] call orbis_fnc_treatmentTime";
		};
		class BodyBag: fieldDressing {
			treatmentType = "none";
			treatmentTime = "[ACE_player, [16, 16, 16]] call orbis_fnc_treatmentTime";
		};
	};
};
