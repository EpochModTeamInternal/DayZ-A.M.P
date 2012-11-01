**DayZ AMP - Any.Map.Project**
================

Main goal: One DayZ CE based client and server build that will run on any arma2 map as it was released by the creator. DayZ AMP will be updated to current DayZ builds quickly.

**Changes**
========================

Main Features: 
* Dynamic road debris with loot piles.
* Randomly placed vehicle spawns on roads and around buildings.
* Will work on any arma 2 map.
* All fixes and features from 1.7.3 CE https://github.com/R4Z0R49/DayZMod

**Notable Client Changes**
========================

* Added - Rocket_DZ skin is now droppable drops on Helicopter crashes.
* Added - Missing building loot and zombie spawns for many buildings on custom maps.
* Added - Missing fuel tanks and water well for any map support.
* Added - Zombies will attack you in a vehicle. ( More damage will be done to Wheels and Glass less to Body, Engine, and Fuel.)
* Added - New rare canned meat product with 1600 health regen.
* Removed - All static debris. This is to allow mission placed objects and/or server side dynamic debris system.
* Removed - All banned classes.
* Removed - Auto refuel from Land_Ind_FuelStation_Feed_Ep1 fuel station.
* Removed - Force save in favor of server side induced auto save.
* Removed - Most arma2oa.RPT log spam client side related to zombie LOS checks and loot spawns.
* Change - Allow dayz_maxLocalZombies to be set from the init.sqf mission file server side. If not set reverts to default 40.
* Change - Skin_Soldier1_DZ skin now drops on Military Special zombies and Helicopter crashes.
* Change - Bear Trap drops now drop on Hunters.

**Server Side Changes**
========================
* Added - Randomly placed vehicle spawns on roads and around buildings.
* Added - Dynamic road debris with loot piles. Control how many spawn with "MaxDynamicDebris" variable inside the mission init.sqf.
* Added - to mission init.sqf variables "spawnShoremode" 1 for on shore 0 for anywhere and "spawnArea" to control size of spawn area.
* Added - to mission init.sqf variables "MaxHeliCrashes" to control how many helicopters spawn.
* Added - to mission init.sqf variables "dayz_MapArea" master control for size of area for debris and vehicle spawns.
* Change - Allow setting of dayz_maxLocalZombies inside mission init.sqf otherwise default to 40.

**Current Map Support**
========================

* Chenarus
* Takistan
* Zargabad
* Utes
* Woodland_ACR
* Bootcamp_ACR
* Shapur_BAF
* Isla Duala
* Dingor
* Lingor

**Installation Notes**
=======================

Place @DayZ_AMP folder into your "arma 2 operation arrowhead" folder and launch Arma2 OA latest beta with "@DayZ_AMP;" in your mod line.

**Lingor**
=======================

Lingor Island Download links are here: http://www.icebreakr.info/lingor/download/

Required mods: @DayZ_AMP;@lingor@;

**Dingor**
=======================

Dingor Island Download links are here: http://www.icebreakr.info/dingor/download/

Required mods: @DayZ_AMP;@lingor;@dingor;

**Isla Duala**
=======================

Dingor Island Download links are here: http://www.icebreakr.info/isla-duala/download/

Required mods: @DayZ_AMP;@duala;

__________________________________________________________


Thanks to Rocket and all the DayZ CE devs!

***© This setup is based on Dayz CE 1.7.3 - https://github.com/R4Z0R49/DayZMod ©***
