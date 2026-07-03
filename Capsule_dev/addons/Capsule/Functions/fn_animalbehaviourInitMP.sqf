params [["_agent",objNull]];
if (isNull _agent) exitWith {};
if (isServer && isDedicated) then
{
	[_agent] call BIS_fnc_animalBehaviour
};