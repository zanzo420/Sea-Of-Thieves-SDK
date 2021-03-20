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

// Class GlitterBeard.GlitterBeardEntitlementDesc
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UGlitterBeardEntitlementDesc : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardEntitlementDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent
// 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
class UGlitterBeardFinaleCoordinatorComponent : public UActorComponent
{
public:
	class UWwiseEvent*                                 AudioEventToSynchronise;                                   // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFinaleReplicationState                     ReplicationState;                                          // 0x00D0(0x0010) (Net, RepNotify)
	unsigned char                                      UnknownData_5HT3[0x80];                                    // 0x00E0(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardFinaleCoordinatorComponent");
		return ptr;
	}



	void OnRep_ReplicationState(const struct FFinaleReplicationState& OldState);
	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardIsHideoutOpenConditional
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGlitterBeardIsHideoutOpenConditional : public UNPCDialogConditional
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardIsHideoutOpenConditional");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardLanternSoundEffect
// 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
class UGlitterBeardLanternSoundEffect : public UEffectBlendObjectBase
{
public:
	float                                              TriggerThreshold;                                          // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K0LW[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     WWisePool;                                                 // 0x0040(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWwiseEmitter                               Emitter;                                                   // 0x0050(0x0020) (Transient)
	unsigned char                                      UnknownData_CUMS[0x10];                                    // 0x0070(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardLanternSoundEffect");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterbeardSlidingDoor
// 0x0008 (FullSize[0x0598] - InheritedSize[0x0590])
class AGlitterbeardSlidingDoor : public ASlidingDoor
{
public:
	class UEffectBlendControllerComponent*             DecalBlendComponent;                                       // 0x0590(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterbeardSlidingDoor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardTelemetryComponent
// 0x0048 (FullSize[0x0110] - InheritedSize[0x00C8])
class UGlitterBeardTelemetryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_WJX6[0x48];                                    // 0x00C8(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTelemetryComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardTrustedTreeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGlitterBeardTrustedTreeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTrustedTreeInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardTree
// 0x0308 (FullSize[0x0730] - InheritedSize[0x0428])
class AGlitterBeardTree : public AActor
{
public:
	unsigned char                                      UnknownData_006K[0x28];                                    // 0x0428(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UActionRulesComponent*                       ActionRulesComponent;                                      // 0x0450(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UActionRulesInteractableComponent*           InteractableComponent;                                     // 0x0458(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              LanternLightDelay;                                         // 0x0460(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EZYR[0x4];                                     // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGlitterBeardUnlockVFXCoordinatorComponent*  UnlockVFXCoordinatorComponent;                             // 0x0468(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UGlitterBeardTelemetryComponent*             TelemetryComponent;                                        // 0x0470(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UClass*                                      VocalShanty;                                               // 0x0478(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	class UWwiseEvent*                                 VocalsFadeEvent;                                           // 0x0480(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              VocalsFadeDelay;                                           // 0x0488(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              UnlockDelay;                                               // 0x048C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UGlitterBeardFinaleCoordinatorComponent*     FinaleCoordinator;                                         // 0x0490(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class ULandmarkReactionTriggerComponent*           LandmarkReactionTrigger;                                   // 0x0498(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              DistanceFromTreeToPauseAISpawn;                            // 0x04A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VSCH[0x234];                                   // 0x04A4(0x0234) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ASlidingDoor*                                HideoutDoor;                                               // 0x06D8(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FWwiseEmitter                               SoundEmitter;                                              // 0x06E0(0x0020) (Protected)
	unsigned char                                      UnknownData_ZIWN[0x30];                                    // 0x0700(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTree");
		return ptr;
	}



	void StopVocals();
	bool StopReaction();
	void StartVocals();
	bool StartReaction();
	void Reset_Impl();
	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
class UGlitterBeardTreeVisualFeedbackComponent : public UActorComponent
{
public:
	TArray<struct FVisualFeedbackList>                 FeedbackActions;                                           // 0x00C8(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_OPKY[0x10];                                    // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>> CurrentStates;                                             // 0x00E8(0x0010) (Net, ZeroConstructor, RepNotify)
	unsigned char                                      UnknownData_R8ZL[0x20];                                    // 0x00F8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardTreeVisualFeedbackComponent");
		return ptr;
	}



	void OnRep_NextStateEvent(TArray<TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>> OldStates);
	void AfterRead();
	void BeforeDelete();

};

// Class GlitterBeard.GlitterBeardUnlockVFXCoordinatorComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UGlitterBeardUnlockVFXCoordinatorComponent : public UActorComponent
{
public:
	struct FActorComponentSelector                     TreeActor;                                                 // 0x00C8(0x0010) (Edit, ContainsInstancedReference, Protected)
	class UMaterialInstanceDynamic*                    TreeMaterialInstanceDynamic;                               // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              TreeBlendTime;                                             // 0x00E0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TY0D[0xC];                                     // 0x00E4(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GlitterBeard.GlitterBeardUnlockVFXCoordinatorComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
