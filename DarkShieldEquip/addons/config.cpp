class CfgPatches
{
	class DarkShieldEquip
	{
		author = "Wyste";
		requiredaddons[] = {"ds_units"};
		requiredversion = 1.0;
		units[] = {};
		weapons[] = {};
		magazines[] = {};
	};
};
class cfgMods
{
	class Mod_Base;
	class DarkShield_Equip: Mod_Base
	{
    name = "DarkShield Equipment Pack";
    picture = "ds_equip\ds_equip_ico.paa";
    logoSmall = "ds_units\ds_logo_small.paa";
    logo = "ds_units\ds_logo.paa";
    logoOver = "ds_units\ds_logo.paa";
    action = "";
    tooltipOwned = "DarkShield Equipment ModPack";
    dlcColor[] = {0.51,0.51,0.51,1};
    overview = "This Modpack is for the DarkShield Arma3 group and contains various .";
    hideName = 0;
    hidePicture = 0;
	};
};
