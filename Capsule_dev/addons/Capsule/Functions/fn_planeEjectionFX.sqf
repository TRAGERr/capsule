private _plane = param [0,objNull];
private _ejectionSeat = param [1,objNull];
if (isNull _plane || isNull _ejectionSeat) exitWith {};

private _configPath = configFile >> "CfgVehicles" >> (typeOf _plane) >> "EjectionSystem";
private _ejectionSoundInt = getText (_configPath >> "EjectionSoundInt");
private _ejectionSoundExt = getText (_configPath >> "EjectionSoundExt");

[_ejectionSeat, _ejectionSoundInt] remoteExec ["say", owner _ejectionSeat];
[
    [_ejectionSeat, _ejectionSoundExt], 
    {
        params ["_seat", "_sound"];
        if (vehicle player != _seat) then 
		{
            _seat say3D [_sound, 1400, 1, false];
        };
    }
] remoteExec ["spawn", [0, -2] select isDedicated];
_ejectionSeat animate ["Rocket_Flash_hide",1];

[
	[_plane, _ejectionSeat],
	{
		params ["_p", "_s"];
		if (isNull _p || isNull _s) exitWith {};

		private _light = "#lightpoint" createVehicleLocal (getPos _s);
		_light setLightBrightness 0.3;
		_light setLightAmbient[0.8, 0.6, 0.2];
		_light setLightColor[1, 0.5, 0.2];
		_light lightAttachObject [_s, [0,0,0]];

		private _smokeTrail = "#particlesource" createVehicleLocal (getPos _s);
		_smokeTrail setParticleClass "FX_EjectorSeatSmoke";
		_smokeTrail attachTo [_s, [0,0,0], "FX_pos"];

		private _smokePlane = "#particlesource" createVehicleLocal (getPos _p);
		_smokePlane setParticleClass "FX_EjectorSeatSmoke";
		_smokePlane attachTo [_p, [0,0,0], "pos_eject"];

		[_light, _smokePlane, _smokeTrail, _s] spawn 
		{
			params ["_l", "_sp", "_st", "_seat"];
			sleep 0.05;
			deleteVehicle [_l, _sp];
			sleep 0.2;
			if (!isNull _seat) then {_seat animate ["Rocket_Flash_hide", 0]};
			sleep 0.3;
			deleteVehicle _st;
		};
	}
] remoteExec ["spawn", [0, -2] select isDedicated];