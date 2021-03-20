#pragma once

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

// Class StatusEffects.StatusBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UStatusBase : public UObject
{
public:
	unsigned char                                      UnknownData_AGHM[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusResponse
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UStatusResponse : public UObject
{
public:
	unsigned char                                      UnknownData_59V3[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusResponse");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UActivateableSurfaceMaterialStatusZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.ActivateableSurfaceMaterialStatusZoneInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.DebugMenuStatusDataAsset
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UDebugMenuStatusDataAsset : public UDataAsset
{
public:
	TArray<struct FDebugMenuStatusDefinition>          StatusDefinitions;                                         // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<float>                                      Durations;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.DebugMenuStatusDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectOverlapZone
// 0x00C8 (FullSize[0x04F0] - InheritedSize[0x0428])
class AStatusEffectOverlapZone : public AActor
{
public:
	unsigned char                                      UnknownData_CTYG[0xA8];                                    // 0x0428(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBoxComponent*                               CollisionMesh;                                             // 0x04D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDelayedStatusEffect>                StatusesToApplyOnOverlap;                                  // 0x04D8(0x0010) (Edit, ZeroConstructor)
	bool                                               StartActive;                                               // 0x04E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TBH1[0x7];                                     // 0x04E9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectOverlapZone");
		return ptr;
	}



	void OnStatusDelayEnd(int InStatusIndex, class AActor* ActorRef);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
class UDebugStatusEffectOverlapZoneVisualizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_XD73[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     BoxCollisionDimensions;                                    // 0x00D0(0x000C) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	struct FColor                                      DebugColour;                                               // 0x00DC(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor)
	bool                                               VisibleState;                                              // 0x00E0(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_89KR[0x7];                                     // 0x00E1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.DebugStatusEffectOverlapZoneVisualizerComponent");
		return ptr;
	}



	void OnRep_SetDebugDrawColour();
	void OnRep_DebugBoxDimensions();
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.DebugStatusTicketHolder
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ADebugStatusTicketHolder : public AActor
{
public:
	class AActor*                                      StatusRecipient;                                           // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.DebugStatusTicketHolder");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectCancellationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectCancellationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectCancellationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectRecipientInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectRecipientInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectRecipientInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectResponseConfigurationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectResponseConfigurationInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectResponseConfigurationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectSuspensionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectSuspensionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectSuspensionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusResponseAsset
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UStatusResponseAsset : public UDataAsset
{
public:
	struct FText                                       HighFrequencyTriggerStatusHelper;                          // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, EditConst)
	unsigned char                                      UnknownData_EOTU[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<class UClass*>                              TriggerStatus;                                             // 0x0060(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	TArray<class UStatusResponse*>                     Responses;                                                 // 0x0070(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusResponseAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusRecipientResponseList
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UStatusRecipientResponseList : public UDataAsset
{
public:
	TArray<class UStatusResponseAsset*>                ResponseAssets;                                            // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FFeatureToggledStatusResponseList>   FeatureToggledResponseLists;                               // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UStatusResponseAsset*>                FinalResponseAssets;                                       // 0x0048(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusRecipientResponseList");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.LightWeightStatusEffectManagerComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class ULightWeightStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_B20J[0x20];                                    // 0x00C8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusRecipientResponseList*                RecipientResponseList;                                     // 0x00E8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                             // 0x00F0(0x0010) (Net, ZeroConstructor, RepNotify)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.LightWeightStatusEffectManagerComponent");
		return ptr;
	}



	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
	void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.MaterialStatusSusceptibilityInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMaterialStatusSusceptibilityInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.MaterialStatusSusceptibilityInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.SurfaceMaterialStatusZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USurfaceMaterialStatusZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.SurfaceMaterialStatusZoneInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.MaterialStatusSusceptibilityComponent
// 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
class UMaterialStatusSusceptibilityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_6JQ6[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           CurrentSurfaceMaterial;                                    // 0x00D0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class USurfaceMaterialStatusZoneInterface> CurrentMaterialStatusZone;                                 // 0x00D8(0x0010) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_QG8D[0x10];                                    // 0x00E8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.MaterialStatusSusceptibilityComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.SphericalStatusEffectZone
// 0x00B8 (FullSize[0x04E0] - InheritedSize[0x0428])
class ASphericalStatusEffectZone : public AActor
{
public:
	unsigned char                                      UnknownData_RNJW[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USphereComponent*                            SphereComponent;                                           // 0x0430(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatusEffectVolumeComponent*                StatusEffectVolumeComponent;                               // 0x0438(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QC9O[0xA0];                                    // 0x0440(0x00A0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.SphericalStatusEffectZone");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusApplicationDesc
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UStatusApplicationDesc : public UObject
{
public:
	struct FEventAppliedStatusToTargets                ApplicationEvent;                                          // 0x0028(0x0020)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusApplicationDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusApplicationMonitorComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UStatusApplicationMonitorComponent : public UActorComponent
{
public:
	class UClass*                                      StatusApplicationTrigger;                                  // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusApplicationMonitorComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectHelperFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectHelperFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectHelperFunctionLibrary");
		return ptr;
	}



	void STATIC_ApplyOneShotStatus(class AActor* Recipient, const struct FStatus& Status);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectTicketDispenserInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectTicketDispenserInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectTicketDispenserInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectManagerComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UStatusEffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_CQ7F[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStatusRecipientResponseList*                RecipientResponseList;                                     // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveStatusEffect>                 ActiveEffects;                                             // 0x00F8(0x0010) (Net, ZeroConstructor, RepNotify)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectManagerComponent");
		return ptr;
	}



	void OnRep_ActiveEffects(TArray<struct FActiveStatusEffect> OldEffects);
	void MultiCast_ApplyOneShotStatus(TArray<struct FActiveStatusEffect> AddedEffects, TArray<struct FActiveStatusEffect> RemovedEffects);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectPersistenceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStatusEffectPersistenceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectPersistenceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectPersistenceComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UStatusEffectPersistenceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_0CRM[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectPersistenceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectsSettings
// 0x0010 (FullSize[0x0048] - InheritedSize[0x0038])
class UStatusEffectsSettings : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       DebugMenuStatusDefinitionsDataAsset;                       // 0x0038(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectsSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusEffectVolumeComponent
// 0x0018 (FullSize[0x02A0] - InheritedSize[0x0288])
class UStatusEffectVolumeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_RR3B[0x8];                                     // 0x0288(0x0008) Fix Super Size
	TArray<struct FStatus>                             StatusEffectsToMaintain;                                   // 0x0290(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusEffectVolumeComponent");
		return ptr;
	}



	void UnaffectActor(class AActor* Actor);
	void OnParentComponentEndOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnParentComponentBeginOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AffectActor(class AActor* Actor);
	void AfterRead();
	void BeforeDelete();

};

// Class StatusEffects.StatusResponseNull
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UStatusResponseNull : public UStatusResponse
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StatusEffects.StatusResponseNull");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
