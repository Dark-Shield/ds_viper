class CfgPatches
{
	class DarkShieldUnits
	{
		author = "Wyste";
		requiredaddons[] = {"A3_Characters_F_Common", "A3_Characters_F", "A3_Characters_F_Beta", "A3_Characters_F_BLUFOR"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};
class cfgMods
{
	class Mod_Base;
	class DarkShield_Units: Mod_Base
	{
    name = "DarkShield Unit Pack";
    picture = "ds_units\ds_unit_ico.paa";
    logoSmall = "ds_units\ds_unit_logo_small.paa";
    logo = "ds_units\ds_unit_logo.paa";
    logoOver = "ds_units\ds_unit_logo.paa";
    action = "";
    tooltipOwned = "DarkShield Equipment ModPack";
    dlcColor[] = {0.51,0.51,0.51,1};
    overview = "This Modpack is for the DarkShield Arma3 group and contains various .";
    hideName = 0;
    hidePicture = 0;
	};
};
class CfgUnitInsignia
{
	class DarkShieldInsignia
	{
		displayName = "DarkShield"; // Name displayed in Arsenal
		author = "Wyste"; // Author displayed in Arsenal
		texture = "ds_units\ds_logo.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};
class cfgFactionClasses
{
	class DS //Faction Calling Name, this line will be used to define your faction for units
	{
		displayName = "DarkShield"; //Faction name in-game
		icon = "ds_units\ds_logo.paa"; //Path to texture next to the faction name in editor "PBOname\filename.paa"
		priority = 2; //How far down it is on the menu
		side = 2; // 2 Blufor 0 opfor 1 independant I think.
	};
};
class CfgVehicleClasses
{
	class Infantry //Name of unit group e.g Air, Infantry, Armour (You see this name in the ingame dropdown menu)
	{
		displayName = "Infantry"; //In-game name
		priority = 2; // How far down it is on the menu
	};
};
class CfgVehicles
{
    class B_Soldier_base_F; //Blufor Soldier
    class DS_Rifleman: B_Soldier_base_F //Unit Class name: Class getting info from
    {
        side = 1; //Blufor
        faction = "DarkShield"; //Your Faction
        backpack = ""; //Backpack
        vehicleclass = "Infantry"; //Unit Group
        author = "Wyste";
        _generalMacro = "DS_Rifleman"; //Class Name
        scope = 2;
        displayName = "Rifleman"; //In-Game Name
        weapons[] = {"TEST_GUN","Throw","Put"};
        respawnWeapons[] = {"TEST_GUN","Throw","Put"};
        magazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
        respawnMagazines[] = {"20Rnd_762x51_Mag","20Rnd_762x51_Mag"};
        cost = 300000;
        threat[] = {1,0.7,0.3};
        linkedItems[] = {"TEST_Vest","TEST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        respawnLinkedItems[] = {"TEST_Vest","TEST_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d"; //Path to model
        uniformClass = "TEST_Uniform"; //uniform you are using
        camouflage = 1; //0.5 for Snipers | 1.0 for Man | 4 for Trucks | 8 for Tanks | 10 For Planes
        hiddenSelections[] = {"camo"};
        HiddenSelectionsTextures[] = {"TEST\data\TEST_Uniform_co.paa"};    //Uniform textures
    };
};
