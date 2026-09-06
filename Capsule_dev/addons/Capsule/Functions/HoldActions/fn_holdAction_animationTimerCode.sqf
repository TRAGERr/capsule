#include "defines.inc"

private _varName = format ["bis_fnc_holdAction_animationIdleTime_%1", _actionID];

if (time > (_target getVariable [_varName, 0]) && {_eval}) then
{
    _target setVariable [_varName, time + 0.065];

    bis_fnc_holdAction_animationIdleFrame = (bis_fnc_holdAction_animationIdleFrame + 1) % 12;

	//play idle animation only when action is not in progress
	if (!bis_fnc_holdAction_running) then
	{
        params["_title","_iconIdle","_hint"];

		//idle animations always have 12 frames
		[_originalTarget,_actionID,_title,_iconIdle,TEXTURES_IDLE,bis_fnc_holdAction_animationIdleFrame,_hint] call bis_fnc_holdAction_showIcon;
	};
};
