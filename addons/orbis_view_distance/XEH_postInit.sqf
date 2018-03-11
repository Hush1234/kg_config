if (hasInterface) then {
	private _terrain = profileNamespace getVariable ["orbis_view_terrain", 10000];
	private _object = profileNamespace getVariable ["orbis_view_object", 1600];
	private _shadow = profileNamespace getVariable ["orbis_view_shadow", 100];

	setViewDistance _terrain;
	setObjectViewDistance [_object, _shadow];

	[
		"orbis_view_terrain",
		"SLIDER",
		["Terrain View Distance", "Sets terrain view distance"],
		"Orbis View Distance",
		[0, 10000, _terrain, 0],
		nil,
		{
			setViewDistance _this;
			profileNamespace setVariable ["orbis_view_terrain", _this];
		}
	] call CBA_Settings_fnc_init;

	[
		"orbis_view_object",
		"SLIDER",
		["Object View Distance", "Sets object view distance"],
		"Orbis View Distance",
		[0, 10000, _object, 0],
		nil,
		{
			setObjectViewDistance [_this, getObjectViewDistance select 1];
			profileNamespace setVariable ["orbis_view_object", _this];
		}
	] call CBA_Settings_fnc_init;

	[
		"orbis_view_shadow",
		"SLIDER",
		["Shadow View Distance", "Sets shadow view distance"],
		"Orbis View Distance",
		[0, 500, _shadow, 0],
		nil,
		{
			setObjectViewDistance [getObjectViewDistance select 0, _this];
			profileNamespace setVariable ["orbis_view_shadow", _this];
		}
	] call CBA_Settings_fnc_init;
};
