﻿#pragma once

// Name: SeaOfThieves, Version: 2.0.23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UTaleQuestGenerateCluePointingToSiteStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_FWVR[0x40];                                    // 0x0068(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              AllowedClueTypes;                                          // 0x00A8(0x0010) (ZeroConstructor, UObjectWrapper)
	class UClueConnectionConfig*                       ConnectionConfiguration;                                   // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UTaleQuestGenerateCluePointingToSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableInt                           Difficulty;                                                // 0x0030(0x0010) (Edit)
	struct FQuestVariableVector                        SourceLocation;                                            // 0x0040(0x0010) (Edit)
	struct FQuestVariableClueSite                      TargetClueSite;                                            // 0x0050(0x0010) (Edit)
	struct FQuestVariableClueDescriptor                GeneratedClue;                                             // 0x0060(0x0010) (Edit)
	TArray<class UClass*>                              AllowedClueTypes;                                          // 0x0070(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	class UClueConnectionConfig*                       ConnectionConfiguration;                                   // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateCluePointingToSiteStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UTaleQuestGenerateClueSiteAtSeaLocationStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_F3MJ[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClueFactoryConfig*                          ClueConfig;                                                // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestGenerateClueSiteAtSeaLocationStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableVector                        ApproximateLocation;                                       // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                  // 0x0040(0x0010) (Edit)
	class UClueFactoryConfig*                          ClueFactoryConfiguration;                                  // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteAtSeaLocationStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UTaleQuestGenerateClueSiteOnIslandStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_JHNG[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClueFactoryConfig*                          ClueConfig;                                                // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestGenerateClueSiteOnIslandStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableName                          IslandName;                                                // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                  // 0x0040(0x0010) (Edit)
	class UClueFactoryConfig*                          ClueGenerationConfiguration;                               // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateClueSiteOnIslandStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStep
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UTaleQuestGenerateLootDescForVoyageRankStep : public UTaleQuestStep
{
public:
	class ULootForVoyageRankDescAsset*                 LootForRankDescAsset;                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_31NW[0x20];                                    // 0x0070(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestGenerateLootDescForVoyageRankStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableInt                           VoyageRank;                                                // 0x0030(0x0010) (Edit)
	struct FQuestVariableItemDescTypeArray             LootDescArray;                                             // 0x0040(0x0010) (Edit)
	class ULootForVoyageRankDescAsset*                 LootForRankDescAsset;                                      // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestGenerateLootDescForVoyageRankStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UTaleQuestIsClueOfTypeStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_MPUW[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ClueSiteTypeToMatchAgainst;                                // 0x0088(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UTaleQuestIsClueOfTypeStepDesc : public UTaleQuestStepDesc
{
public:
	class UClass*                                      ClueSiteTypeToMatch;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FQuestVariableClueSite                      ClueSite;                                                  // 0x0038(0x0010) (Edit)
	struct FQuestVariableBool                          IsMatchingType;                                            // 0x0048(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestIsClueOfTypeStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleQuestSpawnLootItemInClueSiteStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc
// 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
class UTaleQuestSpawnLootItemInClueSiteStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClass                         LootItem;                                                  // 0x0030(0x0010) (Edit)
	struct FQuestVariableClueSite                      ClueSite;                                                  // 0x0040(0x0010) (Edit)
	struct FQuestVariableItemInfo                      SpawnedLootItem;                                           // 0x0050(0x0010) (Edit)
	bool                                               Tracked;                                                   // 0x0060(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BTO2[0x7];                                     // 0x0061(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestSpawnLootItemInClueSiteStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStep
// 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
class UTaleQuestStoreClueOnActorStep : public UTaleQuestStep
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStepDesc
// 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
class UTaleQuestStoreClueOnActorStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableClueDescriptor                ClueDescriptor;                                            // 0x0030(0x0010) (Edit)
	struct FQuestVariableActor                         Actor;                                                     // 0x0040(0x0010) (Edit)
	struct FQuestVariableActor                         ClueActor;                                                 // 0x0050(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestStoreClueOnActorStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_QGYR[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UTaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc : public UTaleQuestStepDesc
{
public:
	struct FQuestVariableItemInfo                      Item;                                                      // 0x0030(0x0010) (Edit)
	bool                                               EnableAutoSink;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VXYI[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestUpdateBuoyancyAutoSinkSettingForItemStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueSiteData
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UClueSiteData : public UObject
{
public:
	TEnumAsByte<Athena_ETrackedOwnerType>              DebrisTrackingType;                                        // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5GEP[0xF];                                     // 0x0029(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueSiteData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueSiteType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueSiteType : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueSiteType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.LandClueCreator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class ULandClueCreator : public UObject
{
public:
	unsigned char                                      UnknownData_A4I3[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.LandClueCreator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.SeaClueCreator
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class USeaClueCreator : public UObject
{
public:
	unsigned char                                      UnknownData_5CW4[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.SeaClueCreator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueChoiceSelectionStrategy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueChoiceSelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UFixedClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
{
public:
	int                                                IndexToSelect;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2SEI[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.FixedClueChoiceSelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.RandomClueChoiceSelectionStrategy
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URandomClueChoiceSelectionStrategy : public UClueChoiceSelectionStrategy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.RandomClueChoiceSelectionStrategy");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueDestinationDescriptor
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UClueDestinationDescriptor : public UObject
{
public:
	unsigned char                                      UnknownData_26C7[0x48];                                    // 0x0028(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDestinationDescriptor");
		return ptr;
	}



	void OnRep_DestinationInfo();
	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueDescriptor
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UClueDescriptor : public UObject
{
public:
	unsigned char                                      UnknownData_PN7V[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueConnectionBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueConnectionBlueprintFunctionLibrary");
		return ptr;
	}



	class UClueDescriptor* STATIC_CreateCluePointingToSite(class UClueConnectionConfig* ConnectionConfiguration, int Difficulty, TArray<class UClass*> AllowedClueTypes, class UTaleQuestSelectorService* SelectorService, const struct FVector& SourceLocation, const struct FClueSite& TargetSite);
	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueDescriptorGenerator
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UClueDescriptorGenerator : public UObject
{
public:
	class UClass*                                      DescriptorType;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UClass*>                              SupportedDestinationTypes;                                 // 0x0030(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptorGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueDestinationGenerator
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UClueDestinationGenerator : public UObject
{
public:
	class UClass*                                      RequiredClueSiteDataType;                                  // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FWeightedClueDestinationDescriptor>  WeightedSupportedDescriptorTypes;                          // 0x0030(0x0010) (Edit, ZeroConstructor, Protected)
	unsigned char                                      UnknownData_5TPW[0x50];                                    // 0x0040(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDestinationGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueConnectionConfig
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UClueConnectionConfig : public UDataAsset
{
public:
	TArray<struct FClueSiteTypeSupportedDescribedByEntry> CluesThatCanDescribeSites;                                 // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClueDescriptorGenerator*>            ClueGenerators;                                            // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UClueDestinationGenerator*>           DestinationGenerators;                                     // 0x0048(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueConnectionConfig");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueDescriptorContainerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueDescriptorContainerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptorContainerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueDescriptorContainerComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UClueDescriptorContainerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9HEZ[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClueDescriptor*                             CurrentClue;                                               // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               HasClueBeenGiven;                                          // 0x00D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_X7B9[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueDescriptorContainerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueFactoryConfig
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UClueFactoryConfig : public UDataAsset
{
public:
	TArray<class ULandClueCreator*>                    LandClueCreators;                                          // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class USeaClueCreator*>                     SeaClueCreators;                                           // 0x0038(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class UClueChoiceSelectionStrategy*                ChoiceStrategy;                                            // 0x0048(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FRestrictedClueType>                 RestrictedClueTypes;                                       // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueFactoryConfig");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueFactory
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UClueFactory : public UObject
{
public:
	class UClueFactoryConfig*                          Config;                                                    // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueFactory");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UClueLifetimeBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.ClueLifetimeBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_GiveClueToParticipant(class AActor* Participant, class UClueDescriptor* Clue, class UClass* ClueSite);
	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.EnvQueryTest_SeaClueSpawnLocation
// 0x0020 (FullSize[0x0190] - InheritedSize[0x0170])
class UEnvQueryTest_SeaClueSpawnLocation : public UEnvQueryTest
{
public:
	float                                              MinProjectionDistance;                                     // 0x0170(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxProjectionDistance;                                     // 0x0174(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectionAngleInDegrees;                                  // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IslandProximitySafeThreshold;                              // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ContextSourcePoint;                                        // 0x0180(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ContextProjectionPoint;                                    // 0x0188(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.EnvQueryTest_SeaClueSpawnLocation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.LootForVoyageRankDescAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULootForVoyageRankDescAsset : public UDataAsset
{
public:
	TArray<struct FLootToRangeDist>                    RankBasedLootDistribution;                                 // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.LootForVoyageRankDescAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.NPCLootSpawnInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNPCLootSpawnInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.NPCLootSpawnInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.NPCLootSpawnComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UNPCLootSpawnComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_TZR0[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             LootItemSpawnRelativeLocations;                            // 0x00D0(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.NPCLootSpawnComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USeaClueSiteTypesDataAsset : public UDataAsset
{
public:
	TArray<class UClass*>                              ClueSiteTypes;                                             // 0x0028(0x0010) (Edit, ZeroConstructor, UObjectWrapper)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.SeaClueSiteTypesDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep
// 0x0060 (FullSize[0x00C8] - InheritedSize[0x0068])
class UTaleQuestChooseLandOrSeaStep : public UTaleQuestStep
{
public:
	unsigned char                                      UnknownData_S7K6[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USeaClueSiteTypesDataAsset*                  SeaClueSiteTypes;                                          // 0x0080(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LR6N[0x40];                                    // 0x0088(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStep");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestClueSiteService
// 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
class UTaleQuestClueSiteService : public UTaleQuestService
{
public:
	class UTaleQuestClueSiteServiceDesc*               Desc;                                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FClueSite>                           ClueSites;                                                 // 0x0048(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestClueSiteService");
		return ptr;
	}



	TArray<struct FClueSite> GetClueSites();
	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestClueSiteServiceDesc
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTaleQuestClueSiteServiceDesc : public UTaleQuestServiceDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestClueSiteServiceDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc
// 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
class UTaleQuestChooseLandOrSeaStepDesc : public UTaleQuestStepDesc
{
public:
	class USeaClueSiteTypesDataAsset*                  SeaClueSiteTypes;                                          // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProjectionAngleInDegrees;                                  // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinProjectionProportion;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxProjectionProportion;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandClueChanceWhenPreviousClueWasSea;                      // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LandClueChanceWhenPreviousClueWasLand;                     // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_256A[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuestVariableVector                        ProjectionPoint;                                           // 0x0050(0x0010) (Edit)
	struct FQuestVariableTradeRouteData                TradeRouteData;                                            // 0x0060(0x0010) (Edit)
	struct FQuestVariableBool                          IsSeaLocation;                                             // 0x0070(0x0010) (Edit)
	struct FQuestVariableNameArray                     ValidIslandNames;                                          // 0x0080(0x0010) (Edit)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LostShipmentsClueFramework.TaleQuestChooseLandOrSeaStepDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
