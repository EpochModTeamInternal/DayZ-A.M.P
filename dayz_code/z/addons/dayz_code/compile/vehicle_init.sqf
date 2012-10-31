/***********************************************************
ASSIGN DAMAGE HANDLER TO A UNIT
- Function set_EH
- unit call set_EH;
************************************************************/
private["_unit","_eh1","_eh2","_dir","_location"];
_unit = _this;
_dir = getdir _this;
_location = getPosATL _this;

//Assign event handlers
//_eh1 = _unit addEventHandler ["HandleDamage",{ _this call vehicle_handleDamage }];
_eh1 = _unit addeventhandler ["HandleDamage",{if (local (_this select 0)) then { _this call set_obj_dmg }}];
_eh2 = _unit addeventhandler ["Killed",{if (local (_this select 0)) then { _this call vehicle_handleKilled }}];
 
diag_log format ["set EH %1 for vehicle:%2", _eh1, typeOf _unit ];

if (isServer) then {
	_eh2 = _unit addEventHandler ["GetOut", {[(_this select 0),"all"] call server_updateObject;}];
	_eh3 = _unit addEventHandler ["GetIn", {[(_this select 0),"all"] call server_updateObject;}];
};