		class UserActions {
			class Afterburner {
				priority = 6;
				showWindow = 1;
			};
			class Afterburner_1 {
				priority = 6;
				showWindow = 0;
			};
			class F16_Gui_Open {
				condition = "(player in this) && (((this distance (nearestObject [this, ""FIR_Baseplate""]) < 25) and (damage (nearestObject [this, ""FIR_Baseplate""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Truck_01_ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Truck_01_ammo_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_TentHangar_V1_F""]) < 25) and (damage (nearestObject [this, ""Land_TentHangar_V1_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""Land_Hangar_F""]) < 25) and (damage (nearestObject [this, ""Land_Hangar_F""]) < 1) and (speed this < 1)) or ((this distance (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 25) and (damage (nearestObject [this, ""B_Slingload_01_Ammo_F""]) < 1) and (speed this < 1)))";
				showWindow = 0;
			};
		};