////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.97
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=8
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	destructno = 0,
	destructman = 5,
	destructbuilding = 1
};

//Class dayz_code : config.bin{
class CfgPatches
{
	class dayz_code
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"dayz_equip","dayz_weapons","CAMisc3","CABuildingParts","CABuildingParts_Signs","CAStructuresHouse","CAStructuresLand_Ind_Stack_Big","CAStructures_Misc_Powerlines","CAStructures","CABuildings","CABuildings2","Ind_MalyKomin","CAStructures_A_CraneCon","CAStructures_Mil","CAStructures_Nav","CAStructures_Rail","A_Crane_02","A_TVTower","CAStructures_Railway","CAStructuresHouse","CAStructuresHouse_HouseBT"};
	};
};
class CfgMods
{
	class DayZ
	{
		dir = "DayZ";
		name = "DayZamp";
		picture = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		hidePicture = 0;
		hideName = 0;
		action = "http://www.dayzamp.com";
		version = "1.7.2.6.01";
		hiveVersion = 0.96;
	};
};
class CfgAddons
{
	access = 1;
	class PreloadBanks{};
	class PreloadAddons
	{
		class dayz
		{
			list[] = {"dayz_code","dayz","dayz_equip","dayz_weapons"};
		};
	};
};
class RscPictureGUI
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.38,0.63,0.26,0.75};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	style = "0x30 + 0x100";
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscStructuredText
{
	class Attributes;
};
class RscStructuredTextGUI: RscStructuredText
{
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	class Attributes: Attributes
	{
		align = "center";
		valign = "middle";
	};
};
class CfgMovesAnimalsBase
{
	class ManActions;
	class StandBase;
	class DefaultDie;
	class BlendAnims;
};
class CfgMovesDogBase
{
	class Default
	{
		actions = "";
		access = 3;
		file = "";
		looped = 1;
		speed = 0.5;
		disableWeapons = 1;
		enableOptics = 0;
		disableWeaponsLong = 1;
		showWeaponAim = 0;
		enableMissile = 0;
		enableBinocular = 0;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		onLandBeg = 0;
		onLandEnd = 0;
		onLadder = 0;
		canPullTrigger = 1;
		duty = -0.51;
		predictSpeedCoef = 1;
		visibleSize = 1;
		aimPrecision = 1;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		controlHead = 0;
		headBobMode = 0;
		headBobStrength = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		limitGunMovement = 1;
		variantsPlayer[] = {};
		variantsAI[] = {""};
		equivalentTo = "";
		connectAs = "";
		variantAfter[] = {5,10,20};
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		aiming = "aimingNo";
		leaning = "aimingNo";
		untiltWeapon = "aimingNo";
		aimingBody = "aimingUpDefault";
		legs = "legsNo";
		head = "headDefault";
		leaningFactorBeg = 0;
		leaningFactorEnd = 0;
		leaningFactorZeroPoint = -1;
		leaningCorrectionAngleBeg = 0;
		leaningCorrectionAngleEnd = 0;
		interpolationSpeed = 6;
		interpolationRestart = 0;
		collisionShape = "ca\animals2\data\geom\basicColide.p3d";
		hasCollShapeSafe = 0;
		collisionShapeSafe = "";
		boundingSphere = 1;
		enableDirectControl = 1;
		enableAutoActions = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		weaponIK = 0;
		preload = 0;
		walkcycles = 1;
		forceAim = 0;
		rightHandIKCurve[] = {};
		leftHandIKCurve[] = {};
	};
	class StandBase: Default
	{
		aiming = "aimingDefault";
		disableWeapons = 1;
		leaningFactorBeg = 1;
		leaningFactorEnd = 1;
	};
	class DefaultDie: Default
	{
		aiming = "aimingNo";
		legs = "legsNo";
		head = "headNo";
		disableWeapons = 1;
		interpolationRestart = 1;
		soundOverride = "fallbody";
		soundEdge[] = {0.45};
		soundEnabled = 0;
	};
	class ManActions
	{
		Stop = "";
		StopRelaxed = "";
		TurnL = "";
		TurnR = "";
		TurnLRelaxed = "";
		TurnRRelaxed = "";
		Default = "";
		JumpOff = "";
		ReloadMagazine = "";
		ReloadMGun = "";
		ReloadAT = "";
		ReloadMortar = "";
		ThrowGrenade = "";
		WalkF = "";
		WalkLF = "";
		WalkRF = "";
		WalkL = "";
		WalkR = "";
		WalkLB = "";
		WalkRB = "";
		WalkB = "";
		SlowF = "";
		SlowLF = "";
		SlowRF = "";
		SlowL = "";
		SlowR = "";
		SlowLB = "";
		SlowRB = "";
		SlowB = "";
		FastF = "";
		FastLF = "";
		FastRF = "";
		FastL = "";
		FastR = "";
		FastLB = "";
		FastRB = "";
		FastB = "";
		EvasiveForward = "";
		EvasiveLeft = "";
		EvasiveRight = "";
		EvasiveBack = "";
		StartSwim = "";
		StopSwim = "";
		Down = "";
		Up = "";
		PlayerStand = "";
		PlayerCrouch = "";
		PlayerProne = "";
		Lying = "";
		Stand = "";
		Combat = "";
		Crouch = "";
		CanNotMove = "";
		Civil = "";
		CivilLying = "";
		FireNotPossible = "";
		Die = "";
		WeaponOn = "";
		WeaponOff = "";
		StrokeFist = "";
		StrokeGun = "";
		SitDown = "";
		Salute = "";
		BinocOn = "";
		BinocOff = "";
		PutDown = "";
		PutDownEnd = "";
		Medic = "";
		Treated = "";
		LadderOnDown = "";
		LadderOnUp = "";
		LadderOff = "";
		LadderOffTop = "";
		LadderOffBottom = "";
		GetInLow = "";
		GetInMedium = "";
		GetInHigh = "";
		GetOutLow = "";
		GetOutMedium = "";
		GetOutHigh = "";
		TakeFlag = "";
		HandGunOn = "";
		LookAround = "";
		Eat = "";
		StopEat = "";
		Rest = "";
		StopRest = "";
		GestureBark = " ";
		GestureIdle1 = " ";
		GestureIdle2 = " ";
		GestureSniff = " ";
	};
	class BlendAnims
	{
		aimingDefault[] = {};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
};
class CfgMovesDogDZ: CfgMovesDogBase
{
	primaryActionMaps[] = {"DogActions","NoActions"};
	skeletonName = "DogSkeleton";
	gestures = "CfgGesturesDogDZ";
	class States
	{
		class Dog_Stop: StandBase
		{
			actions = "DogActions";
			duty = -1;
			file = "\CA\animals2\dogs\data\Anim\dogStop";
			speed = 1e+010;
			relSpeedMin = 0.7;
			relSpeedMax = 1.1;
			looped = 1;
			ConnectTo[] = {"Dog_TurnR",0.1,"Dog_StopV2",0.1,"Dog_StopV1",0.1,"Dog_TurnL",0.1,"Dog_Sprint",0.02,"Dog_Run",0.02,"Dog_Walk",0.2};
			InterpolateTo[] = {"Dog_TurnR",0.1,"Dog_Die",0.02,"Dog_TurnL",0.1,"Dog_Sprint",0.02,"Dog_Run",0.02,"Dog_Walk",0.2};
		};
		class Dog_TurnL: Dog_Stop
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateL.rtm";
			speed = 1;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Stop",0.1};
		};
		class Dog_TurnR: Dog_TurnL
		{
			file = "\CA\animals2\Dogs\data\anim\dog_rotateR.rtm";
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Stop",0.1};
		};
		class Dog_StopV1: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogIDLE";
			speed = 2.14;
			variantAfter[] = {5,7,10};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_StopV2: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogBark";
			speed = 1;
			variantAfter[] = {1,1,1};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Attack: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogAttack";
			speed = 1;
			variantAfter[] = {1,1,1};
			looped = 0;
			ConnectTo[] = {"Dog_Stop",0.1};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_SitDown: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit1In";
			speed = 1.43;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_Siting: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit2Idle";
			speed = 1.58;
			variantAfter[] = {1,1,1};
			looped = 1;
			ConnectTo[] = {};
			InterpolateTo[] = {"Dog_Die",0.02};
		};
		class Dog_SitUp: Dog_Stop
		{
			actions = "DogSit";
			file = "\CA\animals2\dogs\data\Anim\dogSit3Out";
			speed = 1.08;
			variantAfter[] = {1,1,1};
			looped = 0;
			relSpeedMin = 0.996672;
			relSpeedMax = 0.996672;
			ConnectTo[] = {"Dog_Stop",0.1,"Dog_Run",0.1,"Dog_Walk",0.1,"Dog_Sprint",0.1};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Run",0.1,"Dog_Walk",0.1,"Dog_Sprint",0.1};
		};
		class Dog_Sprint: Dog_Stop
		{
			actions = "DogSprint";
			file = "\CA\animals2\dogs\data\Anim\dogSprint";
			duty = 0.5;
			speed = 4.5;
			ConnectTo[] = {"Dog_Stop",0.02,"Dog_Run",0.02,"Dog_Walk",0.02};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.02,"Dog_Run",0.02,"Dog_Walk",0.02};
		};
		class Dog_Run: Dog_Stop
		{
			file = "\CA\animals2\dogs\data\Anim\dogRun";
			duty = -0.5;
			speed = 1.8;
			ConnectTo[] = {"Dog_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.02};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.02,"Dog_Sprint",0.02,"Dog_Walk",0.02};
		};
		class Dog_Walk: Dog_Stop
		{
			duty = -0.7;
			file = "\CA\animals2\dogs\data\Anim\dogWalk";
			speed = 1.3;
			variantAfter[] = {3,10,20};
			ConnectTo[] = {"Dog_Stop",0.2,"Dog_Sprint",0.2,"Dog_Run",0.2};
			InterpolateTo[] = {"Dog_Die",0.02,"Dog_Stop",0.2,"Dog_Sprint",0.2,"Dog_Run",0.2};
		};
		class Dog_Die: DefaultDie
		{
			enableDirectControl = 0;
			actions = "NoActions";
			file = "\CA\animals2\dogs\data\Anim\dogDeath";
			speed = 1.2;
			looped = 0;
			variantsPlayer[] = {};
			variantsAI[] = {""};
			variantAfter[] = {0,0,0};
			terminal = 1;
			soundEnabled = 0;
			ConnectTo[] = {};
			InterpolateTo[] = {};
		};
	};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = 0;
			GestureBark[] = {"GestureBark","Gesture"};
			GestureIdle1[] = {"GestureIdle1","Gesture"};
			GestureIdle2[] = {"GestureIdle2","Gesture"};
			GestureSniff[] = {"GestureSniff","Gesture"};
		};
		class DogActions: NoActions
		{
			Stop = "Dog_Stop";
			StopRelaxed = "Dog_Stop";
			TurnL = "Dog_TurnL";
			TurnR = "Dog_TurnR";
			TurnLRelaxed = "Dog_TurnL";
			TurnRRelaxed = "Dog_TurnR";
			Default = "Dog_Stop";
			JumpOff = "Dog_Stop";
			WalkF = "Dog_Walk";
			SlowF = "Dog_Run";
			FastF = "Dog_Sprint";
			EvasiveForward = "Dog_Sprint";
			Down = "Dog_Stop";
			Up = "Dog_Stop";
			PlayerStand = "Dog_Stop";
			PlayerProne = "Dog_Stop";
			PlayerCrouch = "";
			Crouch = "";
			Lying = "Dog_Stop";
			Stand = "Dog_Stop";
			Combat = "Dog_Stop";
			CanNotMove = "Dog_Stop";
			Civil = "Dog_Stop";
			CivilLying = "Dog_Stop";
			FireNotPossible = "Dog_StopV1";
			Die = "Dog_Die";
			turnSpeed = 8;
			limitFast = 5.5;
			useFastMove = 0;
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";
		};
		class DogSprint: DogActions
		{
			Die = "Dog_Die";
			turnSpeed = 4;
			limitFast = 5.5;
			useFastMove = 1;
		};
		class DogSit: NoActions
		{
			Up = "Dog_Stop";
			PlayerStand = "Dog_Stop";
			Stand = "Dog_Stop";
			WalkF = "Dog_Walk";
			SlowF = "Dog_Run";
			FastF = "Dog_Sprint";
			EvasiveForward = "Dog_Sprint";
			PlayerCrouch = "Dog_Stop";
			Crouch = "Dog_Stop";
			Die = "Dog_Die";
			upDegree = "ManPosNoWeapon";
			StartSwim = "Dog_Die";
		};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
	class BlendAnims: BlendAnims
	{
		aimingDefault[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1};
		untiltWeaponDefault[] = {};
		legsDefault[] = {};
		headDefault[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1};
		aimingNo[] = {};
		legsNo[] = {};
		headNo[] = {};
		aimingUpDefault[] = {};
	};
};
class CfgGesturesDogDZ
{
	skeletonName = "DogSkeleton";
	class ManActions{};
	class Actions
	{
		class NoActions: ManActions
		{
			turnSpeed = 0;
			upDegree = 0;
			limitFast = 1;
			useFastMove = 0;
		};
	};
	class Default
	{
		actions = "NoActions";
		file = "";
		looped = 1;
		speed = 0.5;
		relSpeedMin = 1;
		relSpeedMax = 1;
		soundEnabled = 0;
		soundOverride = "";
		soundEdge[] = {0.5,1};
		terminal = 0;
		equivalentTo = "";
		connectAs = "";
		connectFrom[] = {};
		connectTo[] = {};
		interpolateWith[] = {};
		interpolateTo[] = {};
		interpolateFrom[] = {};
		mask = "empty";
		interpolationSpeed = 6;
		interpolationRestart = 0;
		preload = 0;
		disableWeapons = 1;
		enableOptics = 1;
		showWeaponAim = 1;
		enableMissile = 1;
		enableBinocular = 1;
		showItemInHand = 0;
		showItemInRightHand = 0;
		showHandGun = 0;
		canPullTrigger = 1;
		walkcycles = 1;
		headBobMode = 0;
		headBobStrength = 0;
		leftHandIKBeg = 0;
		leftHandIKEnd = 0;
		rightHandIKBeg = 0;
		rightHandIKEnd = 0;
		leftHandIKCurve[] = {1};
		rightHandIKCurve[] = {1};
		forceAim = 0;
	};
	class States
	{
		class GestureBark: Default
		{
			file = "\dayz_anim\dog\dogBarkOnce";
			looped = 0;
			speed = 3;
			mask = "barking";
		};
		class GestureIdle1: Default
		{
			file = "\dayz_anim\dog\dogGestureIdle1";
			looped = 0;
			speed = 0.3;
			mask = "idle";
		};
		class GestureIdle2: Default
		{
			file = "\dayz_anim\dog\dogGestureIdle2";
			looped = 0;
			speed = 0.3;
			mask = "idle";
		};
		class GestureSniff: Default
		{
			file = "\dayz_anim\dog\dogGestureSniff";
			looped = 0;
			speed = 0.3;
			mask = "frontBody";
		};
	};
	class BlendAnims
	{
		barking[] = {"head",1,"Jaw",1,"Neck1",0.5,"Tongue1",1,"Tongue2",1,"Tail1",0.3,"Tail2",0.6,"Tail3",1};
		idle[] = {"head",1,"Jaw",1,"Neck1",0.6,"Tongue1",1,"Tongue2",1,"Tail1",0.3,"Tail2",0.6,"Tail3",1,"Spine",0.1,"Spine1",0.2,"Spine2",0.4};
		frontBody[] = {"spine",0.1,"spine1",0.3,"spine2",0.6,"neck",1,"neck1",1,"head",1,"Jaw",1,"Tongue1",1,"Tongue2",1,"leftArm",0.5,"rightArm",0.5,"leftEar",1,"rightEar",1};
	};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
class RscPicture;
class RscButton;
class CA_IGUI_Title;
class RscText;
class RscControlsGroup;
class RscLineBreak;
class RscIGUIShortcutButton;
class RscGearShortcutButton;
class RscIGUIListNBox;
class RscActiveText;
class RscPictureKeepAspect;
class RscStandardDisplay;
class RscProgress;
class RscProgressNotFreeze;
class RscButtonTextOnly;
class RscDisplayLoading
{
	class Variants
	{
		class LoadingOne
		{
			class controls
			{
				class LoadingPic: RscPictureKeepAspect
				{
					text = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
				};
			};
		};
	};
};
class RscDisplayStart
{
	class controls
	{
		class LoadingPic: RscPictureKeepAspect
		{
			text = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		};
	};
};
class CA_TextLanguage;
class RscXListBox;
class RscDisplayGameOptions
{
	onLoad = "((_this select 0) displayCtrl 140) lbAdd 'Default';((_this select 0) displayCtrl 140) lbAdd 'Debug';((_this select 0) displayCtrl 140) lbAdd 'None';((_this select 0) displayCtrl 140) lbSetCurSel (uiNamespace getVariable ['DZ_displayUI', 0]);";
	onUnload = "call ui_changeDisplay;";
	class controls
	{
		class CA_TextUIDisplay: CA_TextLanguage
		{
			x = 0.159803;
			y = "(0.420549 + 4*0.069854)";
			text = "DayZ UI:";
		};
		class CA_ValueUIDisplay: RscXListBox
		{
			idc = 140;
			x = 0.400534;
			y = "(0.420549 + 4*0.069854)";
			w = 0.3;
			onLBSelChanged = "(uiNamespace setVariable ['DZ_displayUI', (_this select 1)]);";
		};
	};
};
class RscDisplayMain: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback;
		class CA_ARMA2: RscPicture
		{
			text = "z\addons\dayz_code\gui\dayz_logo_ca.paa";
		};
	};
	onLoad = "((_this select 0) displayCtrl 138) ctrlEnable false;";
	class controls
	{
		class CA_Version;
		class DAYZ_Version: CA_Version
		{
			idc = -1;
			text = "DayZ 1.7.2.6";
			y = "(SafeZoneH + SafeZoneY) - (1 - 0.95)";
		};
		class CA_TitleMainMenu;
		class CA_SinglePlayer;
		class CA_MP;
		class CA_Options;
		class CA_PlayerProfile;
		class CA_Expansions;
		class CA_Exit;
	};
};
class RscButtonActionMenu: RscButton
{
	SizeEx = 0.02674;
	colorBackground[] = {0.44,0.7,0.44,1};
	colorBackgroundActive[] = {0.24,0.5,0.24,1};
	colorBackgroundDisabled[] = {1,1,1,0};
	colorFocused[] = {0.2,0.5,0.2,1};
	colorShadow[] = {1,1,1,0};
	borderSize = 0;
	w = "0.095 * safezoneW";
	h = "0.025 * safezoneH";
};
class RscDisplayGenderSelect
{
	idd = 6902;
	enableDisplay = 1;
	class controls
	{
		class RscText_1000: RscText
		{
			idc = 1000;
			x = 0.455592;
			y = 0.200908;
			w = 0.1;
			h = 0.1;
		};
		class RscButton_1600: RscButton
		{
			idc = 1600;
			text = "$STR_UI_GENDER_MALE";
			x = "0.400884 * safezoneW + safezoneX";
			y = "0.593966 * safezoneH + safezoneY";
			w = "0.0881029 * safezoneW";
			h = "0.0469831 * safezoneH";
			onButtonClick = "closeDialog 0;dayz_selectGender = 'Survivor2_DZ';";
		};
		class RscButton_1601: RscButton
		{
			idc = 1601;
			text = "$STR_UI_GENDER_FEMALE";
			x = "0.511013 * safezoneW + safezoneX";
			y = "0.593966 * safezoneH + safezoneY";
			w = "0.0881029 * safezoneW";
			h = "0.0469831 * safezoneH";
			onButtonClick = "closeDialog 0;dayz_selectGender = 'SurvivorW2_DZ';";
		};
		class RscText_1001: RscText
		{
			idc = 1001;
			text = "$STR_UI_GENDER_TITLE";
			x = "0.400884 * safezoneW + safezoneX";
			y = "0.394288 * safezoneH + safezoneY";
			w = "0.198231 * safezoneW";
			h = "0.0352373 * safezoneH";
		};
		class RscStructuredText_1100: RscStructuredText
		{
			idc = 1100;
			text = "$STR_UI_GENDER_DESC";
			x = "0.400884 * safezoneW + safezoneX";
			y = "0.453017 * safezoneH + safezoneY";
			w = "0.198231 * safezoneW";
			h = "0.117458 * safezoneH";
			colorBackground[] = {-1,-1,-1,0};
		};
	};
};
class RscDisplayGear
{
	idd = 106;
	enableDisplay = 1;
	onUnload = "call player_gearSync;";
	class controls
	{
		class CA_Filter_Icon: RscPicture
		{
			idc = 148;
			style = "0x30 + 0x800";
			x = 0.04;
			y = 0.544098;
			w = 0.458;
			h = 0.075;
			text = "\ca\ui\data\igui_gear_filter_1_ca.paa";
		};
		class CA_Filter_Left_Icon: RscPicture
		{
			idc = 1301;
			style = "0x30 + 0x800";
			x = 0.05;
			y = 0.545098;
			w = 0.036;
			h = 0.075;
			text = "\ca\ui\data\arrow_left_ca.paa";
		};
		class CA_Filter_Right_Icon: RscPicture
		{
			idc = 1302;
			style = "0x30 + 0x800";
			x = 0.453;
			y = 0.545098;
			w = 0.036;
			h = 0.075;
			text = "\ca\ui\data\arrow_right_ca.paa";
		};
		class CA_Filter_Arrow_Left: RscButton
		{
			idc = 150;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0.041;
			y = 0.545098;
			w = 0.056;
			h = 0.075;
			text = "";
		};
		class CA_Filter_Arrow_Right: RscButton
		{
			idc = 151;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0.443;
			y = 0.545098;
			w = 0.056;
			h = 0.075;
			text = "";
		};
		class CA_Filter_Icon1: RscButton
		{
			idc = 149;
			colorText[] = {1,1,1,0};
			colorDisabled[] = {1,1,1,0};
			colorBackground[] = {1,1,1,0};
			colorBackgroundDisabled[] = {1,1,1,0};
			colorBackgroundActive[] = {1,1,1,0};
			colorShadow[] = {1,1,1,0};
			colorFocused[] = {1,1,1,0};
			x = 0.099;
			y = 0.545098;
			w = 0.341;
			h = 0.075;
			text = "";
		};
		class Gear_Title: CA_IGUI_Title
		{
			idc = 1001;
			x = 0.047634;
			y = -0.00102941;
			text = "Gear";
		};
		class Unit_Title: RscText
		{
			idc = 101;
			style = 2;
			x = 0.502419;
			y = 0.0492156;
			w = 0.456;
		};
		class Available_items_Text: RscText
		{
			idc = 156;
			x = 0.0433014;
			y = 0.0526966;
			w = 0.389709;
			h = 0.029412;
		};
		class CA_ItemName: Available_items_Text
		{
			idc = 1101;
			x = 0.0416704;
			y = 0.627451;
			text = "Gear of the unit:";
		};
		class CA_Money: RscText
		{
			idc = 1102;
			style = 1;
			show = 0;
			x = -2.50409;
			y = -2.85784;
			w = 0.228;
			text = "Money:";
		};
		class CA_Money_Value: RscText
		{
			idc = 1103;
			x = -2.72794;
			y = -2.85784;
			w = 0.228;
			text = "0";
		};
		class ListboxArrows: RscControlsGroup
		{
			x = 0.04;
			y = 0.0892447;
			w = 0.48;
			h = 0.449;
			idc = 155;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_B_Add: RscGearShortcutButton
				{
					idc = 146;
					x = -2;
					style = 2048;
					onSetFocus = "private [""_dummy""]; _dummy = [_this,""onFocus""] execVM	""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onButtonClick = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					text = "&lt;";
				};
				class Available_items: RscIGUIListNBox
				{
					idc = 105;
					columns[] = {0.075,0.175,0.81,0.67};
					drawSideArrows = 1;
					idcRight = 147;
					idcLeft = 146;
					colorPlayerItem[] = {0.8784,0.8471,0.651,1};
					onKeyDown = "private [""_dummy""]; _dummy = [_this,""onKeyDown"",0,107,0,107] execVM	""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onLBSelChanged = "private [""_dummy""]; _dummy = [_this,""onLBSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onLBListSelChanged = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onKillFocus = "private [""_dummy""]; _dummy = [_this,""onKillFocus""] execVM	""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					x = 0;
					y = 0;
					w = 0.46;
					h = 0.449;
					canDrag = 1;
				};
				class CA_B_Remove: CA_B_Add
				{
					idc = 147;
					x = -2;
					onSetFocus = "private [""_dummy""]; _dummy = [_this,""onFocus""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					onButtonClick = "private [""_dummy""]; _dummy = [_this,""onLBListSelChanged""] execVM ""\ca\ui\scripts\handleGear.sqf""; _dummy;";
					text = ">";
				};
			};
		};
		class CA_CustomDescription: RscStructuredText
		{
			idc = 1106;
			x = 0.0414969;
			y = 0.663641;
			w = 0.458;
			h = 0.152;
			colorText[] = {0.95,0.95,0.95,1};
			class Attributes
			{
				font = "Zeppelin32";
				color = "#F2F2F2";
				align = "left";
				shadow = 1;
			};
		};
		class CA_Item_Picture: RscPicture
		{
			idc = 1104;
			style = "0x30 + 0x800";
			x = 0.330883;
			y = 0.785541;
			w = 0.156863;
			h = 0.104575;
			text = "";
		};
		class G_Interaction: RscControlsGroup
		{
			idc = 6902;
			x = 0.502;
			y = "0.250 * safezoneH";
			w = "0.145 * safezoneW";
			h = 0;
			onMouseMoving = "_this call gear_ui_offMenu;";
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class RscButton_1600: RscButtonActionMenu
				{
					idc = 1600;
					text = "";
					x = 0;
					y = "0 * safezoneH";
				};
				class RscButton_1601: RscButtonActionMenu
				{
					idc = 1601;
					text = "";
					x = 0;
					y = "0.025 * safezoneH";
				};
				class RscButton_1602: RscButtonActionMenu
				{
					idc = 1602;
					text = "";
					x = 0;
					y = "0.05 * safezoneH";
				};
				class RscButton_1603: RscButtonActionMenu
				{
					idc = 1603;
					text = "";
					x = 0;
					y = "0.075 * safezoneH";
				};
				class RscButton_1604: RscButtonActionMenu
				{
					idc = 1604;
					text = "";
					x = 0;
					y = "0.1 * safezoneH";
				};
				class RscButton_1605: RscButtonActionMenu
				{
					idc = 1605;
					text = "";
					x = 0;
					y = "0.125 * safezoneH";
				};
				class RscButton_1606: RscButtonActionMenu
				{
					idc = 1606;
					text = "";
					x = 0;
					y = "0.15 * safezoneH";
				};
				class RscButton_1607: RscButtonActionMenu
				{
					idc = 1607;
					text = "";
					x = 0;
					y = "0.175 * safezoneH";
				};
				class RscButton_1608: RscButtonActionMenu
				{
					idc = 1608;
					text = "";
					x = 0;
					y = "0.2 * safezoneH";
				};
				class RscButton_1609: RscButtonActionMenu
				{
					idc = 1609;
					text = "";
					x = 0;
					y = "0.225 * safezoneH";
				};
			};
		};
		class G_GearItems: RscControlsGroup
		{
			idc = 160;
			x = 0.502;
			y = 0.09;
			w = 0.463;
			h = 0.776;
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class Controls
			{
				class CA_Gear_slot_primary: RscActiveText
				{
					idc = 107;
					x = "0.502 - 0.502";
					y = "0.244 - 0.09";
					w = 0.286;
					h = 0.15;
					style = "0x30 + 0x800";
					onMouseButtonDown = "_this call player_selectSlot;";
					soundDoubleClick[] = {"",0.1,1};
					color[] = {1,1,1,1};
					colorBackground[] = {0.8784,0.8471,0.651,1};
					colorBackgroundSelected[] = {0.8784,0.8471,0.651,1};
					colorFocused[] = {0,0,0,0};
					canDrag = 1;
				};
				class CA_Gear_slot_secondary: CA_Gear_slot_primary
				{
					idc = 108;
					y = "0.398 -0.09";
				};
				class CA_Gear_slot_item1: CA_Gear_slot_primary
				{
					idc = 109;
					x = "0.790 - 0.502";
					y = "0.244 - 0.09";
					w = 0.055;
					h = 0.074;
				};
				class CA_Gear_slot_item2: CA_Gear_slot_item1
				{
					idc = 110;
					x = "0.847 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_item3: CA_Gear_slot_item1
				{
					idc = 111;
					x = "0.904366 - 0.502";
					y = "0.244 - 0.09";
				};
				class CA_Gear_slot_item4: CA_Gear_slot_item1
				{
					idc = 112;
					x = "0.790 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item5: CA_Gear_slot_item1
				{
					idc = 113;
					x = "0.847 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item6: CA_Gear_slot_item1
				{
					idc = 114;
					x = "0.904366 - 0.502";
					y = "0.321 - 0.09";
				};
				class CA_Gear_slot_item7: CA_Gear_slot_item1
				{
					idc = 115;
					x = "0.790 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item8: CA_Gear_slot_item7
				{
					idc = 116;
					x = "0.847 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item9: CA_Gear_slot_item7
				{
					idc = 117;
					x = "0.904366 - 0.502";
					y = "0.398 - 0.09";
				};
				class CA_Gear_slot_item10: CA_Gear_slot_item7
				{
					idc = 118;
					x = "0.790 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_item11: CA_Gear_slot_item7
				{
					idc = 119;
					x = "0.847 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_item12: CA_Gear_slot_item7
				{
					idc = 120;
					x = "0.904366 - 0.502";
					y = "0.474 - 0.09";
				};
				class CA_Gear_slot_handgun: CA_Gear_slot_primary
				{
					idc = 121;
					x = "0.560 - 0.502";
					y = "0.551 - 0.09";
					w = 0.113;
					h = 0.15;
				};
				class CA_Gear_slot_handgun_item1: CA_Gear_slot_item1
				{
					idc = 122;
					x = "0.674 - 0.502";
					y = "0.551 - 0.09";
					w = 0.055;
					h = 0.074;
				};
				class CA_Gear_slot_handgun_item2: CA_Gear_slot_handgun_item1
				{
					idc = 123;
					x = "0.733 - 0.502";
					y = "0.551 - 0.09";
				};
				class CA_Gear_slot_handgun_item3: CA_Gear_slot_handgun_item1
				{
					idc = 124;
					x = "0.790 - 0.502";
				};
				class CA_Gear_slot_handgun_item4: CA_Gear_slot_handgun_item1
				{
					idc = 125;
					x = "0.847 - 0.502";
				};
				class CA_Gear_slot_handgun_item5: CA_Gear_slot_handgun_item1
				{
					idc = 126;
					x = "0.674 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item6: CA_Gear_slot_handgun_item5
				{
					idc = 127;
					x = "0.733 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item7: CA_Gear_slot_handgun_item5
				{
					idc = 128;
					x = "0.790 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_handgun_item8: CA_Gear_slot_handgun_item5
				{
					idc = 129;
					x = "0.847 - 0.502";
					y = "0.628 - 0.09";
				};
				class CA_Gear_slot_special1: CA_Gear_slot_item1
				{
					idc = 130;
					x = "0.502 - 0.502";
					y = "0.09 - 0.09";
					w = 0.113;
					h = 0.15;
				};
				class CA_Gear_slot_special2: CA_Gear_slot_special1
				{
					idc = 131;
					x = "0.847 - 0.502";
					y = "0.09 - 0.09";
					w = 0.113;
					h = 0.15;
				};
				class CA_Gear_slot_inventory1: CA_Gear_slot_special1
				{
					idc = 134;
					x = "0.560 - 0.502";
					y = "0.705 - 0.09";
					w = 0.055;
					h = 0.074;
				};
				class CA_Gear_slot_inventory2: CA_Gear_slot_inventory1
				{
					idc = 135;
					x = "0.617 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory3: CA_Gear_slot_inventory1
				{
					idc = 136;
					x = "0.674 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory4: CA_Gear_slot_inventory1
				{
					idc = 137;
					x = "0.733 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory5: CA_Gear_slot_inventory1
				{
					idc = 138;
					x = "0.790 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory6: CA_Gear_slot_inventory1
				{
					idc = 139;
					x = "0.847 - 0.502";
					y = "0.705 - 0.09";
				};
				class CA_Gear_slot_inventory7: CA_Gear_slot_inventory1
				{
					idc = 140;
					x = "0.560 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory8: CA_Gear_slot_inventory7
				{
					idc = 141;
					x = "0.617 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory9: CA_Gear_slot_inventory7
				{
					idc = 142;
					x = "0.674 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory10: CA_Gear_slot_inventory7
				{
					idc = 143;
					x = "0.733 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory11: CA_Gear_slot_inventory7
				{
					idc = 144;
					x = "0.790 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory12: CA_Gear_slot_inventory7
				{
					idc = 145;
					x = "0.847 - 0.502";
					y = "0.782 - 0.09";
				};
				class CA_Gear_slot_inventory13: CA_Gear_slot_inventory7
				{
					idc = 1122;
					x = 10.1;
					y = 10.1;
				};
			};
		};
		class BagItemsGroup: RscControlsGroup
		{
			x = 0.502;
			y = 0.09;
			w = 0.463;
			h = 0.776;
			idc = 159;
			magW = 0.055;
			magH = 0.074;
			weaponW = 0.226;
			weaponH = 0.15;
			gunW = 0.113;
			gunH = 0.15;
			spacing = 0.002;
			text = "";
			color[] = {1,1,1,1};
			colorBackground[] = {1,1,1,1};
			colorBackgroundSelected[] = {1,1,1,1};
			colorFocused[] = {1,1,1,1};
			soundPush[] = {"",0.1,1};
			soundClick[] = {"",0.1,1};
			soundDoubleClick[] = {"",0.1,1};
			class VScrollbar
			{
				autoScrollSpeed = -1;
				autoScrollDelay = 5;
				autoScrollRewind = 0;
				color[] = {1,1,1,0};
				width = 0.001;
			};
			class HScrollbar
			{
				color[] = {1,1,1,0};
				height = 0.001;
			};
			class ScrollBar
			{
				color[] = {1,1,1,0.6};
				colorActive[] = {1,1,1,1};
				colorDisabled[] = {1,1,1,0.3};
				thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
				arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
				arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
				border = "\ca\ui\data\ui_border_scroll_ca.paa";
			};
			class Controls{};
		};
		class Break_7: RscLineBreak{};
		class ButtonFilters: RscIGUIShortcutButton
		{
			idc = 148;
			shortcuts[] = {"0x00050000 + 3"};
			x = 0.333336;
			y = 0.897067;
			text = "Filter";
		};
		class ButtonRearm: RscIGUIShortcutButton
		{
			idc = 132;
			shortcuts[] = {"0x00050000 + 2"};
			x = 0.554743;
			y = 0.897067;
			text = "Rearm";
		};
		class ButtonOpenBag: RscIGUIShortcutButton
		{
			idc = 157;
			shortcuts[] = {"0x00050000 + 2"};
			x = 0.554743;
			y = 0.897067;
			text = "Open bag";
		};
		class ButtonCloseBag: RscIGUIShortcutButton
		{
			idc = 158;
			shortcuts[] = {"0x00050000 + 2"};
			x = 0.554743;
			y = 0.897067;
			text = "Close bag";
		};
		class ButtonContinue: RscIGUIShortcutButton
		{
			idc = 1;
			shortcuts[] = {"0x00050000 + 0",28,57,156};
			x = 0.77615;
			y = 0.897066;
			default = 1;
		};
		class ButtonClose: RscIGUIShortcutButton
		{
			idc = 2;
			shortcuts[] = {"0x00050000 + 1"};
			x = 0.0392216;
			y = 0.897066;
			text = "Close";
		};
	};
	class Filters
	{
		class All
		{
			name = "All";
			mask = -1;
			image = "\ca\ui\data\igui_gear_filter_1_ca.paa";
		};
		class Primary
		{
			name = "Primary";
			mask = 769;
			image = "\ca\ui\data\igui_gear_filter_2_ca.paa";
		};
		class Secondary
		{
			name = "Secondary";
			mask = 516;
			image = "\ca\ui\data\igui_gear_filter_3_ca.paa";
		};
		class HandGun
		{
			name = "HandGun";
			mask = 18;
			image = "\ca\ui\data\igui_gear_filter_4_ca.paa";
		};
		class Items
		{
			name = "Items";
			mask = 135168;
			image = "\ca\ui\data\igui_gear_filter_5_ca.paa";
		};
	};
	movingEnable = 1;
	emptyGun = "\ca\ui\data\ui_gear_gun_gs.paa";
	emptySec = "\ca\ui\data\ui_gear_sec_gs.paa";
	emptyEq = "\ca\ui\data\ui_gear_eq_gs.paa";
	emptyMag = "\ca\ui\data\ui_gear_mag_gs.paa";
	emptyMag2 = "\ca\ui\data\ui_gear_mag2_gs.paa";
	emptyHGun = "\ca\ui\data\ui_gear_hgun_gs.paa";
	emptyHGunMag = "\ca\ui\data\ui_gear_hgunmag_gs.paa";
	onLoad = "call gear_ui_init;if (isNil('IGUI_GEAR_activeFilter')) then { IGUI_GEAR_activeFilter = 0;}; private ['_dummy']; _dummy = [_this,'initDialog'] call compile preprocessFile	'\ca\ui\scripts\handleGear.sqf'; _dummy = [_this,'onLoad'] execVM	'\ca\ui\scripts\handleGear.sqf'; _dummy;";
	class ControlsBackground
	{
		class Mainback: RscPicture
		{
			idc = 1005;
			x = 0.04;
			y = 0.01;
			w = 1.2549;
			h = 1.6732;
			moving = 1;
			text = "\ca\ui\data\igui_background_gear_ca.paa";
		};
	};
};
class DZ_ItemInteraction
{
	idd = 6901;
	movingEnable = 0;
	class controlsBackground{};
	class objects{};
	class controls{};
};
class RscTitles
{
	class Default
	{
		idd = -1;
		movingEnable = 0;
		duration = 4;
	};
	class playerKillScore
	{
		idd = 6902;
		movingEnable = 0;
		duration = 5;
		name = "playerKillScore";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_kills', _this select 0];";
		class ControlsBackground
		{
			class RscPicture_1201: RscPictureGUI
			{
				idc = 1400;
				text = "\z\addons\dayz_code\gui\stats_kills_human_ca.paa";
				x = "0.044687 * safezoneW + safezoneX";
				y = "0.934779 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc = 1401;
				text = "\z\addons\dayz_code\gui\stats_kills_zombie_ca.paa";
				x = "0.044687 * safezoneW + safezoneX";
				y = "0.876025 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
		};
		class Controls
		{
			class RscText1: RscStructuredTextGUI
			{
				idc = 1410;
				text = "10";
				x = "(0.044687 * safezoneW + safezoneX) - 0.01";
				y = "0.934779 * safezoneH + safezoneY";
				w = 0.08;
				h = 0.08;
			};
			class RscText2: RscStructuredTextGUI
			{
				idc = 1411;
				text = "1000";
				x = "(0.044687 * safezoneW + safezoneX) - 0.01";
				y = "0.876025 * safezoneH + safezoneY";
				w = 0.08;
				h = 0.08;
			};
		};
	};
	class playerStatusWaiting
	{
		idd = 6901;
		movingEnable = 0;
		duration = 100000;
		name = "playerStatusWaiting";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_waiting', _this select 0];";
		class ControlsBackground
		{
			class RscText_1402: RscPictureGUI
			{
				idc = 1402;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = "0.473572 * safezoneW + safezoneX";
				y = "0.418158 * safezoneH + safezoneY";
				w = "0.0634286 * safezoneW";
				h = "0.136829 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscText_1400: RscPictureGUI
			{
				idc = 1400;
				text = "#(argb,8,8,3)color(1,1,1,1)";
				x = "0.473572 * safezoneW + safezoneX";
				y = "0.418158 * safezoneH + safezoneY";
				w = "0.0634286 * safezoneW";
				h = 0;
				colorText[] = {0,0,0,1};
			};
		};
		class Controls
		{
			class RscPicture_1401: RscPictureGUI
			{
				idc = 1401;
				text = "\z\addons\dayz_code\gui\status_waiting_ca.paa";
				x = "0.434999 * safezoneW + safezoneX";
				y = "0.392207 * safezoneH + safezoneY";
				w = "0.141 * safezoneW";
				h = "0.188013 * safezoneH";
				colorText[] = {0.38,0.63,0.26,1};
			};
		};
	};
	class playerStatusGUI
	{
		idd = 6900;
		movingEnable = 0;
		duration = 100000;
		name = "statusBorder";
		onLoad = "uiNamespace setVariable ['DAYZ_GUI_display', _this select 0];";
		class ControlsBackground
		{
			class RscPicture_1201: RscPictureGUI
			{
				idc = 1201;
				text = "\z\addons\dayz_code\gui\status_food_border_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.93 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1200: RscPictureGUI
			{
				idc = 1200;
				text = "\z\addons\dayz_code\gui\status_blood_border_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.86 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1202: RscPictureGUI
			{
				idc = 1202;
				text = "\z\addons\dayz_code\gui\status_thirst_border_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.79 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1208: RscPictureGUI
			{
				idc = 1208;
				text = "\z\addons\dayz_code\gui\status_temp_outside_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.72 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1207: RscPictureGUI
			{
				idc = 1207;
				text = "";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.65 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1203: RscPictureGUI
			{
				idc = 1203;
				text = "\z\addons\dayz_code\gui\status_fracture_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.58 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1204: RscPictureGUI
			{
				idc = 1204;
				text = "\z\addons\dayz_code\gui\status_connection_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.51 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1205: RscPictureGUI
			{
				idc = 1205;
				text = "\z\addons\dayz_code\gui\status_ear_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.30 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1206: RscPictureGUI
			{
				idc = 1206;
				text = "\z\addons\dayz_code\gui\status_eye_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.37 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
		};
		class Controls
		{
			class RscPicture_1301: RscPictureGUI
			{
				idc = 1301;
				text = "\z\addons\dayz_code\gui\status_food_inside_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.93 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1300: RscPictureGUI
			{
				idc = 1300;
				text = "\z\addons\dayz_code\gui\status_blood_inside_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.86 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1302: RscPictureGUI
			{
				idc = 1302;
				text = "\z\addons\dayz_code\gui\status_thirst_inside_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.79 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1306: RscPictureGUI
			{
				idc = 1306;
				text = "\z\addons\dayz_code\gui\status_temp_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.72 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1303: RscPictureGUI
			{
				idc = 1303;
				text = "\z\addons\dayz_code\gui\status_bleeding_ca.paa";
				x = "0.955313 * safezoneW + safezoneX";
				y = "0.86 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
				colorText[] = {1,1,1,0.5};
			};
			class RscPicture_1304: RscPictureGUI
			{
				idc = 1304;
				text = "";
				x = "0.935313 * safezoneW + safezoneX";
				y = "0.3 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
			class RscPicture_1305: RscPictureGUI
			{
				idc = 1305;
				text = "";
				x = "0.935313 * safezoneW + safezoneX";
				y = "0.37 * safezoneH + safezoneY";
				w = 0.06;
				h = 0.08;
			};
		};
	};
};
class CfgVehicles
{
	class Animal;
	class DZAnimal: Animal
	{
		scope = 0;
		side = 1;
		accuracy = 0.25;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		triggerAnim = "";
		picture = "";
		icon = "\Ca\animals2\data\mapicon_animals_ca.paa";
		mapSize = 10;
		weaponSlots = 0;
		fsmFormation = "";
		fsmDanger = "";
		agentTasks[] = {};
		moves = "CfgMovesAnimal";
		memoryPointHeadAxis = "head_axis";
		woman = 0;
		faceType = "Default";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		extCameraPosition[] = {0,0.5,-2.5};
		class EventHandlers{};
		class Wounds
		{
			tex[] = {};
			mat[] = {};
		};
		class VariablesScalar{};
		class VariablesString{};
	};
	class Dog1: DZAnimal
	{
		scope = 2;
		model = "\ca\animals2\Dogs\Pastor\Pastor";
		displayName = "Alsatian";
		moves = "CfgMovesDogDZ";
		gestures = "CfgGesturesDogDZ";
	};
	class Soldier_Crew_PMC;
	class Bandit1_DZ: Soldier_Crew_PMC
	{
		displayName = "$STR_CHAR_2";
		side = 1;
		weapons[] = {"Throw","Put"};
		model = "\dayz\characters\man_bandit";
		portrait = "\Ca\characters_E\data\portraits\ger_soldier_CA";
		magazines[] = {};
		backpack = "";
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_Officer_W;
	class Rocket_DZ: BAF_Soldier_Officer_W
	{
		displayName = "Rocket";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_W;
	class Soldier1_DZ: BAF_Soldier_W
	{
		displayName = "Soldier";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_SniperH_W;
	class Sniper1_DZ: BAF_Soldier_SniperH_W
	{
		displayName = "Sniper";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class BAF_Soldier_L_W;
	class Camo1_DZ: BAF_Soldier_L_W
	{
		displayName = "Survivor";
		side = 1;
		weapons[] = {"Throw","Put"};
		backpack = "";
		magazines[] = {};
		respawnWeapons[] = {"Throw","Put"};
		respawnMagazines[] = {};
		weaponSlots = "1	 + 	4	 + 12*		256	 + 2*	4096	 + 	2	 + 8*	16  + 12*131072";
		canHideBodies = 1;
	};
	class Bag_Base_EP1;
	class DZ_Patrol_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Patrol Pack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_COYOTE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault_Coyote.p3d";
		transportMaxWeapons = 1;
		transportMaxMagazines = 8;
	};
	class DZ_Assault_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Assault Pack (ACU)";
		picture = "\ca\weapons_e\data\icons\backpack_US_ASSAULT_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapSize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us_assault.p3d";
		transportMaxWeapons = 2;
		transportMaxMagazines = 12;
	};
	class DZ_CivilBackpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Czech Backpack";
		picture = "\ca\weapons_e\data\icons\backpack_ACR_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_acr.p3d";
		transportMaxWeapons = 3;
		transportMaxMagazines = 16;
	};
	class DZ_ALICE_Pack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "ALICE Pack";
		picture = "\ca\weapons_e\data\icons\backpack_TK_ALICE_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_tk_alice.p3d";
		transportMaxWeapons = 4;
		transportMaxMagazines = 20;
	};
	class DZ_Backpack_EP1: Bag_Base_EP1
	{
		scope = 2;
		displayName = "Backpack (coyote)";
		picture = "\ca\weapons_e\data\icons\backpack_US_CA.paa";
		icon = "\ca\weapons_e\data\icons\mapIcon_backpack_CA.paa";
		mapsize = 2;
		model = "\ca\weapons_e\AmmoBoxes\backpack_us.p3d";
		transportMaxWeapons = 6;
		transportMaxMagazines = 24;
	};
	class UH1H_base;
	class UH1H_DZ: UH1H_base
	{
		scope = 2;
		side = 2;
		crew = "";
		typicalCargo[] = {};
		hiddenSelections[] = {};
		class TransportMagazines{};
		class TransportWeapons{};
		commanderCanSee = "2+16+32";
		gunnerCanSee = "2+16+32";
		driverCanSee = "2+16+32";
	};
	class House
	{
		class DestructionEffects;
	};
	class UH1Wreck_DZ: House
	{
		model = "\ca\air2\UH1Y\UH1Y_Crashed.p3d";
		icon = "\ca\air2\data\UI\icon_UH1Y_CA.paa";
		mapSize = 15;
		displayName = "Crashed UH-1Y";
		vehicleClass = "Wrecks";
	};
	class HouseDZ: House
	{
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0.0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = "false";
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0.0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				period[] = {0,1};
			};
		};
	};
	class Strategic;
	class NonStrategic;
	class Land_A_FuelStation_Feed: Strategic
	{
		model = "\ca\structures\House\A_FuelStation\A_FuelStation_Feed";
		transportFuel = 0;
		nameSound = "fuelstation";
	};
	class Land_Ind_FuelStation_Feed_Ep1: Strategic
	{
		model = "\ca\structures_pmc\ind\fuelstation\fuelstation_feed_pmc";
		transportFuel = 0;
		nameSound = "fuelstation";
	};
	
	class Land_Ind_MalyKomin: House
	{
		scope = 1;
		armor = 100;
		featureSize = 40;
		model = "\Ca\buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\Buildings2\Ind_CementWorks\Ind_MalyKomin\Ind_MalyKomin_ruins";
				position = "";
				intensity = 1;
				interval = 0.05;
				lifeTime = 1;
			};
		};
		ladders[] = {
			{ "start","end" }};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Rail_Semafor: House
	{
		scope = 1;
		model = "\CA\Structures\Rail\Rail_Misc\rail_Semafor";
		destrType = "DestructTree";
		class MarkerLights
		{
			class GreenStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Rail_Zavora: House
	{
		scope = 1;
		model = "\CA\Structures\Rail\Rail_Misc\rail_Zavora";
		destrType = "DestructTree";
		class MarkerLights
		{
			class WhiteBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_majak: House
	{
		scope = 1;
		model = "\ca\buildings\majak";
		displayName = "Lighthouse";
		animated = 1;
		ladders[] = {
			{ "start","end" }};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\majak_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		armor = 1000;
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				brightness = 0;
				period[] = {0,1};
			};
		};
	};
	class Land_majak2: Land_majak
	{
		model = "\ca\buildings\majak2";
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				brightness = 0;
				period[] = {0,1};
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\majak_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_Vysilac_FM: House
	{
		scope = 1;
		armor = 150;
		destrType = "DestructBuilding";
		ladders[] = {
			{ "start","end" }};
		model = "\ca\buildings\Vysilac_FM";
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Destruction
		{
			animations[] = {
				{ "ca\buildings\rtm\vysilac_fm.rtm",0.5,3 }};
		};
		displayName = "Radio 1";
	};
	class Land_telek1: House
	{
		scope = 1;
		armor = 600;
		destrType = "DestructBuilding";
		model = "\ca\buildings\telek1";
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\telek1_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		displayName = "Telek 1";
		ladders[] = {
			{ "start1","end1" },
			{ "start2","end2" },
			{ "start3","end3" }};
	};
	class Land_komin: House
	{
		ladders[] = {
			{ "start","end" }};
		model = "\ca\buildings\komin";
		armor = 300;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\ca\buildings\ruins\komin_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Stoplight01: House
	{
		scope = 1;
		model = "\ca\buildings\Misc\stoplight01";
		armor = 50;
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
			class YellowLowBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_Stoplight02: Land_Stoplight01
	{
		model = "\ca\buildings\Misc\stoplight02";
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_NavigLight: House
	{
		scope = 1;
		displayName = "";
		model = "\ca\buildings\Misc\NavigLight";
		armor = 50;
		class MarkerLights
		{
			class WhiteStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_runway_edgelight: House
	{
		scope = 1;
		displayName = "";
		model = "\ca\buildings\Misc\runway_edgelight";
		armor = 20;
		class MarkerLights
		{
			class RedStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_VASICore: NonStrategic
	{
		scope = 1;
		animated = 0;
		reversed = 0;
		vehicleClass = "Objects";
		icon = "";
		model = "";
		displayName = "VASI";
		accuracy = 0.2;
		typicalCargo[] = {};
		destrType = "DestructBuilding";
		irTarget = 0;
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 100;
		mapSize = 6.4;
		simulation = "house";
	};
	class Land_HouseB_Tenement: House
	{
		armor = 180;
		model = "\Ca\Structures\House\HouseBT\HouseB_Tenement";
		scope = 1;
		featureSize = 50;
		class HitPoints
		{
			class Hit1
			{
				armor = 0.15;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 0;
				convexComponent = "dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
		};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0.0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = "false";
			};
		};
		class AnimationSources
		{
			class Lights_1
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Lights_2: Lights_1{};
		};
	};
	class Land_Mil_ControlTower: House
	{
		scope = 1;
		armor = 400;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Mil\Mil_ControlTower_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
		class HitPoints
		{
			class Hit1
			{
				armor = 0.25;
				material = -1;
				name = "dam 1";
				visual = "damT1";
				passThrough = 1;
				convexComponent = "dam 1";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit2
			{
				armor = 0.25;
				material = -1;
				name = "dam 2";
				visual = "damT2";
				passThrough = 1;
				convexComponent = "dam 2";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit3
			{
				armor = 0.25;
				material = -1;
				name = "dam 3";
				visual = "damT3";
				passThrough = 1;
				convexComponent = "dam 3";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit4
			{
				armor = 0.25;
				material = -1;
				name = "dam 4";
				visual = "damT4";
				passThrough = 1;
				convexComponent = "dam 4";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit5
			{
				armor = 0.25;
				material = -1;
				name = "dam 5";
				visual = "damT5";
				passThrough = 1;
				convexComponent = "dam 5";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hit6
			{
				armor = 0.25;
				material = -1;
				name = "dam 6";
				visual = "damT6";
				passThrough = 1;
				convexComponent = "dam 6";
				class DestructionEffects
				{
					class Dust
					{
						simulation = "particles";
						type = "HousePartDust";
						position = "";
						intensity = 1;
						interval = 1;
						lifeTime = 0.01;
					};
					class Dust2: Dust
					{
						type = "HousePartDustLong";
					};
					class Walls: Dust
					{
						type = "HousePartWall";
					};
				};
			};
			class Hitglass
			{
				armor = 0.0005;
				material = -1;
				name = "dam glass";
				visual = "damTglass";
				passThrough = 0;
				convexComponent = "dam glass";
			};
			class Hittower
			{
				armor = 0.0005;
				material = -1;
				name = "dam tower";
				visual = "damTtower";
				passThrough = 0;
				convexComponent = "dam tower";
			};
		};
		replaceDamagedHitpoints[] = {"Hit1","Hit2","Hit3","Hit4","Hit5","Hit6"};
		class Damage
		{
			tex[] = {};
			mat[] = {"CA\Structures\Mil\Data\Mil_ControlTower_windows1.rvmat","CA\Structures\Mil\Data\destruct_half_Mil_ControlTower_windows1.rvmat","CA\Structures\Mil\Data\destruct_full_Mil_ControlTower_windows1.rvmat"};
		};
		model = "\CA\Structures\Mil\Mil_ControlTower";
		ladders[] = {
			{ "start1","end1" },
			{ "start2","end2" }};
		class AnimationSources
		{
			class dvere_spodni_R
			{
				animPeriod = 1;
				initPhase = 0;
				source = "user";
			};
			class dvere_spodni_L
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class dvere_vrchni
			{
				animPeriod = 1;
				initPhase = 1;
				source = "user";
			};
			class HitTower
			{
				source = "Hit";
				hitpoint = "HitTower";
				raw = 1;
			};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName = "Open door";
				position = "Dvere_spodni_R_osa";
				radius = 3;
				onlyForPlayer = 0;
				condition = "this animationPhase ""Dvere_spodni_R"" < 0.5";
				statement = "this animate [""Dvere_spodni_R"", 1];this animate [""Dvere_spodni_L"", 1]";
			};
			class CloseDoors1: OpenDoors1
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName = "Close door";
				condition = "this animationPhase ""Dvere_spodni_R"" >= 0.5";
				statement = "this animate [""Dvere_spodni_R"", 0];this animate [""Dvere_spodni_L"", 0]";
			};
			class OpenDoors3
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_open_ca.paa' size='4' />";
				displayName = "Open door";
				position = "Dvere_Vrchni_osa";
				radius = 2;
				onlyForPlayer = 0;
				condition = "this animationPhase ""dvere_vrchni"" < 0.5";
				statement = "this animate [""dvere_vrchni"", 1]";
			};
			class CloseDoors3: OpenDoors3
			{
				displayNameDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='4' />";
				displayName = "Close door";
				condition = "this animationPhase ""dvere_vrchni"" >= 0.5";
				statement = "this animate [""dvere_vrchni"", 0]";
			};
		};
		actionBegin1 = "OpenDoors1";
		actionEnd1 = "OpenDoors1";
		actionBegin2 = "OpenDoors3";
		actionEnd2 = "OpenDoors3";
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		replaceDamaged = "Land_Mil_ControlTower_dam";
	};
	class Land_Mil_ControlTower_EP1: Land_Mil_ControlTower{};
	class Land_NAV_Lighthouse: House
	{
		scope = 1;
		armor = 500;
		featureSize = 15;
		model = "\Ca\Structures\NAV\NAV_Lighthouse";
		ladders[] = {
			{ "start1","end1" }};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Reflectors
		{
			class MainLight
			{
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				position = "";
				direction = "";
				hitpoint = "";
				selection = "";
				size = 0;
				brightness = 0;
				period[] = {0,1};
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"ca\structures\nav\data\nav_lighthouse_multi.rvmat","ca\structures\nav\data\destruct_half_nav_lighthouse_multi.rvmat","ca\structures\nav\data\destruct_full_nav_lighthouse_multi.rvmat","ca\structures\nav\data\nav_lighthouse_windows.rvmat","ca\structures\nav\data\destruct_half_lighthouse_windows.rvmat","ca\structures\nav\data\destruct_full_lighthouse_windows.rvmat"};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_NAV_Lighthouse2: Land_NAV_Lighthouse
	{
		model = "\Ca\Structures\NAV\NAV_Lighthouse2";
		class Reflectors: Reflectors
		{
			class MainLight: MainLight
			{
				period[] = {0,1};
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\Structures\Nav\NAV_Lighthouse_ruins.p3d";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_Crane_02b: House
	{
		scope = 1;
		armor = 110;
		featureSize = 30;
		model = "\ca\buildings2\A_Crane_02\A_Crane_02b";
		destrType = "DestructBuilding";
		ladders[] = {
			{ "start3","end3" },
			{ "start4","end4" },
			{ "start5","end5" },
			{ "start6","end6" }};
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class Destruction
		{
			animations[] = {
				{ "ca\buildings2\A_Crane_02\data\anim\crane.rtm",0.5,3 }};
		};
	};
	class Land_Farm_WTower: House
	{
		scope = 1;
		armor = 100;
		model = "\CA\buildings2\Farm_WTower\Farm_WTower";
		class MarkerLights
		{
			class RedBlinking
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = "\Ca\buildings2\Farm_WTower\Farm_WTower_ruins";
				position = "";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Land_A_TVTower_Mid: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\ca\Structures\A_TVTower\A_TVTower_Mid";
		featureSize = 150;
		class MarkerLights
		{
			class RedStill
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
	class Land_A_TVTower_Top: House
	{
		scope = 1;
		destrType = "DestructNo";
		model = "\ca\Structures\A_TVTower\A_TVTower_Top";
		featureSize = 150;
		class MarkerLights
		{
			class RedLight
			{
				name = "";
				color[] = {0,0,0,0};
				ambient[] = {0,0,0,0};
				brightness = 0;
				blinking = 0;
			};
		};
	};
};
class CfgNonAIVehicles
{
	access = 0;
	class StreetLamp
	{
		scope = 0;
		model = "";
		destrType = "DestructTree";
		simulation = "thing";
	};
	class Land_lampa_sidl: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_sidl";
	};
	class Land_lampa_sidl_2: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_sidl_2";
	};
	class Land_lampa_sidl_3: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_sidl_3";
	};
	class Land_lampa_ind: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_ind";
	};
	class Land_lampa_ind_zebr: StreetLamp
	{
		scope = 1;
		model = "\ca\buildings\Misc\lampa_ind_zebr";
	};
};
class CfgLoot
{
	trash[] = {
		{ "TrashTinCan","TrashJackDaniels","ItemSodaEmpty" },
		{ 1,0.1,0.5 }};
	civilian[] = {
		{ "TrashTinCan","TrashJackDaniels","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta","8Rnd_9x18_Makarov","7Rnd_45ACP_1911","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Pellets","ItemBandage","ItemPainkiller" },
		{ 0.09,0.09,0.09,0.12,0.09,0.05,0.05,0.05,0.05,0.07,0.05,0.05,0.05,0.06,0.06 }};
	food[] = {
		{ "TrashTinCan","TrashJackDaniels","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta","ItemBandage","FoodBioMeat" },
		{ 0.13,0.13,0.13,0.09,0.13,0.09,0.09,0.09,0.09,0.04,0.01 }};
	generic[] = {
		{ "TrashTinCan","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","TrashJackDaniels","FoodCanBakedBeans","FoodCanSardines","FoodCanFrankBeans","FoodCanPasta","ItemWaterbottleUnfilled","ItemWaterbottle","ItemBandage","7Rnd_45ACP_1911","5x_22_LR_17_HMR","10x_303","6Rnd_45ACP","2Rnd_shotgun_74Slug","2Rnd_shotgun_74Pellets","8Rnd_9x18_Makarov","15Rnd_W1866_Slug","BoltSteel","HandRoadFlare","ItemPainkiller","HandChemGreen","HandChemBlue","HandChemRed","ItemHeatPack" },
		{ 0.06,0.06,0.06,0.04,0.04,0.01,0.01,0.01,0.01,0.01,0.01,0.11,0.03,0.01,0.04,0.04,0.05,0.05,0.09,0.02,0.04,0.07,0.02,0.01,0.03,0.03,0.04 }};
	medical[] = {
		{ "ItemBandage","ItemPainkiller","ItemMorphine","ItemEpinephrine","ItemHeatPack" },
		{ 1,0.5,0.5,0.2,0.1 }};
	hospital[] = {
		{ "ItemBandage","ItemPainkiller","ItemMorphine","ItemEpinephrine","ItemBloodbag","ItemAntibiotic" },
		{ 0.43,0.17,0.13,0.09,0.17,0.02 }};
	military[] = {
		{ "TrashTinCan","ItemSodaEmpty","ItemSodaCoke","ItemSodaPepsi","ItemBandage","ItemPainkiller","ItemMorphine","30Rnd_556x45_Stanag","20Rnd_762x51_DMR","17Rnd_9x19_glock17","15Rnd_9x19_M9SD","15Rnd_9x19_M9","30Rnd_762x39_AK47","30Rnd_545x39_AK","5Rnd_762x51_M24","10Rnd_127x99_m107","8Rnd_B_Beneli_74Slug","1Rnd_HE_M203","FlareWhite_M203","FlareGreen_M203","1Rnd_Smoke_M203","200Rnd_556x45_M249","HandGrenade_west","SmokeShell","SmokeShellRed","SmokeShellGreen","8Rnd_B_Beneli_Pellets","30Rnd_556x45_StanagSD","30Rnd_9x19_MP5","30Rnd_9x19_MP5SD","100Rnd_762x51_M240","HandChemGreen","HandChemBlue","HandChemRed","ItemHeatPack" },
		{ 0.18,0.09,0.01,0.01,0.04,0.04,0.01,0.04,0.04,0.05,0.01,0.02,0.04,0.04,0.01,0.01,0.04,0.01,0.01,0.01,0.01,0.01,0.01,0.04,0.02,0.02,0.04,0.01,0.02,0.01,0.01,0.02,0.02,0.02,0.04 }};
	policeman[] = {
		{ "ItemBandage","7Rnd_45ACP_1911","6Rnd_45ACP","15Rnd_W1866_Slug","8Rnd_B_Beneli_74Slug","HandRoadFlare" },
		{ 1,0.8,0.3,0.3,0.5,0.3 }};
	hunter[] = {
		{ "ItemBandage","5x_22_LR_17_HMR","7Rnd_45ACP_1911","10x_303","ItemWaterbottleUnfilled","BoltSteel","ItemHeatPack","TrapBear" },
		{ 1,0.5,0.2,0.5,0.2,1,0.2,0.1 }};
};
class CfgSurvival
{
	class Inventory
	{
		class Default
		{
			magazines[] = {"ItemBandage","ItemPainkiller"};
			weapons[] = {"ItemFlashlight"};
			backpackWeapon = "";
			backpack = "DZ_Patrol_Pack_EP1";
		};
	};
	class Meat
	{
		class Default
		{
			yield = 2;
		};
		class Cow: Default
		{
			yield = 8;
		};
		class Cow01: Cow{};
		class Cow02: Cow{};
		class Cow03: Cow{};
		class Cow04: Cow{};
		class Goat: Default
		{
			yield = 3;
		};
		class Sheep: Default
		{
			yield = 5;
		};
		class WildBoar: Default
		{
			yield = 4;
		};
	};
};
class CfgBuildingLoot
{
	class Default
	{
		zombieChance = 0;
		minRoaming = 0;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_suit1","z_suit2","z_worker1","z_worker2","z_worker3","z_villager1","z_villager2","z_villager3"};
		lootChance = 0;
		lootPos[] = {};
		itemType[] = {};
		itemChance[] = {};
		hangPos[] = {};
		vehPos[] = {};
	};
	class Master
	{
		weapons[] = {"SMAW","Javelin","G36C","Stinger"};
	};
	class Residential: Default
	{
		zombieChance = 0.3;
		maxRoaming = 2;
		zombieClass[] = {"zZombie_Base","z_hunter","z_teacher","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "ItemSodaMdew","magazine" },
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{ "CZ_VestPouch_EP1","object" },
			{ "DZ_CivilBackpack_EP1","object" },
			{ "DZ_ALICE_Pack_EP1","object" },
			{ "Winchester1866","weapon" },
			{ "WeaponHolder_ItemTent","object" },
			{ "","military" },
			{ "","trash" },
			{ "Crossbow","weapon" },
			{ "Binocular","weapon" },
			{ "PartWoodPile","magazine" },
			{ "Skin_Camo1_DZ","magazine" },
			{ "Skin_Sniper1_DZ","magazine" },
			{ "WeaponHolder_MeleeCrowbar","object" },
			{ "MR43","weapon" }};
		itemChance[] = {0.01,0.15,0.05,0.03,0.13,0.05,0.03,0.08,0.06,2,0.06,0.04,0.01,0.03,0.03,0.01,0.01,0.03,0.5,0.01,0.06,0.06,0.01,0.01,0.08,0.03};
	};
	class Office: Residential
	{
		maxRoaming = 3;
		zombieClass[] = {"z_suit1","z_suit2"};
	};
	class Industrial: Default
	{
		zombieChance = 0.4;
		zombieClass[] = {"z_worker1","z_worker2","z_worker3"};
		maxRoaming = 2;
		lootChance = 0.3;
		lootPos[] = {};
		itemType[] = {
			{ "","generic" },
			{ "","trash" },
			{ "","military" },
			{ "WeaponHolder_PartGeneric","object" },
			{ "WeaponHolder_PartWheel","object" },
			{ "WeaponHolder_PartFueltank","object" },
			{ "WeaponHolder_PartEngine","object" },
			{ "WeaponHolder_PartGlass","object" },
			{ "WeaponHolder_PartVRotor","object" },
			{ "WeaponHolder_ItemJerrycan","object" },
			{ "WeaponHolder_ItemHatchet","object" },
			{ "ItemKnife","military" },
			{ "ItemToolbox","weapon" },
			{ "ItemWire","magazine" },
			{ "ItemTankTrap","magazine" }};
		itemChance[] = {0.18,0.29,0.04,0.04,0.05,0.02,0.01,0.04,0.01,0.04,0.11,0.07,0.02,0.06,0.04};
	};
	class Farm: Default
	{
		zombieChance = 0.3;
		maxRoaming = 3;
		zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "WeaponHolder_ItemJerrycan","object" },
			{ "","generic" },
			{ "huntingrifle","weapon" },
			{ "LeeEnfield","weapon" },
			{ "Winchester1866","weapon" },
			{ "","trash" },
			{ "Crossbow","weapon" },
			{ "PartWoodPile","magazine" },
			{ "WeaponHolder_ItemHatchet","object" },
			{ "MR43","weapon" },
			{ "TrapBear","magazine" }};
		itemChance[] = {0.06,0.28,0.01,0.04,0.03,0.22,0.03,0.11,0.17,0.06,0.01};
	};
	class Supermarket: Default
	{
		lootChance = 0.6;
		minRoaming = 2;
		maxRoaming = 6;
		zombieChance = 0.3;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{ "CZ_VestPouch_EP1","object" },
			{ "DZ_CivilBackpack_EP1","object" },
			{ "DZ_ALICE_Pack_EP1","object" },
			{ "Winchester1866","weapon" },
			{ "WeaponHolder_ItemTent","object" },
			{ "","food" },
			{ "","trash" },
			{ "Crossbow","weapon" },
			{ "Binocular","weapon" },
			{ "PartWoodPile","magazine" },
			{ "MR43","weapon" }};
		itemChance[] = {0.15,0.01,0.05,0.02,0.02,0.05,0.02,0.05,0.05,0.01,0.01,0.01,0.02,0.03,0.01,0.01,0.3,0.15,0.01,0.05,0.02,0.01};
	};

	class DynamicDebris: Default
	{
		lootChance = 0.4;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "","food" },
			{ "WeaponHolder_PartGeneric","object" },
			{ "WeaponHolder_PartWheel","object" },
			{ "WeaponHolder_PartFueltank","object" },
			{ "WeaponHolder_PartEngine","object" },
			{ "WeaponHolder_PartGlass","object" },
			{ "WeaponHolder_PartVRotor","object" },
			{ "WeaponHolder_ItemJerrycan","object" }};
			itemChance[] = {0.15,0.01,0.05,0.02,0.02,0.05,0.02,0.05,0.15,0.05,0.06,0.05,0.03,0.01,0.07,0.01,0.03};
	};
	class CargoContainer: Default
	{
		lootChance = 0.6;
		minRoaming = 0;
		maxRoaming = 2;
		zombieChance = 0;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{ "CZ_VestPouch_EP1","object" },
			{ "DZ_CivilBackpack_EP1","object" },
			{ "DZ_ALICE_Pack_EP1","object" },
			{ "Winchester1866","weapon" },
			{ "WeaponHolder_ItemTent","object" },
			{ "","food" },
			{ "","trash" },
			{ "Crossbow","weapon" },
			{ "Binocular","weapon" },
			{ "PartWoodPile","magazine" },
			{ "MR43","weapon" },
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine" }};
			itemChance[] = {0.15,0.01,0.05,0.02,0.02,0.05,0.02,0.05,0.05,0.01,0.01,0.01,0.02,0.03,0.01,0.01,0.3,0.15,0.01,0.05,0.02,0.01,0.02,0.01};
	};
	class HeliCrash: Default
	{
		zombieChance = 0;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "FN_FAL","weapon" },
			{ "bizon_silenced","weapon" },
			{ "M14_EP1","weapon" },
			{ "FN_FAL_ANPVS4","weapon" },
			{ "M107_DZ","weapon" },
			{ "BAF_AS50_scoped","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M249_DZ","weapon" },
			{ "BAF_L85A2_RIS_CWS","weapon" },
			{ "DMR","weapon" },
			{ "","military" },
			{ "","medical" },
			{ "MedBox0","object" },
			{ "NVGoggles","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "Skin_Camo1_DZ","magazine" },
			{ "Skin_Sniper1_DZ","magazine" },
			{ "Skin_Rocket_DZ","magazine" },
			{ "Skin_Soldier1_DZ","magazine" }};
			itemChance[] = {0.02,0.05,0.05,0.02,0.005,0.005,0.01,0.05,0.01,0.1,1,0.5,0.1,0.005,0.1,0.1,0.08,0.05,0.01,0.05};
};
	class SupplyDrop: Default
	{
		zombieChance = 0;
		maxRoaming = 2;
		zombieClass[] = {"z_soldier_pilot"};
		lootChance = 0.5;
		lootPos[] = {};
		itemType[] = {
			{ "ItemWatch","generic" },
			{ "ItemCompass","generic" },
			{ "ItemMap","weapon" },
			{ "Makarov","weapon" },
			{ "Colt1911","weapon" },
			{ "ItemFlashlight","generic" },
			{ "ItemKnife","generic" },
			{ "ItemMatchbox","generic" },
			{ "","generic" },
			{ "LeeEnfield","weapon" },
			{ "revolver_EP1","weapon" },
			{ "CZ_VestPouch_EP1","object" },
			{ "DZ_CivilBackpack_EP1","object" },
			{ "DZ_ALICE_Pack_EP1","object" },
			{ "Winchester1866","weapon" },
			{ "WeaponHolder_ItemTent","object" },
			{ "","food" },
			{ "","trash" },
			{ "Crossbow","weapon" },
			{ "Binocular","weapon" },
			{ "PartWoodPile","magazine" },
			{ "MR43","weapon" },
			{ "FN_FAL","weapon" },
			{ "bizon_silenced","weapon" },
			{ "M14_EP1","weapon" },
			{ "FN_FAL_ANPVS4","weapon" },
			{ "M107_DZ","weapon" },
			{ "BAF_AS50_scoped","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M249_DZ","weapon" },
			{ "BAF_L85A2_RIS_CWS","weapon" },
			{ "DMR","weapon" },
			{ "","military" },
			{ "","medical" },
			{ "MedBox0","object" },
			{ "NVGoggles","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "Skin_Camo1_DZ","magazine" },
			{ "Skin_Sniper1_DZ","magazine" }};
			itemChance[] = {0.15,0.01,0.05,0.02,0.02,0.05,0.02,0.05,0.05,0.01,0.01,0.01,0.02,0.03,0.01,0.01,0.3,0.15,0.01,0.05,0.02,0.01,0.02,0.05,0.05,0.02,0.005,0.005,0.01,0.05,0.01,0.1,1,0.5,0.1,0.005,0.1,0.1,0.08,0.05};
	};
	class Hospital: Default
	{
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
		lootChance = 1;
		lootPos[] = {};
		itemType[] = {
			{ "","trash" },
			{ "","hospital" },
			{ "MedBox0","object" }};
		itemChance[] = {0.2,0.5,0.5};
	};
	class Military: Default
	{
		zombieChance = 0.3;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M9","weapon" },
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M9SD","weapon" },
			{ "AK_47_M","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "M1014","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "MP5A5","weapon" },
			{ "MP5SD","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "DZ_Assault_Pack_EP1","object" },
			{ "DZ_Patrol_Pack_EP1","object" },
			{ "DZ_Backpack_EP1","object" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "ItemEtool","weapon" },
			{ "ItemSandbag","magazine" }};
		itemChance[] = {0.05,0.05,0.01,0.02,0.2,0.15,0.01,0.08,0.05,0.05,0.01,0.1,0.01,0.02,0.01,0.05,0.08,0.1,0.04,0.02,0.01,0.06,0.1,0.1,0.01,0.05,0.06,0.04,0.02,0.1,1.0,2.5,0.05,0.02};
	};
	class MilitarySpecial: Default
	{
		zombieChance = 0.4;
		minRoaming = 2;
		maxRoaming = 6;
		zombieClass[] = {"z_soldier_heavy"};
		lootChance = 0.4;
		lootPos[] = {};
		itemType[] = {
			{ "M16A2","weapon" },
			{ "M16A2GL","weapon" },
			{ "M249_DZ","weapon" },
			{ "M9SD","weapon" },
			{ "M136","weapon" },
			{ "AK_47_M","weapon" },
			{ "AK_74","weapon" },
			{ "M4A1_Aim","weapon" },
			{ "AKS_74_kobra","weapon" },
			{ "AKS_74_U","weapon" },
			{ "AK_47_M","weapon" },
			{ "M24","weapon" },
			{ "SVD_CAMO","weapon" },
			{ "M1014","weapon" },
			{ "M107_DZ","weapon" },
			{ "DMR","weapon" },
			{ "M4A1","weapon" },
			{ "M14_EP1","weapon" },
			{ "UZI_EP1","weapon" },
			{ "Remington870_lamp","weapon" },
			{ "glock17_EP1","weapon" },
			{ "M240_DZ","weapon" },
			{ "M4A1_AIM_SD_camo","weapon" },
			{ "M16A4_ACG","weapon" },
			{ "M4A1_HWS_GL_camo","weapon" },
			{ "Mk_48_DZ","weapon" },
			{ "M4A3_CCO_EP1","weapon" },
			{ "AmmoBoxSmall_556","object" },
			{ "AmmoBoxSmall_762","object" },
			{ "NVGoggles","weapon" },
			{ "Binocular","weapon" },
			{ "ItemFlashlightRed","military" },
			{ "ItemKnife","military" },
			{ "ItemGPS","weapon" },
			{ "ItemMap","military" },
			{ "Binocular_Vector","military" },
			{ "DZ_Assault_Pack_EP1","object" },
			{ "DZ_Patrol_Pack_EP1","object" },
			{ "DZ_Backpack_EP1","object" },
			{ "","medical" },
			{ "","generic" },
			{ "","military" },
			{ "PipeBomb","magazine" },
			{ "Skin_Soldier1_DZ","magazine" }};
		itemChance[] = {0.1,0.05,0.01,0.02,0.01,0.2,0.1,0.02,0.1,0.1,0.1,0.01,0.01,0.2,0.01,0.02,0.1,0.03,0.2,0.1,0.2,0.01,0.04,0.05,0.02,0.01,0.08,0.04,0.02,0.01,0.1,0.05,0.15,0.01,0.03,0.01,0.02,0.03,0.02,0.3,1.0,5.0,0.01,0.05};
	};
	class Church: Residential
	{
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_priest","z_priest","z_priest"};
	};
	class Land_HouseV_1I4: Residential
	{
		lootPos[] = {
			{ -0.400146,-3.87695,-2.76879 },
			{ -3.67749,-2.52002,-2.76551 },
			{ -0.472168,3.19702,-2.72021 }};
	};
	class Land_kulna: Residential
	{
		lootPos[] = {
			{ 0.504395,0.218262,-1.11643 },
			{ -0.496582,1.93262,-1.12826 }};
	};
	class Land_Ind_Workshop01_01: Industrial
	{
		lootPos[] = {
			{ 0.595215,-2.43115,-1.29412 },
			{ 1.24365,0.463867,-1.295 },
			{ -0.663574,-0.50293,-1.29837 }};
	};
	class Land_Ind_Garage01: Industrial
	{
		lootPos[] = {
			{ -0.580078,-1.49707,-1.23483 },
			{ -0.834473,2.75781,-1.22563 },
			{ 2.47754,-1.12891,-1.23714 },
			{ 1.31934,1.63086,-1.23228 }};
	};
	class Land_Ind_Workshop01_02: Industrial
	{
		lootPos[] = {
			{ 1.1543,-0.552246,-1.42943 },
			{ -1.18665,-0.178223,-1.42868 },
			{ -0.661621,1.104,-1.42682 }};
	};
	class Land_Ind_Workshop01_04: Industrial
	{
		lootPos[] = {
			{ -1.37415,4.18896,-1.53123 },
			{ 0.695435,4.24561,-1.52934 },
			{ -1.06677,2.69531,-1.53062 },
			{ 0.79248,-4.60742,-1.49341 },
			{ -1.84424,-6.1709,-1.44427 },
			{ -1.05566,-4.08398,-1.51927 },
			{ 1.43774,-6.59424,-1.41742 }};
		hangPos[] = {
			{ -0.541748,4.01221,-2.03068 }};
	};
	class Land_Ind_Workshop01_L: Industrial
	{
		lootPos[] = {
			{ -3.26172,4.75439,-1.30246 },
			{ 0.175781,3.91748,-1.30766 },
			{ -2.37891,2.35303,-1.30405 },
			{ 4.10547,-4.10791,-1.31345 },
			{ 0.727539,-2.61621,-1.31418 },
			{ 2.54688,-2.17725,-1.31482 },
			{ 1.52344,-3.79443,-1.31332 }};
	};
	class Land_Hangar_2: Industrial
	{
		lootPos[] = {
			{ 10.1245,-6.4873,-2.56317 },
			{ 11.9387,7.91113,-2.56317 },
			{ 1.79517,7.12695,-2.56317 },
			{ -11.8948,10.5449,-2.56317 },
			{ -8.97021,-4.34766,-2.56317 },
			{ -0.562744,-7.59375,-2.56317 },
			{ 5.98804,-2.6123,-2.56317 }};
	};
	class Land_hut06: Residential
	{
		lootPos[] = {
			{ 0.328125,2.26953,-1.57786 },
			{ -0.552368,-0.0620117,-1.53837 }};
	};
	class Land_stodola_old_open: Farm
	{
		lootPos[] = {
			{ -3.06836,8.63184,-5.08054 },
			{ 2.52588,10.5261,-5.08051 },
			{ 4.76758,5.00854,-0.9935 },
			{ -2.78467,10.2368,-0.9935 },
			{ 4.62598,10.4983,-0.993469 },
			{ 2.09082,10.8425,2.96448 },
			{ -0.440918,10.3091,2.96445 },
			{ -2.58838,-5.91821,-5.08054 },
			{ 4.11084,-10.9302,-5.08054 },
			{ -2.62842,-6.55518,-1.01584 },
			{ 2.50537,-10.741,2.96445 },
			{ 0.0410156,-11.0596,2.96445 }};
		hangPos[] = {
			{ -1.50537,5.34473,-5.08813 },
			{ 0.494141,9.42725,-5.09016 },
			{ 2.59473,-6.21191,-5.08055 },
			{ -1.74854,-2.39844,-1.14301 }};
	};
	class Land_A_FuelStation_Build: Industrial
	{
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {
			{ -1.31958,-0.655151,-1.57448 },
			{ 1.82349,0.769653,-1.57458 },
			{ 1.67871,-0.918701,-1.57458 },
			{ -1.23242,1.26794,-1.57458 }};
	};
	class Land_Ind_FuelStation_Build_EP1: Industrial
	{
		lootChance = 0.5;
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2"};
		lootPos[] = {{1.79248,0.447998,-1.20821},{-1.84912,-0.681641,-1.20821}};
	};
	class Land_A_GeneralStore_01a: Supermarket
	{
		lootPos[] = {
			{ -6.93213,1.0708,-1.20155 },
			{ -7.2959,-2.68213,-1.20155 },
			{ -3.41406,-4.39307,-1.20155 },
			{ -1.28809,-2.57861,-1.20155 },
			{ 0.903809,-4.35986,-1.20155 },
			{ 3.1377,-3.40771,-1.20155 },
			{ 7.53418,-2.69971,-1.20154 },
			{ 13.9653,-4.50342,-1.20155 },
			{ 10.2617,0.109863,-1.20155 },
			{ 10.5869,-3.84375,-1.20155 },
			{ 7.84521,-0.137207,-1.20154 },
			{ 3.57471,0.0356445,-1.20154 },
			{ -0.370605,5.17676,-1.20155 },
			{ 4.77783,5.57617,-1.20155 },
			{ 13.0874,4.35645,-1.20155 },
			{ 12.9932,6.31689,-1.20155 },
			{ 7.36328,3.00928,-1.20155 },
			{ 1.93091,2.17236,-1.20154 },
			{ -3.82715,5.3335,-1.20155 },
			{ -7.55029,8.54199,-1.20154 },
			{ -4.42407,8.96631,-1.20154 },
			{ 3.72705,8.36084,-1.20155 },
			{ 9.84033,8.3374,-1.20155 },
			{ -2.90918,1.32031,-1.20155 }};
	};
	class Land_A_GeneralStore_01: Supermarket
	{
		lootPos[] = {
			{ -9.38965,-3.30371,-1.20155 },
			{ -3.77539,-3.86865,-1.20155 },
			{ 1.31836,1.46631,-1.20155 },
			{ 9.01367,3.8457,-1.20155 },
			{ 13.3008,-1.77832,-1.20155 },
			{ 9.81055,1.43213,-1.20155 },
			{ 1.65039,5.14355,-1.20155 },
			{ 0.753906,-3.69531,-1.20155 },
			{ 13.3125,-7.65137,-1.20155 },
			{ 11.168,-3.73682,-1.20155 },
			{ 8.89453,-8.37402,-1.20155 },
			{ -2.04492,-7.58105,-1.20155 },
			{ -7.84766,-5.73633,-1.20155 },
			{ -8.22461,-7.32422,-1.20155 },
			{ 3.79004,-5.69336,-1.20155 },
			{ -9.38379,4.46191,-1.20155 },
			{ -3.5752,4.46533,-1.20155 },
			{ -3.33789,0.612793,-1.20155 },
			{ 10.5918,-9.9458,-1.21082 },
			{ 0.105469,-9.6084,-1.21082 },
			{ -4.86035,-10.4209,-1.21082 },
			{ -6.80859,-1.23975,-1.20155 },
			{ 1.12207,-1.58887,-1.20155 }};
	};
	class Land_Farm_Cowshed_a: Farm
	{
		lootPos[] = {
			{ -1.06836,-5.92163,-3.08763 },
			{ 1.69043,-4.91089,-3.08763 },
			{ 5.8833,-6.15381,-3.08763 },
			{ 8.83984,-5.60278,-3.08763 },
			{ 9.74023,-2.48657,-3.08763 },
			{ 2.88428,-2.34546,-3.08763 },
			{ 7.88037,2.94214,-3.08763 }};
	};
	class Land_stodola_open: Farm
	{
		lootPos[] = {
			{ -2.60303,5.31665,-4.12804 },
			{ -2.58154,-0.530029,-4.17349 },
			{ -0.0478516,-4.88989,-4.136 },
			{ 0.983398,6.20483,-4.11143 }};
		hangPos[] = {
			{ -0.932617,-3.35962,-4.16446 },
			{ -2.01563,-0.115112,-4.19492 }};
	};
	class Land_Barn_W_01: Farm
	{
		lootPos[] = {
			{ 4.93188,-17.0444,-2.63063 },
			{ -3.82813,-18.6699,-2.63036 },
			{ -4.46387,16.6665,-2.63651 },
			{ 5.78711,18.9473,-2.6369 },
			{ 3.9541,4.88428,-2.63446 },
			{ -2.99072,-4.16748,-2.63287 }};
	};
	class Land_Hlidac_budka: Residential
	{
		lootPos[] = {
			{ -2.3186,1.5127,-0.78363 },
			{ 2.02075,0.444336,-0.78363 },
			{ -0.460938,1.75879,-0.78363 }};
	};
	class Land_HouseV2_02_Interier: Residential
	{
		lootPos[] = {
			{ 7.23096,5.37207,-5.53067 },
			{ 8.55005,0.754883,-5.53067 },
			{ 5.20166,-1.54004,-5.53067 },
			{ 3.34912,1.9707,-5.53067 },
			{ -3.62598,3.05371,-5.53067 },
			{ -5.4812,-0.0292969,-5.53067 },
			{ -5.83325,3.26563,-5.53067 },
			{ -5.71045,5.49414,-5.53067 }};
	};
	class Land_a_stationhouse: Military
	{
		lootChance = 0.3;
		lootPos[] = {
			{ -2.69922,-7.57422,-9.47058 },
			{ -0.892578,-5.7168,-9.47058 },
			{ -3.2417,-6.61914,-4.6489 },
			{ -1.35645,-8.3623,-4.6489 },
			{ -1.70801,-7.85449,-0.0437927 },
			{ -3.39502,-7.88281,-0.0437927 },
			{ -1.396,-7.79883,4.41141 },
			{ -1.37939,-5.79102,4.41141 },
			{ 1.5127,1.96484,-9.47058 },
			{ 18.9058,-4.06738,-9.47058 }};
	};
	class Land_Mil_ControlTower: Military
	{
		lootChance = 0.4;
		lootPos[] = {
			{ 10.0703,3.76367,-9.62869 },
			{ 3.89844,3.43457,-5.46368 },
			{ 1.75195,5.68164,-5.46368 },
			{ 6.66113,-0.625488,-1.0687 },
			{ 2.63965,-0.191406,-1.0687 },
			{ 6.72266,3.23389,-1.0687 }};
	};
	class Land_Mil_ControlTower_EP1: Military
	{
		lootChance = 0.4;
		lootPos[] = {
			{ 5.53369,3.64355,-5.46368 },
			{ 7.67236,3.68115,-1.0687 },
			{ 7.53271,-1.70068,-1.0687 },
			{ 4.55225,1.64111,2.92148 },
			{ 10.1292,3.6958,-9.62869 }};
	};
	class Land_SS_hangar: Military
	{
		maxRoaming = 3;
		lootPos[] = {
			{ 11.7344,-17.165,-5.87253 },
			{ -11.7158,-18.9541,-5.87253 },
			{ -14.2461,23.0439,-5.87253 }};
	};
	class Land_Mil_hangar_EP1: Military
	{
		maxRoaming = 3;
		lootPos[] = {{-9.83203,-12.4097,-5.38129},{10.5488,-12.1318,-5.38129},{13.002,0.0214844,-5.38129},{-13.3887,0.25,-5.38129},{13.3203,20.5176,-5.38129},{-13.1865,19.9839,-5.38129},{0.0195313,21.5078,-5.38129},{0.49707,11.5469,-5.38129},{-0.836914,-0.634277,-5.38129},{0.177734,-11.6821,-5.38129}};
	};
	class Land_Mil_Guardhouse_EP1: Military
	{
		lootPos[] = {{-3.05859,1.76514,-1.59003},{-3.16895,3.45361,-1.59003},{-3.19922,-0.323242,-1.59003}};
	};
	class Land_Mil_Repair_center_EP1: Military
	{
		lootPos[] = {
			{-2.42432,-0.73584,-1.52847},
			{-2.43018,2.83984,-1.52847}};
	};
	class Land_A_Pub_01: Residential
	{
		zombieChance = 0.2;
		lootPos[] = {
			{ 1.83398,0.393799,-5.7462 },
			{ -1.76514,0.334473,-5.74622 },
			{ -6.62207,-6.55371,-5.74622 },
			{ -4.63623,-0.100586,-5.74622 },
			{ -5.75928,-3.05029,-5.74622 },
			{ -2.08203,0.922852,-1.76122 },
			{ -4.76514,-5.89087,-1.76122 },
			{ -6.94385,-1.9375,-1.76122 },
			{ -4.05225,-0.779785,-1.76122 },
			{ 1.39795,-1.73779,-1.76122 },
			{ 3.13867,-2.78564,-1.76122 },
			{ 3.58301,-0.591309,-1.76122 },
			{ 3.03027,-4.04346,-1.76122 },
			{ 1.94092,3.18799,-1.76122 },
			{ -0.0961914,6.22437,-1.76122 },
			{ 5.30469,7.55957,-1.76122 },
			{ 6.72559,-2.72705,-1.76122 },
			{ 2.56885,-4.6001,-5.74621 },
			{ 4.06738,5.41406,-5.74622 },
			{ 0.753418,2.2998,-5.74622 }};
	};
	class Land_HouseB_Tenement: Office
	{
		lootPos[] = {
			{ 5.40576,9.89551,-20.7845 },
			{ 5.99023,14.1689,-20.7845 },
			{ 12.9609,14.0718,-20.7845 },
			{ 14.6069,8.92383,-20.7845 },
			{ -2.75635,-2.08594,-20.7845 }};
	};
	class Land_A_Hospital: Hospital
	{
		lootChance = 0.9;
		lootPos[] = {
			{ 0.807129,-1.16333,-7.33966 },
			{ -7.23389,-2.63647,-7.33966 },
			{ -16.3687,-2.40381,-7.33966 },
			{ -12.2847,-3.19604,-7.33966 },
			{ 4.40674,-3.50513,-7.33966 },
			{ -3.2666,-0.925293,-7.33966 },
			{ 6.85693,-2.75146,-7.33966 },
			{ 11.0151,-3.95435,-7.33966 },
			{ 16.8198,-4.71118,-7.33966 },
			{ -1.12793,3.78418,-7.44939 },
			{ 12.7476,0.142822,3.29184 },
			{ 10.2661,-1.21558,3.29184 }};
	};
	class Land_Panelak: Office
	{
		lootPos[] = {
			{ -2.76904,-6.26563,0.0714226 },
			{ -2.93896,-1.3916,0.0714226 },
			{ -5.42065,-3.13184,0.0714226 },
			{ -6.81128,-6.15527,0.0714221 },
			{ -4.00879,2.53027,0.0714226 },
			{ -0.730957,-3.20117,2.77144 },
			{ 3.979,-7.08936,2.77144 },
			{ 2.49609,2.93701,2.77144 },
			{ 6.7373,1.63281,2.77144 },
			{ 6.38525,-2.3916,2.77144 },
			{ 6.80615,-5.77295,2.77144 },
			{ 3.75122,-0.803711,2.77144 },
			{ -0.824219,1.86914,1.32865 }};
	};
	class Land_Panelak2: Office
	{
		lootPos[] = {
			{ -0.729492,-3.00635,-2.62859 },
			{ -0.764648,1.36279,-1.37137 },
			{ -0.30127,3.65039,1.32864 },
			{ 0.73584,-3.22217,2.71097 },
			{ -0.630859,1.84766,4.05244 },
			{ 3.68921,-7.33545,5.43665 },
			{ 2.26807,2.94092,5.43665 },
			{ 6.7002,2.68994,5.43665 },
			{ 6.87842,-1.45947,5.43665 },
			{ 6.09619,-5.94824,5.43665 },
			{ 4.45508,-1.64893,5.43665 },
			{ 2.76367,0.445801,5.43665 }};
	};
	class Land_Shed_Ind02: Industrial
	{
		lootPos[] = {
			{ -2.28174,-5.67236,-4.62599 },
			{ 4.54529,9.6665,-4.62599 },
			{ 4.41223,2.64941,-1.27954 },
			{ -0.437866,11.6943,-1.27641 },
			{ -3.44482,12.2119,-1.27704 }};
	};
	class Land_Shed_wooden: Residential
	{
		lootPos[] = {
			{ 1.26807,-0.361328,-1.29153 },
			{ -0.342773,1.0293,-1.29153 }};
	};
	class Land_Misc_PowerStation: Industrial
	{
		lootPos[] = {
			{ 4.09888,4.89746,-1.26743 },
			{ 4.22827,-1.19873,-1.2681 }};
	};
	class Land_HouseBlock_A1_1: Residential
	{
		lootPos[] = {
			{ -3.52881,0.158936,-4.74365 },
			{ -3.56152,-2.33484,-4.73106 }};
	};
	class Land_Shed_W01: Industrial
	{
		lootPos[] = {
			{ -1.52637,-0.246094,-1.41129 }};
	};
	class Land_HouseV_1I1: Residential
	{
		lootPos[] = {
			{ 0.181641,-1.97314,-2.82275 }};
	};
	class Land_Tovarna2: Industrial
	{
		lootPos[] = {
			{ -11.6309,7.2052,-5.55933 },
			{ -12.0674,2.56909,-5.55933 },
			{ -4.89355,6.6394,-5.55933 },
			{ -3.74121,2.90393,-3.89665 },
			{ -12.8672,1.44519,-2.23135 },
			{ -12.415,8.1311,-2.23135 },
			{ -12.7236,4.11255,-2.23135 },
			{ -3.99805,8.9801,-2.23156 },
			{ -7.33105,8.44214,-2.23156 },
			{ -4.55371,5.22644,-2.23156 },
			{ -11.4746,2.92114,1.66661 },
			{ -11.0703,8.13818,1.66661 },
			{ -4.67578,7.32678,1.62174 },
			{ -2.68262,3.44763,3.4243 },
			{ -13.1953,-8.95862,3.4243 },
			{ -8.80859,-0.443481,0.401226 },
			{ -12.1328,-0.149414,0.424298 },
			{ -2.03418,6.61414,-5.55933 },
			{ 0.239258,1.72278,-5.59793 },
			{ 6.22461,-3.948,-4.61825 },
			{ -6.39355,-8.24353,-5.59541 },
			{ -10.8496,-6.91211,-5.56572 },
			{ -6.77637,-1.73083,-5.56019 }};
	};
	class Land_rail_station_big: Office
	{
		lootPos[] = {
			{ -4.97266,4.55737,-5.04438 },
			{ 0.458496,4.85229,-5.04438 },
			{ 2.4624,2.21851,-5.04438 },
			{ -1.32373,-2.60571,-5.04438 },
			{ -3.29443,-0.121826,-5.04438 },
			{ -1.07764,2.36646,-5.04438 },
			{ 7.46045,-3.41528,-5.04438 },
			{ 8.93408,3.1189,-5.04438 },
			{ -8.16357,-5.12842,-5.04438 }};
	};
	class Land_Ind_Vysypka: Industrial
	{
		lootPos[] = {
			{ 0.486084,4.95459,-4.96861 },
			{ 1.08032,-0.406738,-4.96801 },
			{ -0.0354004,-10.8208,-4.96686 },
			{ -5.07788,-16.4624,-4.96759 },
			{ -6.30298,2.92969,-4.96838 },
			{ -6.26685,26.7349,-4.9772 },
			{ 1.64697,23.4038,-4.97097 },
			{ 7.14575,3.92529,-4.96972 },
			{ 4.63599,-12.1621,-4.96971 }};
	};
	class Land_A_MunicipalOffice: Residential
	{
		zombieChance = 0;
		minRoaming = 3;
		maxRoaming = 9;
		zombieClass[] = {"z_soldier","z_soldier_heavy","z_policeman"};
		lootChance = 0.4;
		lootPos[] = {
			{ -4.66113,-6.27173,-18.429 },
			{ 3.31641,-5.77417,-18.429 },
			{ -0.20752,-6.48682,-18.429 },
			{ -9.72412,-4.88745,-3.78903 },
			{ -9.57813,3.55615,-3.78903 },
			{ -7.16797,11.0737,-3.78903 },
			{ 5.07422,11.1838,-3.78903 },
			{ 9.3208,5.38623,-3.78903 },
			{ 9.65332,-4.82056,-3.78903 },
			{ 3.23535,-0.105957,-0.169027 },
			{ 4.85205,-3.69019,-0.169027 },
			{ -0.80127,-7.89087,-0.169027 },
			{ -4.4082,-4.91772,-0.169027 },
			{ -4.90771,-2.23169,-0.169027 }};
	};
	class Land_A_Office01: Office
	{
		lootPos[] = {
			{ -2.50391,-2.46948,-4.528 },
			{ 4.23535,-0.336914,-4.528 },
			{ 4.11133,6.1123,-4.528 },
			{ 0.242188,6.06299,-4.528 },
			{ 4.31641,3.74023,-4.528 },
			{ 5.08887,0.219727,-4.528 },
			{ 11.6504,-1.5647,-4.528 },
			{ 14.5811,-4.1123,-4.528 },
			{ 13.8545,-0.749023,-4.528 },
			{ -7.7627,5.59082,-4.528 },
			{ 1.81152,0.993408,-2.028 },
			{ 4.93164,4.31982,-2.028 },
			{ 1.18945,6.07031,-2.028 },
			{ 2.23145,3.76563,-2.028 },
			{ -4.76367,-2.51221,-2.028 },
			{ -14.5596,-3.40723,-2.028 },
			{ -15.2705,5.92773,-2.028 },
			{ -10.9063,6.04175,0.472008 },
			{ -6.30762,3.30078,0.472006 },
			{ 7.6416,6.38696,0.472001 },
			{ 13.6729,6.5957,0.471999 },
			{ 13.1924,-2.58691,0.471998 },
			{ 3.0918,2.4375,6.20491 },
			{ -1.45703,-2.28369,6.20491 },
			{ -2.12988,4.51587,0.472005 },
			{ 4.74414,-4.60156,-2.01486 },
			{ 8.3457,-1.10718,-2.028 },
			{ 9.94727,-3.74146,-2.028 },
			{ 7.13867,-2.50732,-2.028 },
			{ 12.8701,4.70923,-2.028 },
			{ 15.3721,3.42383,-2.028 }};
	};
	class Land_A_Office02: Office
	{
		lootPos[] = {
			{ 4.72266,-5.74121,-8.15108 },
			{ 0.961426,-5.16943,-8.15076 }};
	};
	class Land_A_BuildingWIP: Industrial
	{
		lootChance = 0.5;
		lootPos[] = {
			{ -4.62573,4.52344,-6.45268 },
			{ -12.6377,0.494141,-6.49242 },
			{ -14.6023,-8.62842,-6.49961 },
			{ -16.0005,-9.80957,-6.50423 },
			{ -15.5627,-5.17725,-6.50523 },
			{ 0.94458,-2.30371,-6.43043 },
			{ 7.28125,3.20898,-6.44042 },
			{ 9.75708,10.1138,-6.40827 },
			{ 14.771,7.29688,-6.47756 },
			{ 15.4504,-0.314941,-6.52979 },
			{ 20.4895,2.31836,-4.52571 },
			{ 17.3123,-3.1001,-2.53291 },
			{ 10.707,-6.51611,-2.53255 },
			{ 2.22534,-9.21582,-2.534 },
			{ -8.91943,-7.18896,-2.53313 },
			{ -16.3179,-8.35645,-2.53357 },
			{ -21.3064,-6.7915,-2.53182 },
			{ -21.6018,-1.79541,-2.53182 },
			{ -17.5808,6.14746,-2.53182 },
			{ -23.198,8.44727,-2.53182 },
			{ -17.1973,9.58594,-2.53182 },
			{ -4.99023,9.80957,-2.53182 },
			{ 14.0872,7.44092,-2.52676 },
			{ 10.5796,-6.84912,1.48116 },
			{ -3.19116,-2.49463,1.49403 },
			{ -13.8186,3.98975,1.49829 },
			{ -15.9502,-6.17383,1.48802 },
			{ -20.6997,-16.9761,1.50282 },
			{ -15.415,-13.3901,5.46683 }};
	};
	class Land_Church_01: Church
	{
		lootPos[] = {
			{ -6.92102,-0.382813,-4.21339 }};
	};
	class Land_A_Mosque_small_1_EP1: Church
	{
		lootPos[] = {
			{ 2.45117,3.39063,-2.04604 },
			{ 0.183105,0.826172,-2.04605 },
			{ 6.66406,4.11719,-1.9437 },
			{ 0.49707,-1.33301,-1.69603 }};
	};
	class Land_A_Mosque_small_2_EP1: Church
	{
		lootPos[] = {
			{ 1.33496,-0.726074,-2.48535 },
			{ -0.794922,-1.74414,-2.48538 }};
	};
	
	class Land_Church_03: Church
	{
		lootPos[] = {
			{ 5.15332,-6.96875,-14.3021 },
			{ -1.79053,-7.68018,-14.3021 },
			{ -0.0263672,-2.98438,-14.3021 },
			{ -0.00341797,2.02246,-14.3021 },
			{ 5.49878,7.20508,-14.3021 },
			{ 5.38892,3.4043,-14.3021 },
			{ 3.23657,2.76074,-14.3021 },
			{ -1.51001,7.66309,-14.3021 },
			{ -7.6416,4.8125,-14.3021 },
			{ -6.56592,-4.59131,-14.3021 },
			{ 9.552,2.22363,-13.7588 },
			{ 9.93262,-3.85254,-13.7588 }};
		hangPos[] = {
			{ 1.72168,-8.39771,-0.172569 },
			{ 2.08838,-14.4236,-0.27536 },
			{ -13.7158,-10.4808,-0.795174 },
			{ -12.9072,-16.4105,-0.895065 }};
	};
	class Land_Church_02: Church
	{
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_02a: Church
	{
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Church_05R: Church
	{
		lootPos[] = {};
		maxRoaming = 2;
	};
	class Land_Mil_Barracks_i: MilitarySpecial
	{
		lootPos[] = {
			{ 5.39038,-1.75684,-1.09824 },
			{ 1.46753,-0.131836,-1.09824 },
			{ 1.29395,-2.16211,-1.09824 },
			{ -1.78394,-0.168945,-1.09824 },
			{ -1.80615,-1.97656,-1.09824 },
			{ -4.77881,0.0488281,-1.09824 },
			{ -5.39258,-2.11816,-1.09824 },
			{ -5.47046,2.58105,-1.09824 },
			{ -8.32593,-0.144531,-1.09824 },
			{ -9.14966,-2.55859,-1.09824 },
			{ -1.95288,2.57715,-1.09824 },
			{ 5.46362,2.57813,-1.09824 }};
	};
	class Land_Mil_Barracks_i_EP1: MilitarySpecial
	{
		lootPos[] = {
			{8.53711,2.00244,-1.27551},
			{5.14844,2.65771,-1.09824},
			{5.15625,-2.30371,-1.09824},
			{1.78125,2.31885,-1.09824},
			{1.05664,-2.45508,-1.09824},
			{-0.841797,-2.36133,-1.09824},
			{-4.03516,-2.31836,-1.09824},
			{-7.93359,2.51807,-1.09824},
			{-8.49609,-2.33838,-1.09824},
			{-0.649658,0.0478516,-1.09824}};
	};
	class Land_A_TVTower_Base: Industrial
	{
		lootPos[] = {
			{ -0.982422,-1.92627,-2.21573 },
			{ -2.01782,-4.2417,-2.21918 },
			{ -0.759277,1.42139,-2.21573 }};
	};
	class Land_Mil_House: Military
	{
		vehPos[] = {
			{ 13.439,3.25244,-5.71244,84 }};
		lootPos[] = {
			{ 12.457,1.4248,-5.81439 },
			{ 11.0391,4.85278,-5.81439 },
			{ 13.667,4.42139,-5.81439 }};
	};
	class Land_Mil_House_EP1: Military
	{
		vehPos[] = {
			{ 13.439,3.25244,-5.71244,84 }};
		lootPos[] = {
			{11.1523,4.25879,-5.72324},
			{10.918,1.30957,-5.72725},
			{ -2.24219,7.02441,-5.49397 }};
	};
	class Land_Misc_Cargo1Ao: Industrial
	{
		lootPos[] = {
			{ 0.48877,-1.61377,-1.09224 },
			{ 0.012207,2.19263,-1.09224 },
			{ 0.00976563,0.19043,-1.09224 }};
	};
	class Land_Misc_Cargo1Bo: Industrial
	{
		lootPos[] = {
			{ -0.322021,1.68555,-1.09222 },
			{ 0.548584,-1.96289,-1.09222 },
			{ 0.223389,-0.580078,-1.09222 }};
	};
	class Land_Nav_Boathouse: Industrial
	{
		lootPos[] = {
			{ 5.27588,5.51953,3.9203 },
			{ 5.49609,0.106445,4.19408 },
			{ 1.68945,7.5166,3.80288 },
			{ -5.03613,6.19141,3.91093 },
			{ -5.63037,-1.27246,4.41481 },
			{ -6.98779,5.52441,3.9814 },
			{ -2.92236,9.2002,3.73014 },
			{ 6.99463,7.80859,3.80663 },
			{ 7.00342,-2.07422,4.31929 }};
	};
	class Land_ruin_01: Residential
	{
		lootPos[] = {
			{ -4.31934,-0.115234,-1.45578 },
			{ 3.41309,0.270508,-1.71365 },
			{ 3.00293,3.42773,-1.55765 },
			{ 0.62207,-1.73779,-1.49048 }};
	};
	class Land_wagon_box: Industrial
	{
		lootPos[] = {
			{ 0.542969,-3.89453,-0.776679 },
			{ 0.47998,-0.608398,-0.776638 },
			{ 0.515381,3.03857,-0.776592 }};
	};
	class Land_HouseV2_04_interier: Residential
	{
		lootPos[] = {
			{ 7.49463,5.8374,-5.73902 },
			{ 7.50989,-0.930176,-5.74176 },
			{ 1.95532,4.16406,-5.73938 },
			{ 2.10876,6.60645,-5.7386 },
			{ -2.30017,4.22461,-5.73936 },
			{ -5.13306,6.74365,-5.73856 },
			{ -4.74658,2.68457,-5.73985 }};
	};
	class Land_HouseV2_01A: Residential
	{
		lootPos[] = {
			{ -3.52881,-3.16895,-5.60346 },
			{ -1.62988,-3.25439,-5.66887 }};
	};
	class Land_psi_bouda: Residential
	{
		maxRoaming = 4;
		lootPos[] = {
			{ -1.77002,-1.45166,1.95942 }};
	};
	class Land_KBud: Residential
	{
		zombieChance = 0;
		maxRoaming = 0;
		lootPos[] = {
			{ -0.0170898,0.0114746,-0.66367 }};
	};
	class Land_A_Castle_Bergfrit: Residential
	{
		lootPos[] = {
			{ 0.0185547,1.91602,-2.8364 },
			{ 1.19141,-1.43848,-2.8364 },
			{ -2.36816,3.32275,-0.628571 },
			{ 2.36133,3.86768,1.83972 },
			{ 2.48438,-3.20557,3.85541 },
			{ -2.09473,-3.44873,6.31903 },
			{ -1.15918,3.13867,8.76691 },
			{ 1.74707,1.26807,8.76691 },
			{ -0.540039,-2.35254,8.76691 },
			{ -1.62207,-4.27979,13.4801 },
			{ -2.23047,4.82471,16.856 },
			{ 1.67578,-0.825195,16.8505 }};
	};
	class Land_A_Castle_Stairs_A: Residential
	{
		lootPos[] = {
			{ 0.697998,-1.79395,0.726929 },
			{ 8.3938,0.890625,0.875122 },
			{ 8.17261,1.48926,7.02588 }};
	};
	class Land_A_Castle_Gate: Residential
	{
		lootChance = 0.7;
		lootPos[] = {
			{ 0.244141,-4.48486,-3.14362 },
			{ -1.25293,2.98779,-3.07028 },
			{ 4.50684,-3.31152,-2.94885 },
			{ 4.55176,3.29834,-2.94858 },
			{ 7.94824,1.4082,-2.91003 }};
	};
	class Land_Mil_Barracks: Military
	{
		lootPos[] = {};
	};
	class Land_Mil_Barracks_EP1: Military
	{
		lootPos[] = {};
	};
	class Land_Mil_Barracks_L: Military
	{
		lootPos[] = {};
	};
	class Land_Mil_Barracks_L_EP1: Military
	{
		lootPos[] = {};
	};
	class Land_vez: Military
	{
		lootPos[] = {{-0.582031,1.65479,1.35687},{0.116211,0.839355,1.39404},{-0.0498047,1.93262,1.3551}};
	}
	class Land_Barn_W_02: Farm
	{
		lootPos[] = {
			{ 3.16504,5.56543,-2.31409 },
			{ 3.35938,-0.152344,-2.31305 },
			{ 2.53613,-5.89453,-2.30957 },
			{ -2.94629,-5.01367,-2.31006 },
			{ -2.84375,0.212891,-2.31183 },
			{ -5.63281,4.8291,-2.31363 }};
	};
	class Land_sara_domek_zluty: Residential
	{
		maxRoaming = 1;
		lootPos[] = {
			{ 2.95703,3.00732,-2.4337 },
			{ 7.06738,2.95557,-2.4337 },
			{ 6.36304,-0.236328,-2.43375 },
			{ 0.627686,-0.586914,-2.43387 },
			{ -0.659912,2.05371,-2.4337 },
			{ -2.77515,0.751953,-2.43372 },
			{ -5.07666,3.04492,-2.43361 },
			{ -6.17139,-2.33691,-2.43382 },
			{ -3.75293,-3.54688,-2.43382 }};
	};
	class Land_HouseV_3I4: Residential
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_Shed_W4: Residential
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_Shed_W03_EP1: Residential
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_HouseV_3I1: Residential
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_HouseV_1L2: Residential
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_HouseV_1T: Residential
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_telek1: Industrial
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_Ind_Oil_Pump_EP1: Industrial
	{
		lootPos[] = {
			{ 1.49048,-1.99609,-2.08473 }};
	};
	class Land_IndPipe2_bigL_L_EP1: Industrial
	{
		lootPos[] = {
			{ 1.09961,1.11572,2.0323 }};
	};
	class Land_Rail_House_01: Industrial
	{
		lootPos[] = {
			{ 2.81152,3.61426,-1.28266 },
			{ -1.82178,3.10547,-1.28266 },
			{ 0.487793,3.38867,-1.28266 }};
	};
	
	class Land_HouseV_2I: Default
	{
		maxRoaming = 3;
		lootPos[] = {};
	};
	class Land_Misc_deerstand: Military
	{
		zombieChance = 0;
		lootChance = 0.5;
		maxRoaming = 3;
		lootPos[] = {
			{ -0.923828,-0.808594,1.08539 },
			{ 0.419922,-0.237305,1.08539 }};
	};
	class Camp: Military
	{
		maxRoaming = 1;
		lootPos[] = {
			{ 0.833252,-1.52246,-1.15955 },
			{ 0.38501,0.963867,-1.15955 }};
	};
	class CampEast: Military
	{
		maxRoaming = 1;
		lootPos[] = {
			{ -1.05713,-1.80762,-1.31049 },
			{ 0.627441,1.83398,-1.31049 }};
	};
	class CampEast_EP1: Military
	{
		maxRoaming = 1;
		lootPos[] = {
			{ -0.670898,0.95459,-1.31049 },
			{ 1.68506,-2.43384,-1.31049 },
			{ -1.76318,-1.62646,-1.31049 }};
	};
	class MASH: Hospital
	{
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {
			{ 1.18213,-1.65039,-1.17793 },
			{ 0.24707,0.799316,-1.17803 }};
	};
	class Land_Barrack2: Hospital
	{
		maxRoaming = 1;
		lootChance = 0.4;
		lootPos[] = {
			{ -1.96484,4.15576,-0.689606 },
			{ 1.15381,0.3125,-0.691864 }};
	};
	class MASH_EP1: MASH{};
	class UH1Wreck_DZ: Military
	{
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	class C130JWreck: Military
	{
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	class Land_Misc_Cargo1Eo_EP1: Military
	{
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class HMMWVWreck: Military
	{
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class UralWreck: Military
	{
		zombieClass[] = {"z_soldier_pilot","z_soldier_heavy"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class SKODAWreck: Residential
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class UAZWreck: Residential
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class datsun01Wreck: Residential
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class hiluxWreck: Industrial
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class datsun02Wreck: Military
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 1;
		maxRoaming = 2;
		lootPos[] = {};
	};
	class Misc_cargo_cont_net2: Military
	{
		zombieClass[] = {"zZombie_Base","z_hunter"};
		zombieChance = 0;
		lootChance = 0;
		minRoaming = 4;
		maxRoaming = 8;
		lootPos[] = {};
	};
	class USMC_WarfareBFieldhHospital: MASH
	{
		minRoaming = 1;
		maxRoaming = 3;
		zombieClass[] = {"z_soldier","z_soldier_heavy"};
		lootPos[] = {
			{ -3.52246,-5.03931,1.14726 },
			{ 2.36621,-4.52295,1.14786 },
			{ 1.39063,-0.423096,1.14746 },
			{ 1.14258,5.00952,1.1478 },
			{ 3.7124,1.89795,1.14788 }};
	};
	class Land_Ind_Shed_02_main: Default
	{
		zombieChance = 0;
		maxRoaming = 3;
	};
	class Land_Ind_Shed_01_EP1: Default
	{
		zombieChance = 0;
		maxRoaming = 3;
	};
	class HouseRoaming: Residential
	{
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
	class FarmRoaming: Farm
	{
		lootChance = 0;
		zombieChance = 0;
		maxRoaming = 2;
	};
	class Land_Shed_W03: HouseRoaming{};
	class Land_HouseV_1I3: HouseRoaming{};
	class Land_HouseV_1L1: HouseRoaming{};
	class Land_HouseV_1I2: HouseRoaming{};
	class Land_HouseV_2L: HouseRoaming{};
	class Land_HouseV_2T1: HouseRoaming{};
	class Land_houseV_2T2: HouseRoaming{};
	class Land_HouseV_3I2: HouseRoaming{};
	class Land_HouseV_3I3: HouseRoaming{};
	class Land_HouseBlock_A1: HouseRoaming{};
	class Land_HouseBlock_A1_2: HouseRoaming{};
	class Land_HouseBlock_A2: HouseRoaming{};
	class Land_HouseBlock_A2_1: HouseRoaming{};
	class Land_HouseBlock_A3: HouseRoaming{};
	class Land_HouseBlock_B1: HouseRoaming{};
	class Land_HouseBlock_B2: HouseRoaming{};
	class Land_HouseBlock_B3: HouseRoaming{};
	class Land_HouseBlock_B4: HouseRoaming{};
	class Land_HouseBlock_B5: HouseRoaming{};
	class Land_HouseBlock_B6: HouseRoaming{};
	class Land_HouseBlock_C1: HouseRoaming{};
	class Land_HouseBlock_C2: HouseRoaming{};
	class Land_HouseBlock_C3: HouseRoaming{};
	class Land_HouseBlock_C4: HouseRoaming{};
	class Land_HouseBlock_C5: HouseRoaming{};
	class Land_HouseV2_01B: HouseRoaming{};
	class Land_Misc_Cargo1D: HouseRoaming{};
	class Land_HouseV2_03: HouseRoaming{};
	class Land_Ind_Shed_01_end: HouseRoaming{};
	class Land_MBG_ApartmentsOne_W: HouseRoaming{};
	class Land_MBG_ApartmentsTwo_P: HouseRoaming{};
	class Land_MBG_ApartmentsTwo_G: HouseRoaming{};
	class Land_MBG_ApartmentsTwo_B: HouseRoaming{};
	class Land_A_statue01: HouseRoaming
	{
		zombieClass[] = {"zZombie_Base","zZombie_Base","z_teacher","z_suit1","z_suit2","z_soldier","z_soldier_heavy","z_policeman"};
		minRoaming = 2;
		maxRoaming = 8;
	};
	class Land_Shed_W02: FarmRoaming{};
	class Land_Shed_W02_EP1: FarmRoaming{};
	class Land_House_C_1_EP1: Residential
	{
		lootPos[] = {
			{ -3.70313,-0.119629,-0.927744 },
			{ -7.34131,-0.464844,-0.927744 },
			{ -6.0498,-2.62646,-0.927744 },
			{ 3.95093,-2.81006,-0.927744 },
			{ 3.69873,0.496582,-0.927744 },
			{ 6.72168,-1.4165,-0.927744 },
			{ 5.64063,-3.16113,-0.927744 }};
	};
	class Land_House_C_2_EP1: Residential
	{
		lootPos[] = {
			{ 1.09351,-0.86499,-2.31269 },
			{ 4.32935,-0.392578,-2.31269 },
			{ 0.98291,2.44946,-2.30486 },
			{ 3.63306,-0.0957031,0.785267 },
			{ -2.43628,-0.856689,0.547504 }};
	};
	class Land_House_C_3_EP1: Residential
	{
		lootPos[] = {
			{ 6.61987,-1.8667,-3.91483 },
			{ 5.80493,1.21094,-3.91483 },
			{ -7.11523,2.78418,-3.86868 },
			{ -6.45874,-0.478271,-3.86868 },
			{ -6.37598,-2.27344,-3.86868 },
			{ -4.84521,-2.55664,0.576136 },
			{ -1.21606,-1.24634,1.96108 }};
	};
	class Land_House_C_4_EP1: Residential
	{
		lootPos[] = {
			{ 5.38452,-0.364746,-3.48355 },
			{ 3.16089,2.81616,-3.48355 },
			{ -3.36499,2.44629,-3.48355 },
			{ -4.60474,0.0483398,-3.48355 },
			{ 4.34985,-0.835205,-0.35146 },
			{ 1.84668,-3.7168,-0.352423 },
			{ -1.23096,-5.15308,-0.27861 },
			{ -4.16602,2.48022,-0.348963 }};
	};
	class Land_House_C_5_EP1: Residential
	{
		lootPos[] = {
			{ 3.1499,2.39502,-1.36692 },
			{ -1.80127,-2.98022,-1.36692 }};
	};
	class Land_House_C_5_V2_EP1: Residential
	{
		lootPos[] = {
			{ 3.42529,1.77832,-1.36692 },
			{ -3.6687,1.98779,-1.36692 },
			{ -2.0271,-2.9126,-1.36692 },
			{ -1.271,-3.94385,1.33329 }};
	};
	class Land_House_C_5_V3_EP1: Residential
	{
		lootPos[] = {
			{ 2.59375,2.28711,-1.4715 },
			{ -2.56445,-3.37988,-1.4715 },
			{ 1.88525,2.08398,1.42051 },
			{ -1.42725,-4.34424,1.23343 }};
	};
	class Land_House_C_5_V1_EP1: Residential
	{
		lootPos[] = {
			{ 2.59375,2.28711,-1.4715 },
			{ -2.56445,-3.37988,-1.4715 },
			{ 1.88525,2.08398,1.42051 },
			{ -1.42725,-4.34424,1.23343 }};
	};
	class Land_House_K_6_EP1: Residential
	{
		lootPos[] = {{-6.96924,5.95068,-1.54848},{-4.13062,-3.39746,-1.56244},{-0.617432,1.45557,-1.54274},{1.21484,5.69189,-1.54274},{6.68604,5.39746,-1.58527},{2.2583,3.86182,-1.54276},{-0.58374,2.14111,1.49338},{-0.613037,0.0209961,1.49338},{-4.60474,1.67334,1.49339},{-4.60449,0.0292969,1.49339},{1.07739,5.1665,1.51306},{-2.56982,-3.36377,4.47156}};
	};
	class Land_House_C_9_EP1: Residential
	{
		lootPos[] = {
			{ -3.47339,2.13086,-3.74726 },
			{ -3.17773,4.19849,-3.74837 },
			{ -0.839844,5.7041,-3.74944 },
			{ 4.67529,1.19897,-3.74832 },
			{ 4.20508,-1.85229,-3.74805 },
			{ 1.01074,-0.609619,-0.152166 },
			{ 0.213379,1.56616,-0.152166 },
			{ 1.66138,4.33472,-0.152166 },
			{ 4.38208,-5.14136,-0.152166 }};
	};
	class Land_House_C_10_EP1: Residential
	{
		lootPos[] = {
			{ -1.69873,-1.29932,-4.18862 },
			{ -1.44849,-6.23291,-4.19626 },
			{ 3.10547,-1.64893,-4.1758 },
			{ 2.32983,6.66553,-4.16892 },
			{ -1.91699,8.00635,-4.16562 },
			{ -2.5752,5.90967,-4.1708 },
			{ -0.346924,-6.49536,-0.869595 },
			{ 0.373047,-2.14429,-0.869452 },
			{ -2.33911,-5.66138,-0.86986 },
			{ -2.09888,1.83032,-0.868948 }};
	};
	class Land_House_C_11_EP1: Residential
	{
		lootPos[] = {
			{ -4.875,-3.75586,-2.45703 },
			{ -1.22852,-3.17529,-2.08453 },
			{ 6.55859,0.731934,-2.08453 },
			{ 4.74072,3.21436,-2.08453 },
			{ 4.39551,0.458984,-2.08453 },
			{ 0.449219,-3.03857,0.972969 },
			{ 4.8291,3.44629,0.972969 }};
	};
	class Land_House_C_12_EP1: Industrial
	{
		lootPos[] = {
			{ 6.2915,1.28516,-3.51101 },
			{ 6.84961,-2.6499,-3.51101 },
			{ 3.27588,-3.54541,-3.51101 },
			{ -1.03223,0.811768,-3.51101 },
			{ -2.31982,0.178223,-3.51101 },
			{ -2.46631,-6.43018,-3.51101 },
			{ -3.02686,-8.6123,0.136051 },
			{ 0.570801,-8.02637,0.139021 }};
	};
	class Land_House_K_3_EP1: Residential
	{
		lootPos[] = {
			{ 0.524414,3.5166,-0.53767 },
			{ 1.53491,-0.0644531,-0.790318 },
			{ -0.887451,0.615234,-0.790318 },
			{ -4.46191,1.38379,-0.795597 },
			{ 1.1001,5.40723,2.81719 }};
	};
	class Land_House_K_7_EP1: Residential
	{
		lootPos[] = {
			{ -0.995361,1.89014,-0.218372 },
			{ -4.9541,3.85254,-0.218374 },
			{ -3.4502,4.0376,3.32767 }};
	};
	class Land_House_L_7_EP1: Residential
	{
		lootPos[] = {
			{ 0.769287,1.41162,-1.44695 },
			{ -1.43384,1.45557,-1.45483 },
			{ 5.36255,-0.136719,-1.509 },
			{ 4.55078,1.49414,1.281 },
			{ 6.6394,1.8252,1.281 }};
	};
	class Land_House_L_6_EP1: Residential
	{
		lootPos[] = {
			{ 5.51416,-0.64624,-1.509 },
			{ 1.1626,1.93677,-1.5399 },
			{ 4.20996,1.62158,1.28101 },
			{ 3.15381,-2.12427,1.28099 },
			{ -3.74268,-2.23193,-1.53738 }};
	};
	class Land_House_K_8_EP1: Residential
	{
		lootPos[] = {
			{ 2.47577,-2.24414,-2.56724 },
			{ -1.96313,-1.05566,-2.54675 },
			{ -2.44165,2.20215,-2.57804 },
			{ 1.6947,1.77832,-2.58702 },
			{ 0.350647,-0.424805,0.251534 },
			{ -0.741699,3.94141,0.252193 },
			{ -0.392883,3.23242,3.35996 },
			{ -1.83887,-0.766602,3.35996 }};
	};
	class Land_House_K_5_EP1: Residential
	{
		lootPos[] = {
			{ -2.40381,1.90674,1.51889 },
			{ -5.96777,0.826416,0.710116 },
			{ -3.05811,4.05676,1.52165 },
			{ 1.29199,1.85913,1.54825 },
			{ 4.40381,3.96619,2.26365 },
			{ 4.17725,0.271484,2.4009 },
			{ 1.30908,1.50195,1.55225 }};
	};
	class Land_House_K_1_EP1: Residential
	{
		lootPos[] = {
			{ -0.685547,4.02161,1.56626 },
			{ 3.71387,5.48114,1.56626 },
			{ 3.23438,2.35388,1.56626 },
			{ -3.30566,4.65558,1.54929 },
			{ -3.77539,2.02087,1.60863 }};
	};
	
	class Land_House_L_1_EP1: Residential
	{
		lootPos[] = {
			{1.63135,-1.2251,-0.619034},
			{-0.165039,-1.74463,-0.6114815},
			{-1.18311,-0.15918,-0.596542}};
	};
	class Land_House_L_3_EP1: Residential
	{
		lootPos[] = {
			{ -5.59863,-0.384766,-0.173644 },
			{ -5.23425,2.49609,-0.22691 },
			{ 0.75769,2.95508,-0.222477 },
			{ -0.387817,0.0234375,-0.222477 },
			{ 2.11365,2.99512,-0.222477 }};
	};
	class Land_House_L_4_EP1: Residential
	{
		lootPos[] = {
			{ -3.34961,-0.487122,-1.33058 },
			{ -6.60547,0.131348,-1.29852 },
			{ -0.385742,-0.0551758,-1.34066 },
			{ -0.209961,3.14941,-1.253 },
			{ 3.47559,0.370972,-1.05766 },
			{ 5.41992,3.25671,-1.01435 }};
	};
	class Land_House_L_9_EP1:  Residential
	{
		lootPos[] = {
			{ 4.4043,0.311035,-0.621445 },
			{ -2.23584,1.68604,-0.542923 },
			{ 4.0918,0.924805,2.60419}};
	};
	class LAND_ibr_bank: Office
	{
		lootPos[] = {
			{ 1.44702,-0.9551,-1.60158 },
			{ -7.40649,-4.9482,-1.60158 },
			{ -7.50879,3.1616,-1.60158 },
			{ -13.1931,3.0244,-1.60158 },
			{ -10.6316,-1.4922,-1.60158 },
			{ -10.3481,-5.6631,-1.60158 },
			{ -14.0247,-6.4653,-1.60158 },
			{ -10.1897,-2.6592,-1.60158 }};
	};
	class Land_House_L_8_EP1: Residential
	{
		lootPos[] = {
			{ 0.662598,5.04395,-1.01205 },
			{ 0.73291,2.59424,-1.01574 },
			{ 4.73828,3.56836,-0.773781 },
			{ 3.76758,3.67578,1.73622 },
			{ -2.51514,-2.19971,-1.55013 },
			{ -2.51514,-2.19971,-1.55013 }};
	};
	class Land_ibrhotel: Residential
	{
		lootPos[] = {
			{ -8.44922,9.08105,-7.74672 },
			{ -0.813965,9.1748,-7.74672 },
			{ 3.17383,11.873,-7.74672 },
			{ 2.74072,2.91016,-7.74672 },
			{ 3.80225,-2.44434,-7.85944 },
			{ -1.28711,-0.235352,-4.25943 },
			{ 17.8379,-8.18896,-4.25943 },
			{ 15.4878,-11.4014,-4.25943 },
			{ 11.8403,-17.5391,-4.25943 },
			{ 4.74902,-11.9019,-4.25943 },
			{ -9.04395,-17.6064,-4.25943 },
			{ -11.9761,-15.2539,-4.25943 },
			{ -15.9063,-12.082,-4.25943 },
			{ -12.2837,-4.31934,-4.25943 },
			{ -16.7495,9,-4.25943 },
			{ -15.7764,11.6875,-4.25944 },
			{ -11.9551,16.458,-4.25944 },
			{ -4.83203,12.1294,-4.25943 },
			{ -5.21436,6.14258,-4.25943 },
			{ 3.57373,5.38721,-4.25943 },
			{ 8.66553,17.2417,-4.25943 },
			{ 12.2725,16.1885,-4.25943 },
			{ 11.8359,4.06348,-4.25943 },
			{ 8.99023,1.72949,-4.25943 },
			{ -1.28711,-0.235352,-0.759062 },
			{ 17.8379,-8.18896,-0.759062 },
			{ 15.4878,-11.4014,-0.759062 },
			{ 11.8403,-17.5391,-0.759062 },
			{ 4.74902,-11.9019,-0.759062 },
			{ -9.04395,-17.6064,-0.759062 },
			{ -11.9761,-15.2539,-0.759062 },
			{ -15.9063,-12.082,-0.759062 },
			{ -12.2837,-4.31934,-0.759062 },
			{ -16.7495,9,-0.759062 },
			{ -15.7764,11.6875,-4.25944 },
			{ -11.9551,16.458,-4.25944 },
			{ -4.83203,12.1294,-0.759062 },
			{ -5.21436,6.14258,-0.759062 },
			{ 3.57373,5.38721,-0.759062 },
			{ 8.66553,17.2417,-0.759062 },
			{ 12.2725,16.1885,-0.759062 },
			{ 11.8359,4.06348,-0.759062 },
			{ 8.99023,1.72949,-0.759062 },
			{ -1.28711,-0.235352,2.74082 },
			{ 17.8379,-8.18896,2.74082 },
			{ 15.4878,-11.4014,2.74082 },
			{ 11.8403,-17.5391,2.74082 },
			{ 4.74902,-11.9019,2.74082 },
			{ -9.04395,-17.6064,2.74082 },
			{ -11.9761,-15.2539,2.74082 },
			{ -15.9063,-12.082,2.74082 },
			{ -12.2837,-4.31934,2.74082 },
			{ -16.7495,9,2.74082 },
			{ -15.7764,11.6875,-4.25944 },
			{ -11.9551,16.458,-4.25944 },
			{ -4.83203,12.1294,2.74082 },
			{ -5.21436,6.14258,2.74082 },
			{ 3.57373,5.38721,2.74082 },
			{ 8.66553,17.2417,2.74082 },
			{ 12.2725,16.1885,2.74082 },
			{ 11.8359,4.06348,2.74082 },
			{ -1.54492,0.158691,6.24485 },
			{ 3.11914,5.81445,6.24485 }};
	};
	class Land_MBG_Shanty_BIG: Residential
	{
		lootPos[] = {
			{ -29.8752,-15.8057,2.99997 },
			{ 23.4097,11.5024,24.9672 },
			{ -29.345,-16.7568,3.04013 },
			{ 23.2319,11.6201,27.9672 },
			{ -33.3779,-11.3564,5.81198 }};
	};
	class Land_dum_istan3_hromada2: Residential
	{
		lootPos[] = {
			{ 1.67627,3,-4.62603 },
			{ -1.47363,4.92285,-1.28517 },
			{ 6.43848,1.93555,2.08801 }};
	};
	class Land_budova4_in: Military
	{
		lootPos[] = {
			{ -6.50415,2.1416,-1.88723 },
			{ -1.66162,2.10168,-1.88723 },
			{ 2.94312,2.297,-1.88723 },
			{ 5.34082,-1.82922,-1.88723 }};
	};
	class Land_army_hut_int: Military
	{
		lootPos[] = {
			{ 2.7959,-5.07373,-1.33056 },
			{ 2.79785,-2.1626,-1.33056 },
			{ -0.943359,-0.060791,-1.35981 },
			{ 0.689453,1.87134,-1.36167 }};
	};
	class Land_army_hut3_long_int: Military
	{
		lootPos[] = {
			{ -2.88721,-4.36035,-1.23617 },
			{ 0.753906,-3.90039,-1.23617 },
			{ -2.53711,-1.95117,-1.23617 },
			{ -2.27856,-0.211914,-1.23617 },
			{ -0.0664063,-1.70801,-1.23617 },
			{ 0.141113,2.31104,-1.23617 }};
	};
	class Land_army_hut2_int: Military
	{
		lootPos[] = {
			{ -0.421387,-0.0517578,-0.948329 },
			{ 1.80103,0.945313,-0.948329 },
			{ 2.24585,-2.6875,-0.948329 },
			{ -1.24561,-1.53955,-0.948329 }};
	};
	class land_ibr_hangar: Military
	{
		lootPos[] = {
			{ -5.75635,9.95386,-3.57318 },
			{ -8.06152,-11.4065,-3.58192 },
			{ 8.68555,-5.30371,-3.57942 }};
	};
	class Land_MBG_Police_Station: Office
	{
		lootPos[] = {
			{ 9.81543,-4.36365,-1.59829 },
			{ 1.01172,-6.02344,-1.59829 },
			{ -5.03369,-5.98376,-1.59829 },
			{ -8.5415,-0.348511,-1.59829 },
			{ -8.88574,-2.93823,-1.59829 },
			{ -5.55518,4.80493,-1.59829 },
			{ -1.77246,5.49365,-1.59829 },
			{ 2.32129,6.33032,-1.59829 },
			{ 3.54492,6.27332,1.68834 },
			{ 9.88916,4.68176,1.68833 },
			{ 10.0566,-1.07727,1.68833 },
			{ 6.6499,1.78296,1.68833 },
			{ -5.30029,-2.68726,1.68833 },
			{ 1.25977,-1.76636,1.68833 },
			{ -6.56689,1.51843,1.68834 },
			{ -5.33887,3.92529,1.68834 },
			{ -2.3125,6.18774,1.68834 }};
	};
	class Land_dum_mesto_in: Residential
	{
		lootPos[] = {
			{ -5.53796,-2.51996,-3.99769 },
			{ -4.66113,1.34052,-4.26331 },
			{ -4.9137,3.4718,-4.26331 },
			{ 0.397583,-2.74866,-4.26418 },
			{ 2.18762,0.74707,-4.26418 },
			{ 4.94128,-1.67108,-4.26418 },
			{ 4.48279,2.82495,-4.26418 },
			{ 1.11023,4.69928,-2.75561 },
			{ 4.98938,3.79883,-1.28095 },
			{ 5.55957,-1.61218,-1.28095 },
			{ 0.695679,-2.18268,-1.28095 },
			{ -2.42969,-1.18854,-1.27582 },
			{ -4.77722,3.51996,-1.27582 }};
	};
	class Land_tovarna1: Industrial
	{
		lootPos[] = {
			{ 2.83887,5.23889,-5.75442 },
			{ -2.30774,7.31934,-5.75442 },
			{ -11.0908,5.44897,-5.75442 },
			{ -11.4746,-1.5791,-5.75442 },
			{ -5.52405,1.68994,-5.75442 },
			{ 2.82605,1.4801,-5.75442 },
			{ 2.44128,-6.50256,-5.75442 },
			{ -6.68335,-0.453369,2.17997 },
			{ -3.81812,0.690186,2.17997 },
			{ 2.78735,1.19409,2.17997 },
			{ 1.59167,-6.06665,2.17997 },
			{ -2.4646,-5.63696,2.17997 },
			{ -5.77393,-7.28271,2.17997 },
			{ -0.484985,-3.14197,4.82992 }};
	};
	class Land_hut01: Residential
	{
		lootPos[] = {
			{ 0.304749,-0.543213,-0.448339 },
			{ 0.885254,2.90747,-0.44834 }};
	};
	class Land_hut02: Residential
	{
		lootPos[] = {
			{ -0.498901,2.974,-0.445764 },
			{ -1.07245,-0.756958,-0.445764 }};
	};
	class Land_hut04: Residential
	{
		lootPos[] = {
			{ -1.07227,-0.354492,-0.437198 },
			{ 0.939697,2.78271,-0.437198 }};
	};
	class Land_Ind_Oil_Tower_EP1: Industrial
	{
		lootPos[] = {
			{ 3.55743,-5.92773,-12.9755 },
			{ 4.63086,1.24902,-12.9932 },
			{ -0.240356,-1.08252,-12.9875 },
			{ 6.87689,-6.34961,-8.00889 },
			{ 2.31177,0.231689,-8.00478 }};
	};
	class Land_ibr_terminal: Office
	{
		lootPos[] = {
			{ 11.1885,-13.0669,-4.04974 },
			{ 4.42383,-9.64746,-4.04974 },
			{ -2.42822,-6.94775,-4.04974 },
			{ -3.00537,-1.25439,-4.04974 },
			{ 0.473145,8.72314,-4.04974 },
			{ 14.8608,12.5249,-4.04974 },
			{ 3.33838,-14.5229,0.581566 },
			{ -3.88428,-17.5376,0.581566 },
			{ -17.3682,0.572266,-4.05001 },
			{ -13.7939,0.576172,-0.231342 },
			{ -2.83545,10.9009,-0.949741 },
			{ -2.27686,-16.4238,3.68157 }};
	};
	class Land_A_Villa_EP1: Office
	{
		lootPos[] = {
			{ -23.3442,1.71484,-3.65929 },
			{ 14.5498,-5.69775,-5.06722 },
			{ 5.8457,-2.09814,-5.06717 },
			{ 9.5249,3.76563,-5.06717 },
			{ 10.0454,11.5093,-5.0734 },
			{ 0.268555,8.64648,-5.06699 },
			{ -0.378906,15.3989,-5.06724 },
			{ -6.68506,14.9448,-5.06722 },
			{ -10.9644,13.0996,-5.06719 },
			{ 11.0571,4.48926,-1.48401 },
			{ 2.85938,9.12939,-1.48407 },
			{ -3.87646,8.01416,-1.4844 },
			{ 0.0537109,10.3984,-1.4844 },
			{ -2.78467,13.5903,-1.4844 },
			{ -0.118652,15.3394,-1.4844 },
			{ -6.73779,15.772,-1.4844 },
			{ -8.39453,13.5249,-1.4844 },
			{ -10.5317,9.75146,-1.4844 },
			{ -11.8062,14.2358,-1.4844 },
			{ -15.5771,14.0396,-1.4844 }};
	};
	class Land_A_Office01_EP1: Land_A_Office01
	{
		lootPos[] = {
			{ -2.50391,-2.46948,-4.728 },
			{ 4.23535,-0.336914,-4.728 },
			{ 4.11133,6.1123,-4.728 },
			{ 0.242188,6.06299,-4.728 },
			{ 4.31641,3.74023,-4.728 },
			{ 5.08887,0.219727,-4.728 },
			{ 11.6504,-1.5647,-4.728 },
			{ 14.5811,-4.1123,-4.728 },
			{ 13.8545,-0.749023,-4.728 },
			{ -7.7627,5.59082,-4.728 },
			{ 1.81152,0.993408,-2.228 },
			{ 4.93164,4.31982,-2.228 },
			{ 1.18945,6.07031,-2.228 },
			{ 2.23145,3.76563,-2.228 },
			{ -4.76367,-2.51221,-2.228 },
			{ -14.5596,-3.40723,-2.228 },
			{ -15.2705,5.92773,-2.228 },
			{ -10.9063,6.04175,0.672008 },
			{ -6.30762,3.30078,0.672006 },
			{ 7.6416,6.38696,0.672001 },
			{ 13.6729,6.5957,0.671999 },
			{ 13.1924,-2.58691,0.671998 },
			{ 3.0918,2.4375,6.20491 },
			{ -1.45703,-2.28369,6.20491 },
			{ -2.12988,4.51587,0.672005 },
			{ 4.74414,-4.60156,-2.21486 },
			{ 8.3457,-1.10718,-2.228 },
			{ 9.94727,-3.74146,-2.228 },
			{ 7.13867,-2.50732,-2.228 },
			{ 12.8701,4.70923,-2.228 },
			{ 15.3721,3.42383,-2.228 }};
	};
	class Land_A_Stationhouse_ep1: Land_a_stationhouse{};
	class Land_ibrPanelak: Land_Panelak{};
	class Land_ibrPanelak2: Land_Panelak2{};
};
//};
