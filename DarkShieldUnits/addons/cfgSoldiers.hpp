class CfgVehicles
{
    class DS_Soldier_base_F
    {
        scope = private; //Not viewable in editor
        side = 1; //Blufor
        faction = "DarkShieldFaction"; //Your Faction
        backpack = ""; //Backpack
        genericNames = "NATOMen"; /// Standard names for lads of NATO (and European civils)
        author = "Wyste";
        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        magazines[] = {""};
        respawnMagazines[] = {""};
        cost = 300000;
        threat[] = {1,0.7,0.3};
        linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d"; //Path to model
        nakedUniform 	= "U_BasicBody";		/// what "uniform" does this soldier use without any other uniform
        hiddenSelections[] = {"Camo", "insiginia"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
        hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\basicbody_grey_co.paa"}; /// what texture does this soldier use for camo selection
        hideProxySelections[] = {"ghillie_hide"}; /// names of selections hidden on proxies (used in vest in this case, see overlaySelectionsInfo[])
    };
    class DS_PlatoonLeader: DS_Soldier_base_F //Unit Class name: Class getting info from
    {
        scope = public; //viewable
        backpack = ""; //Backpack
        vehicleclass = "DS_Army"; //Unit Group
        _generalMacro = "DS_PlatoonLeader"; //Class Name
        displayName = "PLT Leader"; //In-Game Name
        uniformClass = "VSM_Multicam_BDU_Camo"; //uniform you are using
        camouflage = 0.8; //0.5 for Snipers | 1.0 for Man | 4 for Trucks | 8 for Tanks | 10 For Planes
    };
    class DS_PlatoonMedic: DS_Soldier_base_F //Unit Class name: Class getting info from
    {
        scope = public; //viewable
        backpack = ""; //Backpack
        vehicleclass = "DS_Army"; //Unit Group
        _generalMacro = "DS_PlatoonMedic"; //Class Name
        displayName = "PLT Medic"; //In-Game Name
        uniformClass = "VSM_Multicam_Crye_Camo_SS"; //uniform you are using
        camouflage = 0.8; //0.5 for Snipers | 1.0 for Man | 4 for Trucks | 8 for Tanks | 10 For Planes
    };
    class DS_Rifleman: DS_Soldier_base_F //Unit Class name: Class getting info from
    {
        scope = public; //viewable
        backpack = ""; //Backpack
        vehicleclass = "DS_Army"; //Unit Group
        _generalMacro = "DS_Rifleman"; //Class Name
        displayName = "Rifleman"; //In-Game Name
        uniformClass = "VSM_Multicam_Crye_Camo"; //uniform you are using
        camouflage = 1; //0.5 for Snipers | 1.0 for Man | 4 for Trucks | 8 for Tanks | 10 For Planes
    };
};
