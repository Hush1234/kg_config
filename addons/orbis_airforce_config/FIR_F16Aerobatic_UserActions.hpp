		class UserActions: UserActions {
			class smoke_off {
				displayName = "Turn off Smoke";
				position = "pos cano";
				priority = 5.9;
				onlyforplayer = 1;
				showWindow = 1;
				hideOnUse = 1;
				radius = 5;
				condition = "(ACE_player in this) && (this getVariable ['smokeMod', 'off'] != 'off')";
				statement = "hint 'Smoke Off'; ['toggleSmoke', [this, 'off', [0, 0, 0, 0]]] call CBA_fnc_globalEvent";
			};
			class smoke_on_white: smoke_off {
				displayName = "Turn on White Smoke";
				showWindow = 0;
				condition = "(ACE_player in this) && (this getVariable ['smokeMod', 'off'] != 'white')";
				statement = "hint 'White Smoke'; ['toggleSmoke', [this, 'white', [1, 1, 1, 0.15]]] call CBA_fnc_globalEvent";
			};
			class smoke_on_red: smoke_on_white {
				displayName = "Turn on Red Smoke";
				condition = "(ACE_player in this) && (this getVariable ['smokeMod', 'off'] != 'red')";
				statement = "hint 'Red Smoke'; ['toggleSmoke', [this, 'red', [0.8, 0.0, 0.0, 0.15]]] call CBA_fnc_globalEvent";
			};
			/* class smoke_on_green: smoke_on_white {
				displayName = "Turn on Green Smoke";
				condition = "(ACE_player in this) && (this getVariable ['smokeMod', 'off'] != 'green')";
				statement = "hint 'Green Smoke'; ['toggleSmoke', [this, 'green', [0.0, 0.8, 0.0, 0.15]]] call CBA_fnc_globalEvent";
			}; */
			class smoke_on_blue: smoke_on_white {
				displayName = "Turn on Blue Smoke";
				condition = "(ACE_player in this) && (this getVariable ['smokeMod', 'off'] != 'blue')";
				statement = "hint 'Blue Smoke'; ['toggleSmoke', [this, 'blue', [0.0, 0.0, 0.8, 0.15]]] call CBA_fnc_globalEvent";
			};
		};