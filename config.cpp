class CfgPatches
{
	class ZenTireRack
	{
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Vehicles_Wheeled"
		};
		units[] = 
		{
			"Zen_TireRack"
		};
	};
};

class CfgMods
{
	class ZenTireRack
	{
		dir = "ZenTireRack";
		picture = "";
		action = "";
		hideName = 1;	
		hidePicture = 1;
		name = "ZenTireRack";
		credits = "";
		author = "Zenarchist";
		authorID = "0";
		version = "1.0";
		type = "mod";
		dependencies[] = { "Game","World","Mission" };
		class defs
		{
			class imageSets
			{
				files[] =
				{
					"ZenTireRack/data/gui/tirerackslots.imageset"
				};
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenTireRack/scripts/4_World" };
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Zen_TireRack : Inventory_Base
	{
		scope = 2;
		displayName = "$STR_ZenTireRackName";
		descriptionShort = "$STR_ZenTireRackDesc";
		model = "ZenTireRack\data\model\TireRack.p3d";
		forceFarBubble = "true";
		physLayer = "item_large"; 
		weight = 5000;
		itemSize[] = { 10,10 };
		itemBehaviour = 0;
		repairableWithKits[] = { 10 };
		repairCosts[] = { 30 };
		attachments[] = 
		{ 
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8",
			"ZenTireIron",
			"ZenTireRepair",
			"ZenTireGasoline"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 5000;
					healthLevels[] =
					{

						{
							1,

							{
								"ZenTireRack\data\textures\tirerack.rvmat"
							}
						},

						{
							0.69999999,

							{
								"ZenTireRack\data\textures\tirerack.rvmat"
							}
						},

						{
							0.5,

							{
								"ZenTireRack\data\textures\tirerack_damage.rvmat"
							}
						},

						{
							0.30000001,

							{
								"ZenTireRack\data\textures\tirerack_damage.rvmat"
							}
						},

						{
							0,

							{
								"ZenTireRack\data\textures\tirerack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundImpactType = "metal";
	};
	class LugWrench : Inventory_Base
	{
		inventorySlot[] +=
		{
			"ZenTireIron"
		};
	};
	class TireRepairKit : Inventory_Base
	{
		inventorySlot[] +=
		{	
			"ZenTireRepair"
		};
	};

	class Bottle_Base;
	class CanisterGasoline : Bottle_Base
	{
		inventorySlot[] +=
		{
			"ZenTireGasoline"
		};
	};

	// Add custom inventory slot to car wheels
	class CarWheel;
	class HatchbackWheel : CarWheel
	{
		inventorySlot[] += 
		{  
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
	class CivSedanWheel : CarWheel
	{
		inventorySlot[] +=
		{
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
	class Hatchback_02_Wheel : CarWheel
	{
		inventorySlot[] +=
		{
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
	class Sedan_02_Wheel : CarWheel
	{
		inventorySlot[] +=
		{
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
	class Truck_01_Wheel : CarWheel
	{
		inventorySlot[] +=
		{
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
	class Offroad_02_Wheel : CarWheel
	{
		inventorySlot[] +=
		{
			"ZenTireRack1",
			"ZenTireRack2",
			"ZenTireRack3",
			"ZenTireRack4",
			"ZenTireRack5",
			"ZenTireRack6",
			"ZenTireRack7",
			"ZenTireRack8"
		};
	};
};

class CfgSlots
{
	class Slot_ZenTireRack1
	{
		name = "ZenTireRack1";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireRack2
	{
		name = "ZenTireRack2";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireRack3
	{
		name = "ZenTireRack3";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireRack4
	{
		name = "ZenTireRack4";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireRack5
	{
		name = "ZenTireRack5";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireRack6
	{
		name = "ZenTireRack6";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireRack7
	{
		name = "ZenTireRack7";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireRack8
	{
		name = "ZenTireRack8";
		displayName = "$STR_ZenTireRackWheel";
		ghostIcon = "set:dayz_inventory image:wheel";
	};
	class Slot_ZenTireIron
	{
		name = "ZenTireIron";
		displayName = "$STR_CfgVehicles_LugWrench0";
		ghostIcon = "set:tirerackslots image:tireiron";
	};
	class Slot_ZenTireRepair
	{
		name = "ZenTireRepair";
		displayName = "$STR_CfgVehicles_TireRepairKit0";
		ghostIcon = "set:tirerackslots image:tirerepairkit";
	};
	class Slot_ZenTireGasoline
	{
		name = "ZenTireGasoline";
		displayName = "$STR_CfgVehicles_CanisterGasoline0";
		ghostIcon = "set:tirerackslots image:gasoline";
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyZenTireProxy1 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack1";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy1.p3d";
	};
	class ProxyZenTireProxy2 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack2";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy2.p3d";
	};
	class ProxyZenTireProxy3 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack3";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy3.p3d";
	};
	class ProxyZenTireProxy4 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack4";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy4.p3d";
	};
	class ProxyZenTireProxy5 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack5";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy5.p3d";
	};
	class ProxyZenTireProxy6 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack6";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy6.p3d";
	};
	class ProxyZenTireProxy7 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack7";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy7.p3d";
	};
	class ProxyZenTireProxy8 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRack8";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy8.p3d";
	};
	class ProxyZenTireProxy9 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireIron";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy9.p3d";
	};
	class ProxyZenTireProxy10 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireRepair";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy10.p3d";
	};
	class ProxyZenTireProxy11 : ProxyAttachment
	{
		scope = 1;
		inventorySlot = "ZenTireGasoline";
		model = "\ZenTireRack\data\model\proxy\ZenTireProxy11.p3d";
	};
};