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

// Class GameplayAbilities.AttributeSet
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UAttributeSet : public UObject
{
public:
	unsigned char                                      UnknownData_BK6C[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AttributeSet");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayCueInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameplayCueInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueInterface");
		return ptr;
	}



	void ForwardGameplayCueToParent();
	void BlueprintCustomHandler(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilitySystemBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemBlueprintLibrary");
		return ptr;
	}



	bool STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	bool STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	bool STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FGameplayEffectSpecHandle STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle);
	struct FGameplayEffectSpecHandle STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount);
	struct FGameplayEffectSpecHandle STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration);
	void STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload);
	struct FGameplayEffectSpecHandle STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel);
	struct FGameplayTargetDataFilterHandle STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor);
	bool STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters);
	bool STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters);
	bool STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters);
	struct FTransform STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FTransform STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	struct FVector STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters);
	struct FTransform STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters);
	class AActor* STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters);
	struct FHitResult STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index);
	struct FHitResult STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters);
	bool STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal);
	bool STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction);
	float STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute);
	int STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData);
	TArray<class AActor*> STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index);
	int STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters);
	class AActor* STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index);
	int STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle);
	class UAbilitySystemComponent* STATIC_GetAbilitySystemComponent(class AActor* Actor);
	void STATIC_ForwardGameplayCueToTarget(const TScriptInterface<class UGameplayCueInterface>& TargetCueInterface, TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	struct FGameplayAbilityTargetDataHandle STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass);
	bool STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext);
	bool STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class UObject* STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FVector STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext);
	struct FHitResult STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext);
	class AActor* STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext);
	bool STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor);
	bool STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs);
	struct FGameplayEffectSpecHandle STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude);
	struct FGameplayAbilityTargetDataHandle STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd);
	struct FGameplayEffectSpecHandle STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags);
	struct FGameplayEffectSpecHandle STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle);
	struct FGameplayAbilityTargetDataHandle STATIC_AbilityTargetDataFromActor(class AActor* Actor);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffect
// 0x0550 (FullSize[0x0578] - InheritedSize[0x0028])
class UGameplayEffect : public UObject
{
public:
	unsigned char                                      UnknownData_2M6T[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<GameplayAbilities_EGameplayEffectDurationType> DurationPolicy;                                            // 0x0030(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z5DE[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectModifierMagnitude            DurationMagnitude;                                         // 0x0038(0x0170) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              Period;                                                    // 0x01A8(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	bool                                               bExecutePeriodicEffectOnApplication;                       // 0x01C8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2E4Z[0x7];                                     // 0x01C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayModifierInfo>               Modifiers;                                                 // 0x01D0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionDefinition>  Executions;                                                // 0x01E0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	struct FScalableFloat                              ChanceToApplyToTarget;                                     // 0x01F0(0x0020) (Edit, DisableEditOnInstance)
	TArray<class UClass*>                              TargetEffectClasses;                                       // 0x0210(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TArray<class UGameplayEffect*>                     TargetEffects;                                             // 0x0220(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)
	TArray<class UClass*>                              OverflowEffects;                                           // 0x0230(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	bool                                               bDenyOverflowApplication;                                  // 0x0240(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bClearStackOnOverflow;                                     // 0x0241(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IRVJ[0x6];                                     // 0x0242(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              PrematureExpirationEffectClasses;                          // 0x0248(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TArray<class UClass*>                              RoutineExpirationEffectClasses;                            // 0x0258(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	bool                                               bRequireModifierSuccessToTriggerCues;                      // 0x0268(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N55D[0x7];                                     // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayEffectCue>                  GameplayCues;                                              // 0x0270(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	class UGameplayEffectUIData*                       UIData;                                                    // 0x0280(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInheritedTagContainer                      InheritableGameplayEffectTags;                             // 0x0288(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayEffectTags;                                        // 0x0300(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      InheritableOwnedTagsContainer;                             // 0x0328(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       OwnedTagsContainer;                                        // 0x03A0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    OngoingTagRequirements;                                    // 0x03C8(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    ApplicationTagRequirements;                                // 0x0418(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FInheritedTagContainer                      RemoveGameplayEffectsWithTags;                             // 0x0468(0x0078) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagContainer                       ClearTagsContainer;                                        // 0x04E0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FGameplayTagRequirements                    GrantedApplicationImmunityTags;                            // 0x0508(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	TEnumAsByte<GameplayAbilities_EGameplayEffectStackingType> StackingType;                                              // 0x0558(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8CXB[0x3];                                     // 0x0559(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                StackLimitCount;                                           // 0x055C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayEffectStackingDurationPolicy> StackDurationRefreshPolicy;                                // 0x0560(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayEffectStackingPeriodPolicy> StackPeriodResetPolicy;                                    // 0x0561(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CLY4[0x6];                                     // 0x0562(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilities;                                          // 0x0568(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffect");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbility
// 0x04B0 (FullSize[0x04D8] - InheritedSize[0x0028])
class UGameplayAbility : public UObject
{
public:
	unsigned char                                      UnknownData_76R9[0xA0];                                    // 0x0028(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       AbilityTags;                                               // 0x00C8(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_KYSN[0x48];                                    // 0x00F0(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bReplicateInputDirectly;                                   // 0x0138(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_69X3[0x27];                                    // 0x0139(0x0027) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityReplicationPolicy> ReplicationPolicy;                                         // 0x0160(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityInstancingPolicy> InstancingPolicy;                                          // 0x0161(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bServerRespectsRemoteAbilityCancellation;                  // 0x0162(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected)
	bool                                               bRetriggerInstancedAbility;                                // 0x0163(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_LZ50[0x4];                                     // 0x0164(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityActivationInfo              CurrentActivationInfo;                                     // 0x0168(0x0020) (BlueprintVisible, BlueprintReadOnly, Protected)
	struct FGameplayEventData                          CurrentEventData;                                          // 0x0188(0x00A0) (BlueprintVisible, BlueprintReadOnly, Protected)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityNetExecutionPolicy> NetExecutionPolicy;                                        // 0x0228(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z5QN[0x7];                                     // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CostGameplayEffectClass;                                   // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	class UGameplayEffect*                             CostGameplayEffect;                                        // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TArray<struct FAbilityTriggerData>                 AbilityTriggers;                                           // 0x0240(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, Protected)
	class UClass*                                      CooldownGameplayEffectClass;                               // 0x0250(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	class UGameplayEffect*                             CooldownGameplayEffect;                                    // 0x0258(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FGameplayTagQuery                           CancelAbilitiesMatchingTagQuery;                           // 0x0260(0x0048) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagQuery                           ConstTagQuery;                                             // 0x02A8(0x0048) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, EditConst, Protected)
	struct FGameplayTagContainer                       CancelAbilitiesWithTag;                                    // 0x02F0(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       BlockAbilitiesWithTag;                                     // 0x0318(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       ActivationOwnedTags;                                       // 0x0340(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       ActivationRequiredTags;                                    // 0x0368(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       ActivationBlockedTags;                                     // 0x0390(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       SourceRequiredTags;                                        // 0x03B8(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       SourceBlockedTags;                                         // 0x03E0(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       TargetRequiredTags;                                        // 0x0408(0x0028) (Edit, DisableEditOnInstance, Protected)
	struct FGameplayTagContainer                       TargetBlockedTags;                                         // 0x0430(0x0028) (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_HJ0S[0x70];                                    // 0x0458(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentMontage;                                            // 0x04C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bIsActive;                                                 // 0x04D0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bIsCancelable;                                             // 0x04D1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bIsBlockingOtherAbilities;                                 // 0x04D2(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_86BB[0x5];                                     // 0x04D3(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility");
		return ptr;
	}



	void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);
	void SetCanBeCanceled(bool bCanBeCanceled);
	void SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload);
	void MontageStop(float OverrideBlendOutTime);
	void MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName);
	void MontageJumpToSection(const struct FName& SectionName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName);
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& payload);
	void K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag);
	void K2_OnEndAbility();
	void K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
	void K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context);
	void K2_EndAbility();
	void K2_CommitExecute();
	bool K2_CommitAbilityCost(bool BroadcastCommitEvent);
	bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent);
	bool K2_CommitAbility();
	bool K2_CheckAbilityCost();
	bool K2_CheckAbilityCooldown();
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int GameplayEffectLevel);
	TArray<struct FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle);
	void K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
	void K2_ActivateAbility();
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo();
	class AActor* GetOwningActorFromActorInfo();
	struct FGameplayEffectSpecHandle GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level);
	class UObject* GetCurrentSourceObject();
	class UAnimMontage* GetCurrentMontage();
	struct FGameplayEffectContextHandle GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData);
	class AActor* GetAvatarActorFromActorInfo();
	struct FGameplayAbilityActorInfo GetActorInfo();
	int GetAbilityLevel();
	void EndTaskByInstanceName(const struct FName& InstanceName);
	void EndAbilityState(const struct FName& OptionalStateNameToEnd);
	void ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask);
	void CancelTaskByInstanceName(const struct FName& InstanceName);
	void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove);
	void BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove);
	TArray<struct FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilitySystemComponent
// 0x0D50 (FullSize[0x0E78] - InheritedSize[0x0128])
class UAbilitySystemComponent : public UGameplayTasksComponent
{
public:
	unsigned char                                      UnknownData_X1ZX[0x8];                                     // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAttributeDefaults>                  DefaultStartingData;                                       // 0x0130(0x0010) (Edit, ZeroConstructor)
	TArray<class UAttributeSet*>                       SpawnedAttributes;                                         // 0x0140(0x0010) (ExportObject, Net, ZeroConstructor, ContainsInstancedReference)
	struct FPredictionKey                              ReplicatedPredictionKey;                                   // 0x0150(0x0018) (Net, RepNotify)
	unsigned char                                      UnknownData_G8BN[0xD8];                                    // 0x0168(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              OutgoingDuration;                                          // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IncomingDuration;                                          // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecContainer               ActivatableAbilities;                                      // 0x0248(0x00C0) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected)
	unsigned char                                      UnknownData_XR4O[0x50];                                    // 0x0308(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UGameplayAbility*>                    AllReplicatedInstancedAbilities;                           // 0x0358(0x0010) (ZeroConstructor, Protected)
	unsigned char                                      UnknownData_XNCL[0x270];                                   // 0x0368(0x0270) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AGameplayAbilityTargetActor*>         SpawnedTargetActors;                                       // 0x05D8(0x0010) (ZeroConstructor)
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                                        // 0x05E8(0x0030) (Net, RepNotify, Protected)
	struct FGameplayAbilityLocalAnimMontage            LocalAnimMontageInfo;                                      // 0x0618(0x0030) (Protected)
	unsigned char                                      UnknownData_S3EA[0xA0];                                    // 0x0648(0x00A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      OwnerActor;                                                // 0x06E8(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      AvatarActor;                                               // 0x06F0(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ECV5[0x18];                                    // 0x06F8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FActiveGameplayEffectsContainer             ActiveGameplayEffects;                                     // 0x0710(0x03C8) (Net, RepNotify, Protected)
	struct FActiveGameplayCueContainer                 ActiveGameplayCues;                                        // 0x0AD8(0x00C0) (Net, RepNotify, ContainsInstancedReference, Protected)
	unsigned char                                      UnknownData_ML5V[0x160];                                   // 0x0B98(0x0160) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<unsigned char>                              BlockedAbilityBindings;                                    // 0x0CF8(0x0010) (Net, ZeroConstructor, Transient, Protected)
	unsigned char                                      UnknownData_KB0L[0x170];                                   // 0x0D08(0x0170) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemComponent");
		return ptr;
	}



	bool TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation);
	bool TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);
	void TargetConfirm();
	void TargetCancel();
	void SetUserAbilityActivationInhibited(bool NewInhibit);
	void SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel);
	void ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey);
	void ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetReplicatedEvent(TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey);
	void ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle);
	void ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey);
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName);
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName);
	void ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove);
	bool RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove);
	void RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags);
	void OnRep_ReplicatedAnimMontage();
	void OnRep_PredictionKey();
	void OnRep_OwningActor();
	void OnRep_GameplayEffects();
	void OnRep_ActivateAbilities();
	void NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters);
	void NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey);
	void NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext);
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context);
	void K2_InitStats(class UClass* Attributes, class UDataTable* DataTable);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	bool IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag);
	bool GetUserAbilityActivationInhibited();
	struct FGameplayEffectSpecHandle GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level);
	float GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute);
	int GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent);
	struct FGameplayEffectContextHandle GetEffectContext();
	void ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate);
	void ClientSetReplicatedEvent(TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey);
	void ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo);
	void ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData);
	void ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey);
	void ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle* SpecHandle, class UAbilitySystemComponent* Target);
	struct FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle);
	void AbilityConfirmOrCancel__DelegateSignature();
	void AbilityAbilityKey__DelegateSignature(int InputID);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilitySystemDebugHUD
// 0x0000 (FullSize[0x0520] - InheritedSize[0x0520])
class AAbilitySystemDebugHUD : public AHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemDebugHUD");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilitySystemGlobals
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
class UAbilitySystemGlobals : public UObject
{
public:
	struct FStringClassReference                       AbilitySystemGlobalsClassName;                             // 0x0028(0x0010) (ZeroConstructor, Config)
	struct FGameplayTag                                ActivateFailCooldownTag;                                   // 0x0038(0x0008)
	struct FName                                       ActivateFailCooldownName;                                  // 0x0040(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                ActivateFailCostTag;                                       // 0x0048(0x0008)
	struct FName                                       ActivateFailCostName;                                      // 0x0050(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                ActivateFailTagsBlockedTag;                                // 0x0058(0x0008)
	struct FName                                       ActivateFailTagsBlockedName;                               // 0x0060(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                ActivateFailTagsMissingTag;                                // 0x0068(0x0008)
	struct FName                                       ActivateFailTagsMissingName;                               // 0x0070(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                ActivateFailNetworkingTag;                                 // 0x0078(0x0008)
	struct FName                                       ActivateFailNetworkingName;                                // 0x0080(0x0008) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     GlobalCurveTableName;                                      // 0x0088(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     GlobalAttributeMetaDataTableName;                          // 0x0098(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     GlobalAttributeSetDefaultsTableName;                       // 0x00A8(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash)
	struct FStringAssetReference                       GlobalGameplayCueManagerName;                              // 0x00B8(0x0010) (ZeroConstructor, Config)
	TArray<struct FString>                             GameplayCueNotifyPaths;                                    // 0x00C8(0x0010) (ZeroConstructor, Config)
	struct FStringAssetReference                       GameplayTagResponseTableName;                              // 0x00D8(0x0010) (ZeroConstructor, Config)
	class UGameplayTagReponseTable*                    GameplayTagResponseTable;                                  // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PredictTargetGameplayEffects;                              // 0x00F0(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WM0L[0x7];                                     // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveTable*                                 GlobalCurveTable;                                          // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveTable*                                 GlobalAttributeDefaultsTable;                              // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                                  GlobalAttributeMetaDataTable;                              // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayCueManager*                         GlobalGameplayCueManager;                                  // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RS1I[0x18];                                    // 0x0118(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemGlobals");
		return ptr;
	}



	void ToggleIgnoreAbilitySystemCosts();
	void ToggleIgnoreAbilitySystemCooldowns();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilitySystemInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAbilitySystemInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilitySystemTestPawn
// 0x0020 (FullSize[0x04D8] - InheritedSize[0x04B8])
class AAbilitySystemTestPawn : public ADefaultPawn
{
public:
	unsigned char                                      UnknownData_KLQR[0x18];                                    // 0x04B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                    // 0x04D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestPawn");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask
// 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
class UAbilityTask : public UGameplayTask
{
public:
	unsigned char                                      UnknownData_DM8U[0x10];                                    // 0x0058(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_MoveToLocation
// 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
class UAbilityTask_MoveToLocation : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnTargetLocationReached;                                   // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_F3L5[0x4];                                     // 0x0078(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     StartLocation;                                             // 0x007C(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	struct FVector                                     TargetLocation;                                            // 0x0088(0x000C) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	float                                              DurationOfMovement;                                        // 0x0094(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CQDV[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 LerpCurve;                                                 // 0x00A0(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UCurveVector*                                LerpCurveVector;                                           // 0x00A8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_MoveToLocation");
		return ptr;
	}



	class UAbilityTask_MoveToLocation* STATIC_MoveToLocation(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_NetworkSyncPoint
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnSync;                                                    // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_1CA9[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_NetworkSyncPoint");
		return ptr;
	}



	class UAbilityTask_NetworkSyncPoint* STATIC_WaitNetSync(class UObject* WorldContextObject, TEnumAsByte<GameplayAbilities_EAbilityTaskNetSyncType> SyncType);
	void OnSignalCallback();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_PlayMontageAndWait
// 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnComplete;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnInterrupted;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancelled;                                               // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_8SO1[0x28];                                    // 0x0098(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_PlayMontageAndWait");
		return ptr;
	}



	void OnMontageInterrupted();
	void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
	class UAbilityTask_PlayMontageAndWait* STATIC_CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_Repeat
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UAbilityTask_Repeat : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPerformAction;                                           // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnFinished;                                                // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_MJN3[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_Repeat");
		return ptr;
	}



	class UAbilityTask_Repeat* STATIC_RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_SpawnActor
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UAbilityTask_SpawnActor : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    Success;                                                   // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DidNotSpawn;                                               // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_TWK9[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_SpawnActor");
		return ptr;
	}



	class UAbilityTask_SpawnActor* STATIC_SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class);
	void FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_StartAbilityState
// 0x0038 (FullSize[0x00A0] - InheritedSize[0x0068])
class UAbilityTask_StartAbilityState : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnStateEnded;                                              // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStateInterrupted;                                        // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_VIH2[0x18];                                    // 0x0088(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_StartAbilityState");
		return ptr;
	}



	class UAbilityTask_StartAbilityState* STATIC_StartAbilityState(class UObject* WorldContextObject, const struct FName& StateName, bool bEndCurrentState);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityWorldReticle
// 0x0020 (FullSize[0x0448] - InheritedSize[0x0428])
class AGameplayAbilityWorldReticle : public AActor
{
public:
	struct FWorldReticleParameters                     Parameters;                                                // 0x0428(0x000C) (Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	bool                                               bFaceOwnerFlat;                                            // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               bSnapToTargetedActor;                                      // 0x0435(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               bIsTargetValid;                                            // 0x0436(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bIsTargetAnActor;                                          // 0x0437(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	class APlayerController*                           MasterPC;                                                  // 0x0438(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class AActor*                                      TargetingActor;                                            // 0x0440(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle");
		return ptr;
	}



	void SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value);
	void SetReticleMaterialParamFloat(const struct FName& ParamName, float Value);
	void OnValidTargetChanged(bool bNewValue);
	void OnTargetingAnActor(bool bNewValue);
	void OnParametersInitialized();
	void FaceTowardSource(bool bFaceIn2D);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityTargetActor
// 0x0174 (FullSize[0x059C] - InheritedSize[0x0428])
class AGameplayAbilityTargetActor : public AActor
{
public:
	bool                                               ShouldProduceTargetDataOnServer;                           // 0x0428(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JB3Q[0x7];                                     // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       StartLocation;                                             // 0x0430(0x0070) (BlueprintVisible, BlueprintReadOnly, Net, ContainsInstancedReference, ExposeOnSpawn)
	unsigned char                                      UnknownData_HATG[0x90];                                    // 0x04A0(0x0090) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class APlayerController*                           MasterPC;                                                  // 0x0530(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayAbility*                            OwningAbility;                                             // 0x0538(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDestroyOnConfirmation;                                    // 0x0540(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JEU8[0x7];                                     // 0x0541(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SourceActor;                                               // 0x0548(0x0008) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWorldReticleParameters                     ReticleParams;                                             // 0x0550(0x000C) (BlueprintVisible, ExposeOnSpawn)
	unsigned char                                      UnknownData_JMRI[0x4];                                     // 0x055C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      ReticleClass;                                              // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTargetDataFilterHandle             Filter;                                                    // 0x0568(0x0018) (BlueprintVisible, Net, ExposeOnSpawn)
	bool                                               bDebug;                                                    // 0x0580(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_HEO3[0x1B];                                    // 0x0581(0x001B) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor");
		return ptr;
	}



	void ConfirmTargeting();
	void CancelTargeting();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_VisualizeTargeting
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    TimeElapsed;                                               // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_QRLP[0x18];                                    // 0x0078(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_VisualizeTargeting");
		return ptr;
	}



	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration);
	class UAbilityTask_VisualizeTargeting* STATIC_VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const struct FName& TaskInstanceName, float Duration);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitAbilityActivate
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnActivate;                                                // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_GEAT[0x20];                                    // 0x0078(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityActivate");
		return ptr;
	}



	class UAbilityTask_WaitAbilityActivate* STATIC_WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce);
	void OnAbilityActivate(class UGameplayAbility* ActivatedAbility);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitAbilityCommit
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCommit;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_LREZ[0x20];                                    // 0x0078(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAbilityCommit");
		return ptr;
	}



	class UAbilityTask_WaitAbilityCommit* STATIC_WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce);
	void OnAbilityCommit(class UGameplayAbility* ActivatedAbility);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitAttributeChange
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_ZOUH[0x30];                                    // 0x0078(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitAttributeChange");
		return ptr;
	}



	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<GameplayAbilities_EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce);
	class UAbilityTask_WaitAttributeChange* STATIC_WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitCancel
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UAbilityTask_WaitCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_FCYE[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitCancel");
		return ptr;
	}



	class UAbilityTask_WaitCancel* STATIC_WaitCancel(class UObject* WorldContextObject);
	void OnLocalCancelCallback();
	void OnCancelCallback();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitConfirm
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UAbilityTask_WaitConfirm : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_YW3C[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirm");
		return ptr;
	}



	class UAbilityTask_WaitConfirm* STATIC_WaitConfirm(class UObject* WorldContextObject);
	void OnConfirmCallback(class UGameplayAbility* Ability);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitConfirmCancel
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnConfirm;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnCancel;                                                  // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_37A0[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitConfirmCancel");
		return ptr;
	}



	class UAbilityTask_WaitConfirmCancel* STATIC_WaitConfirmCancel(class UObject* WorldContextObject);
	void OnLocalConfirmCallback();
	void OnLocalCancelCallback();
	void OnConfirmCallback();
	void OnCancelCallback();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitDelay
// 0x0018 (FullSize[0x0080] - InheritedSize[0x0068])
class UAbilityTask_WaitDelay : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnFinish;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_ZDAF[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitDelay");
		return ptr;
	}



	class UAbilityTask_WaitDelay* STATIC_WaitDelay(class UObject* WorldContextObject, float Time);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
// 0x00C8 (FullSize[0x0130] - InheritedSize[0x0068])
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{
public:
	unsigned char                                      UnknownData_DBX2[0xC8];                                    // 0x0068(0x00C8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied");
		return ptr;
	}



	void OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
// 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                 // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_H190[0x8];                                     // 0x0140(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEffectApplied_Self* STATIC_WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
// 0x0018 (FullSize[0x0148] - InheritedSize[0x0130])
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{
public:
	struct FScriptMulticastDelegate                    OnApplied;                                                 // 0x0130(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_ZVW0[0x8];                                     // 0x0140(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEffectApplied_Target* STATIC_WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
// 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRemoved;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    InvalidHandle;                                             // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_Z9GB[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved");
		return ptr;
	}



	class UAbilityTask_WaitGameplayEffectRemoved* STATIC_WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle);
	void OnGameplayEffectRemoved();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitGameplayTag
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{
public:
	unsigned char                                      UnknownData_7EKD[0x20];                                    // 0x0068(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTag");
		return ptr;
	}



	void GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Added;                                                     // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagAdded");
		return ptr;
	}



	class UAbilityTask_WaitGameplayTagAdded* STATIC_WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{
public:
	struct FScriptMulticastDelegate                    Removed;                                                   // 0x0088(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitGameplayTagRemoved");
		return ptr;
	}



	class UAbilityTask_WaitGameplayTagRemoved* STATIC_WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitInputPress
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UAbilityTask_WaitInputPress : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnPress;                                                   // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_P64Y[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputPress");
		return ptr;
	}



	class UAbilityTask_WaitInputPress* STATIC_WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed);
	void OnPressCallback();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitInputRelease
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UAbilityTask_WaitInputRelease : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnRelease;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_XC6L[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitInputRelease");
		return ptr;
	}



	class UAbilityTask_WaitInputRelease* STATIC_WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased);
	void OnReleaseCallback();
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitMovementModeChange
// 0x0020 (FullSize[0x0088] - InheritedSize[0x0068])
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnChange;                                                  // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_TBJ4[0x10];                                    // 0x0078(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitMovementModeChange");
		return ptr;
	}



	void OnMovementModeChange(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode);
	class UAbilityTask_WaitMovementModeChange* STATIC_CreateWaitMovementModeChange(class UObject* WorldContextObject, TEnumAsByte<Engine_EMovementMode> NewMode);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitOverlap
// 0x0010 (FullSize[0x0078] - InheritedSize[0x0068])
class UAbilityTask_WaitOverlap : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnOverlap;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitOverlap");
		return ptr;
	}



	class UAbilityTask_WaitOverlap* STATIC_WaitForOverlap(class UObject* WorldContextObject);
	void OnOverlapCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void OnHitCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitTargetData
// 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
class UAbilityTask_WaitTargetData : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    ValidData;                                                 // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    Cancelled;                                                 // 0x0078(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_HNFY[0x20];                                    // 0x0088(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitTargetData");
		return ptr;
	}



	class UAbilityTask_WaitTargetData* STATIC_WaitTargetDataUsingActor(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor);
	class UAbilityTask_WaitTargetData* STATIC_WaitTargetData(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class);
	void OnTargetDataReplicatedCancelledCallback();
	void OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag);
	void OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data);
	void FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor);
	bool BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilityTask_WaitVelocityChange
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{
public:
	struct FScriptMulticastDelegate                    OnVelocityChage;                                           // 0x0068(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UMovementComponent*                          CachedMovementComponent;                                   // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_119N[0x10];                                    // 0x0080(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilityTask_WaitVelocityChange");
		return ptr;
	}



	class UAbilityTask_WaitVelocityChange* STATIC_CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.AbilitySystemTestAttributeSet
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UAbilitySystemTestAttributeSet : public UAttributeSet
{
public:
	float                                              MaxHealth;                                                 // 0x0030(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Health;                                                    // 0x0034(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Mana;                                                      // 0x0038(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxMana;                                                   // 0x003C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpellDamage;                                               // 0x0044(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PhysicalDamage;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CritChance;                                                // 0x004C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CritMultiplier;                                            // 0x0050(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ArmorDamageReduction;                                      // 0x0054(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DodgeChance;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LifeSteal;                                                 // 0x005C(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Strength;                                                  // 0x0060(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StackingAttribute1;                                        // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StackingAttribute2;                                        // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NoStackAttribute;                                          // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.AbilitySystemTestAttributeSet");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbility_CharacterJump
// 0x0000 (FullSize[0x04D8] - InheritedSize[0x04D8])
class UGameplayAbility_CharacterJump : public UGameplayAbility
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_CharacterJump");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbility_Montage
// 0x0038 (FullSize[0x0510] - InheritedSize[0x04D8])
class UGameplayAbility_Montage : public UGameplayAbility
{
public:
	class UAnimMontage*                                MontageToPlay;                                             // 0x04D8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x04E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionName;                                               // 0x04E4(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D8PD[0x4];                                     // 0x04EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UClass*>                              GameplayEffectClassesWhileAnimating;                       // 0x04F0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	TArray<class UGameplayEffect*>                     GameplayEffectsWhileAnimating;                             // 0x0500(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, EditConst)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbility_Montage");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityBlueprint
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class UGameplayAbilityBlueprint : public UBlueprint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprint");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass
// 0x0000 (FullSize[0x0228] - InheritedSize[0x0228])
class UGameplayAbilityBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityBlueprintGeneratedClass");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilitySet
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGameplayAbilitySet : public UDataAsset
{
public:
	TArray<struct FGameplayAbilityBindInfo>            Abilities;                                                 // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilitySet");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityTargetActor_Radius
// 0x0004 (FullSize[0x05A0] - InheritedSize[0x059C])
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{
public:
	unsigned char                                      UnknownData_L986[0x4];                                     // 0x059C(0x0004) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Radius");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityTargetActor_Trace
// 0x0014 (FullSize[0x05B0] - InheritedSize[0x059C])
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{
public:
	struct FCollisionProfileName                       TraceProfile;                                              // 0x059C(0x0008) (Edit, BlueprintVisible, Config, ExposeOnSpawn)
	bool                                               bTraceAffectsAimPitch;                                     // 0x05A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_ACN3[0xB];                                     // 0x05A5(0x000B) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_Trace");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
// 0x0020 (FullSize[0x05D0] - InheritedSize[0x05B0])
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{
public:
	float                                              CollisionRadius;                                           // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              CollisionHeight;                                           // 0x05B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_082U[0x18];                                    // 0x05B8(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_GroundTrace");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
// 0x0020 (FullSize[0x05F0] - InheritedSize[0x05D0])
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{
public:
	class UClass*                                      PlacedActorClass;                                          // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInterface*                          PlacedActorMaterial;                                       // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_36ZG[0x10];                                    // 0x05E0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
// 0x0000 (FullSize[0x05B0] - InheritedSize[0x05B0])
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
// 0x0018 (FullSize[0x0460] - InheritedSize[0x0448])
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{
public:
	class UCapsuleComponent*                           CollisionComponent;                                        // 0x0448(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActorComponent*>                     VisualizationComponents;                                   // 0x0450(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayCueManager
// 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
class UGameplayCueManager : public UDataAsset
{
public:
	class UGameplayCueSet*                             GlobalCueSet;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObjectLibrary*                              GameplayCueNotifyActorObjectLibrary;                       // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObjectLibrary*                              GameplayCueNotifyStaticObjectLibrary;                      // 0x0038(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStreamableManager                          StreamableManager;                                         // 0x0040(0x00C0) (Transient)
	unsigned char                                      UnknownData_H9EF[0x60];                                    // 0x0100(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayCuePendingExecute>          PendingExecuteCues;                                        // 0x0160(0x0010) (ZeroConstructor, ContainsInstancedReference, Protected)
	int                                                GameplayCueSendContextCount;                               // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5XHX[0xC];                                     // 0x0174(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueManager");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayCueNotify_Actor
// 0x0020 (FullSize[0x0448] - InheritedSize[0x0428])
class AGameplayCueNotify_Actor : public AActor
{
public:
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0428(0x0008) (Edit, DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                           // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	bool                                               bAutoDestroyOnRemove;                                      // 0x0438(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L1TM[0x3];                                     // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AutoDestroyDelay;                                          // 0x043C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOverride;                                                // 0x0440(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bUniqueInstancePerInstigator;                              // 0x0441(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bUniqueInstancePerSourceObject;                            // 0x0442(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4SKF[0x5];                                     // 0x0443(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Actor");
		return ptr;
	}



	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void OnOwnerDestroyed();
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayCueNotify_Static
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UGameplayCueNotify_Static : public UObject
{
public:
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0028(0x0008) (Edit, DisableEditOnInstance)
	struct FName                                       GameplayCueName;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash)
	bool                                               IsOverride;                                                // 0x0038(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F6AR[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_Static");
		return ptr;
	}



	bool WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	bool OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters);
	void K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayCueNotify_HitImpact
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{
public:
	class USoundBase*                                  Sound;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                             ParticleSystem;                                            // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueNotify_HitImpact");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayCueSet
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UGameplayCueSet : public UDataAsset
{
public:
	TArray<struct FGameplayCueNotifyData>              GameplayCueData;                                           // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_R0YV[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayCueSet");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectTemplate
// 0x0000 (FullSize[0x0578] - InheritedSize[0x0578])
class UGameplayEffectTemplate : public UGameplayEffect
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectTemplate");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectCalculation
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGameplayEffectCalculation : public UObject
{
public:
	TArray<struct FGameplayEffectAttributeCaptureDefinition> RelevantAttributesToCapture;                               // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, Protected)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectCalculation");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectExecutionCalculation
// 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
public:
	bool                                               bRequiresPassedInTags;                                     // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_YCUU[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExecutionCalculation");
		return ptr;
	}



	void Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayModMagnitudeCalculation
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayModMagnitudeCalculation");
		return ptr;
	}



	float CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectExtension
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UGameplayEffectExtension : public UObject
{
public:
	TArray<struct FGameplayAttribute>                  RelevantSourceAttributes;                                  // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FGameplayAttribute>                  RelevantTargetAttributes;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectExtension_LifestealTest
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UGameplayEffectExtension_LifestealTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             HealthRestoreGameplayEffect;                               // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_LifestealTest");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectExtension_ShieldTest
// 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
class UGameplayEffectExtension_ShieldTest : public UGameplayEffectExtension
{
public:
	class UGameplayEffect*                             ShieldRemoveGameplayEffect;                                // 0x0048(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectExtension_ShieldTest");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectUIData
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameplayEffectUIData : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayEffectUIData_TextOnly
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{
public:
	struct FText                                       Description;                                               // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	unsigned char                                      UnknownData_JYAK[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayEffectUIData_TextOnly");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.GameplayTagReponseTable
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UGameplayTagReponseTable : public UDataAsset
{
public:
	TArray<struct FGameplayTagResponseTableEntry>      Entries;                                                   // 0x0028(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_X8R2[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.GameplayTagReponseTable");
		return ptr;
	}



	void TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int Idx);
	void AfterRead();
	void BeforeDelete();

};

// Class GameplayAbilities.TickableAttributeSetInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTickableAttributeSetInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayAbilities.TickableAttributeSetInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
