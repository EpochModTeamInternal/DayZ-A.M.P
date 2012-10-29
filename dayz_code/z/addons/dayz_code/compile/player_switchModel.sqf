/*
Rewritten by TeeTime 25.5.2012
*/
private["_class","_position","_dir","_group","_oldUnit","_newUnit","_currentWpn","_muzzles","_currentAnim"];
_class 			= _this;

_position 		= getPosATL player;
_dir 			= getDir player;
_currentAnim 	= animationState player;

//Secure Player for Transformation
	player setPosATL dayz_spawnPos;

//Get PlayerID
private ["_playerUID"];
	_playerUID = "";
	if (count playableUnits == 0 and isServer) then {
		//In Single Player
		isSinglePlayer = true;
		player sidechat "Single player Mode detected!";
		//_id = [42,"SinglePlayer"] spawn server_onPlayerConnect;
		_playerUID = "42";
	} else {
		_playerUID = getPlayerUID player;
	};

//BackUp Weapons and Mags
private ["_weapons","_magazines","_primweapon","_secweapon"];
	_weapons 	= weapons player;
	_magazines	= magazines player;
	_primweapon	= primaryWeapon player;
	_secweapon	= secondaryWeapon player;

	//Checks
	if(!(_primweapon in _weapons) && _primweapon != "") then {
		_weapons = _weapons + [_primweapon];
	};

	if(!(_secweapon in _weapons) && _secweapon != "") then {
		_weapons = _weapons + [_secweapon];
	};
	
	if(count _magazines == 0) then {
		_magazines = magazines player;
	};

//BackUp Backpack
private ["_newBackpackType","_backpackWpn","_backpackMag"];
	_newBackpackType = (typeOf dayz_myBackpack);
	if(_newBackpackType != "") then {
		_backpackWpn = getWeaponCargo unitBackpack player;
		_backpackMag = getMagazineCargo unitBackpack player;
	};

//Get Muzzle
	_currentWpn = "";
	_muzzles = getArray(configFile >> "cfgWeapons" >> _currentWpn >> "muzzles");
	if (count _muzzles > 1) then {
		_currentWpn = currentMuzzle player;
	};
	
//Debug Message
	diag_log "Attempting to switch model";
	diag_log str(_weapons);
	diag_log str(_magazines);
	diag_log (str(_backpackWpn));
	diag_log (str(_backpackMag));

//BackUp Player Object
	_oldUnit = player;
	
/***********************************/
//DONT USE player AFTER THIS POINT
/***********************************/

//Create New Character
	//[player] joinSilent grpNull;
	_group 		= createGroup west;
	_newUnit 	= _group createUnit [_class,dayz_spawnPos,[],0,"NONE"];

//Clear New Character
	{_newUnit removeMagazine _x;} forEach  magazines _newUnit;
	removeAllWeapons _newUnit;	

//Equip New Charactar
	{
		_newUnit addMagazine _x;
		//sleep 0.05;
	} forEach _magazines;
	
	{
		_newUnit addWeapon _x;
		//sleep 0.05;
	} forEach _weapons;

//Check and Compare it
	if(str(_magazines) != str(magazines _newUnit)) then {
		//Get Differecnce
		{
			_magazines = _magazines - [_x];
		} forEach (magazines _newUnit);
		
		//Add the Missing
		{
			_newUnit addMagazine _x;
			//sleep 0.2;
		} forEach _magazines;
	};
	
	if(str(_weapons) != str(weapons _newUnit)) then {
		//Get Differecnce
		{
			_weapons = _weapons - [_x];
		} forEach (weapons _newUnit);
	
		//Add the Missing
		{
			_newUnit addWeapon _x;
			//sleep 0.2;
		} forEach _weapons;
	};
	
	if(_primweapon !=  (primaryWeapon _newUnit)) then {
		_newUnit addWeapon _primweapon;		
	};

	if(_secweapon != (secondaryWeapon _newUnit) && _secweapon != "") then {
		_newUnit addWeapon _secweapon;		
	};

//Add and Fill BackPack
	if (!isNil "_newBackpackType") then {
		if (_newBackpackType != "") then {
			_newUnit addBackpack _newBackpackType;
			_oldBackpack = dayz_myBackpack;
			dayz_myBackpack = unitBackpack _newUnit;


			//Fill backpack contents
			//Weapons
			_backpackWpnTypes = [];
			_backpackWpnQtys = [];
			if (count _backpackWpn > 0) then {
				_backpackWpnTypes = _backpackWpn select 0;
				_backpackWpnQtys = 	_backpackWpn select 1;
			};
			_countr = 0;
			{
				dayz_myBackpack addWeaponCargoGlobal [_x,(_backpackWpnQtys select _countr)];
				_countr = _countr + 1;
			} forEach _backpackWpnTypes;
			//magazines
			_backpackmagTypes = [];
			_backpackmagQtys = [];
			if (count _backpackmag > 0) then {
				_backpackmagTypes = _backpackMag select 0;
				_backpackmagQtys = 	_backpackMag select 1;
			};
			_countr = 0;
			{
				dayz_myBackpack addmagazineCargoGlobal [_x,(_backpackmagQtys select _countr)];
				_countr = _countr + 1;
			} forEach _backpackmagTypes;
		};
	};
//Debug Message
	diag_log "Swichtable Unit Created. Equipment:";
	diag_log str(weapons _newUnit);
	diag_log str(magazines _newUnit);	
	diag_log str(getWeaponCargo unitBackpack _newUnit);
	diag_log str(getMagazineCargo unitBackpack _newUnit);

//Make New Unit Playable
	_newUnit setPosATL _position;
	_newUnit setDir _dir;
	addSwitchableUnit _newUnit;
	setPlayable _newUnit;
	selectPlayer _newUnit;

//Clear and delete old Unit
	removeAllWeapons _oldUnit;
	{_oldUnit removeMagazine _x;} forEach  magazines _oldUnit;
		
	if (!isNull dayz_originalPlayer) then {
		dayz_originalPlayer = _oldUnit;
		_oldUnit addEventHandler ["HandleDamage",{false}];
		_oldUnit disableAI "ANIM";
		_oldUnit disableAI "MOVE";
	} else {
		deleteVehicle _oldUnit;
	};

//Move player inside
	
	if(_currentWpn != "") then {_newUnit selectWeapon _currentWpn;};
	[objNull, player, rSwitchMove,_currentAnim] call RE;
	//dayz_originalPlayer attachTo [_newUnit];
	player disableConversation true;
	
	player setVariable ["bodyName",dayz_playerName,true];