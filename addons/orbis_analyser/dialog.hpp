// createDialog "orbisPlayerList";
// _this addAction ["Show Players List", "createDialog 'orbisPlayerList'", nil, 1.1, false, false, "", ""];
class orbisPlayerList {
	idd = -1;
	class controls {
		class Enabled {
			onLoad = "(_this select 0) ctrlSetText (call orbis_analyser_fnc_playerListInit)";
			idc = -1;
			type = 2;
			style = "16"; // multi line
			x = 0.2;
			y = 0.0;
			h = 0.6;
			w = 0.6;
			font = "PuristaMedium";
			sizeEx = 0.04;
			autocomplete = "";
			canModify = true;
			colorSelection[] = {1, 1, 1, 0.3};
			colorText[] = {1, 1, 1, 1};
			colorDisabled[] = {1, 0, 0, 1};
			colorBackground[] = {0, 0, 0, 0.8};
			text = "";
		};
	};
};
