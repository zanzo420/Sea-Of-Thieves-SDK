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

// Class EmissaryLevel.EmissaryActionRewardBoostComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UEmissaryActionRewardBoostComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_39M6[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryActionRewardBoostComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryActiveTableVisualiserComponent
// 0x0090 (FullSize[0x0158] - InheritedSize[0x00C8])
class UEmissaryActiveTableVisualiserComponent : public UActorComponent
{
public:
	class UClass*                                      TargetCompany;                                             // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FMaterialVisualisation>              MaterialChanges;                                           // 0x00D0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_0HUX[0x10];                                    // 0x00E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLightVisualisation>                 LightChanges;                                              // 0x00F0(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_04VT[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FParticleVisualisation>              ParticleChanges;                                           // 0x0110(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_JQOQ[0x38];                                    // 0x0120(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryActiveTableVisualiserComponent");
		return ptr;
	}



	void OnControllerEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryEntitlementCategory
// 0x0000 (FullSize[0x0080] - InheritedSize[0x0080])
class UEmissaryEntitlementCategory : public UItemCategory
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementCategory");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryEntitlementDesc
// 0x0000 (FullSize[0x00D8] - InheritedSize[0x00D8])
class UEmissaryEntitlementDesc : public UEntitlementDesc
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryEntitlementDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryFlotsamItemInfo
// 0x0018 (FullSize[0x07A0] - InheritedSize[0x0788])
class AEmissaryFlotsamItemInfo : public ABootyItemInfo
{
public:
	struct FCompanySpecificBootyReward                 HandInOwnFlotsamReward;                                    // 0x0788(0x0018) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemInfo");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent
// 0x0084 (FullSize[0x04C0] - InheritedSize[0x043C])
class UEmissaryFlotsamItemSpawnComponent : public UItemSpawnComponent
{
public:
	unsigned char                                      UnknownData_U3O8[0x4];                                     // 0x043C(0x0004) Fix Super Size
	unsigned char                                      UnknownData_105W[0x80];                                    // 0x0440(0x0080) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamItemSpawnComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent
// 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
class UEmissaryFlotsamTooltipCustomizerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_HM2C[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               CheckForDelivery;                                          // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CheckForPickup;                                            // 0x00D9(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3TWV[0x16];                                    // 0x00DA(0x0016) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryFlotsamTooltipCustomizerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryLevelSettingsAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UEmissaryLevelSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryLevelEntry>                 EmissaryLevelData;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FEmissaryPointBoostMultipliers              BoostMultiplers;                                           // 0x0038(0x0008) (Edit, DisableEditOnInstance)
	struct FEmissaryFlagMeshReferences                 DefaultEmissaryFlagAssetReferences;                        // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	uint32_t                                           NumberOfCustomisedShipPartsToGainBoost;                    // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J7LW[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelSettingsAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryLevelService
// 0x02B0 (FullSize[0x06D8] - InheritedSize[0x0428])
class AEmissaryLevelService : public AActor
{
public:
	unsigned char                                      UnknownData_YYCF[0x68];                                    // 0x0428(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEmissaryLevelSettingsAsset*                 Settings;                                                  // 0x0490(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UEmissaryRewardSettingsAsset*                RewardSettings;                                            // 0x0498(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SJ2G[0x238];                                   // 0x04A0(0x0238) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryLevelService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryMaxRankQuestProvider
// 0x0098 (FullSize[0x0160] - InheritedSize[0x00C8])
class UEmissaryMaxRankQuestProvider : public UActorComponent
{
public:
	class UClass*                                      MaxRankQuestNotificationID;                                // 0x00C8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Athena_EActionDisplayPriority>         MaxRankQuestToolTipPriority;                               // 0x00D0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z4WC[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       StartMaxRankQuestToolTipText;                              // 0x00D8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_CONK[0x20];                                    // 0x00D1(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       CannotStartMaxRankQuestToolTipText;                        // 0x0110(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_016B[0x20];                                    // 0x0110(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FStringAssetReference                       QuestDesc;                                                 // 0x0148(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      Company;                                                   // 0x0158(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryMaxRankQuestProvider");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryParticipantComponent
// 0x0038 (FullSize[0x0100] - InheritedSize[0x00C8])
class UEmissaryParticipantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_AYTI[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                EmissaryLevel;                                             // 0x00D0(0x0004) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              EmissaryLevelProgress;                                     // 0x00D4(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FName                                       AffiliatedCompany;                                         // 0x00D8(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               IsAtMaxRank;                                               // 0x00E0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               IsEmissaryMaxRankQuestBeenActivatedThisSession;            // 0x00E1(0x0001) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_8JCL[0x16];                                    // 0x00E2(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       VotedCompany;                                              // 0x00F8(0x0008) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryParticipantComponent");
		return ptr;
	}



	void OnRep_EmissaryLevel();
	void OnRep_AffiliatedCompany(const struct FName& PreviousId);
	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryRepresentationMeshComponent
// 0x0008 (FullSize[0x0590] - InheritedSize[0x0588])
class UEmissaryRepresentationMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_8XVL[0x8];                                     // 0x0588(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRepresentationMeshComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryRewardSettingsAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UEmissaryRewardSettingsAsset : public UDataAsset
{
public:
	TArray<struct FEmissaryRewardEntry>                EmissaryRewardData;                                        // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              PlayerKilledExpiryTime;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G531[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryRewardSettingsAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent
// 0x0078 (FullSize[0x0300] - InheritedSize[0x0288])
class UEmissaryShipAffiliationTrackerComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_ZBMH[0x8];                                     // 0x0288(0x0008) Fix Super Size
	class UClass*                                      TrackedCompany;                                            // 0x0290(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TAssetPtr<class UClass>                            EmissaryRepresentationMesh;                                // 0x0298(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_59E8[0x4];                                     // 0x0298(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<struct FTransform>                          EmissaryRepresentationTransforms;                          // 0x02B8(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>                EmissaryRepresentationMeshes;                              // 0x02C8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference)
	class UClass*                                      LoadedEmissaryRepresentationMesh;                          // 0x02D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UDUK[0x20];                                    // 0x02E0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryShipAffiliationTrackerComponent");
		return ptr;
	}



	void OnRep_EmissaryCount();
	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryVotingService
// 0x00F8 (FullSize[0x0520] - InheritedSize[0x0428])
class AEmissaryVotingService : public AActor
{
public:
	unsigned char                                      UnknownData_ZUNM[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FCrewMemberVotes>                    Votes;                                                     // 0x0438(0x0010) (Net, ZeroConstructor, Transient, RepNotify)
	class UBoxedRpcDispatcherComponent*                RpcDispatcher;                                             // 0x0448(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z7I8[0xD0];                                    // 0x0450(0x00D0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVotingService");
		return ptr;
	}



	void OnRep_Votes();
	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase
// 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
class UEmissaryVoyageInlineVoteConsumerBase : public UVoteConsumerInlineBase
{
public:
	class UEmissaryVoyageVoteValidatorBase*            Validator;                                                 // 0x0030(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3UT4[0x30];                                    // 0x0038(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       VoyageCinematicHeader;                                     // 0x0068(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, Protected)
	unsigned char                                      UnknownData_AX3J[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       VoyageCinematicTag;                                        // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AONH[0x48];                                    // 0x00A8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      OwningActor;                                               // 0x00F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageInlineVoteConsumerBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer
// 0x01A0 (FullSize[0x0298] - InheritedSize[0x00F8])
class UStartEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                    // 0x00F8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_MNNG[0x20];                                    // 0x00F8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVote;                                    // 0x0130(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_QGRK[0x20];                                    // 0x0130(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;          // 0x0168(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_JZZN[0x20];                                    // 0x0168(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonNoEmissaryEntitlement;         // 0x01A0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_W8KV[0x20];                                    // 0x01A0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonHasActiveVoteForDifferentCompany; // 0x01D8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_RRC8[0x20];                                    // 0x01D8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingRemoveVote;                                  // 0x0210(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_0FEA[0x20];                                    // 0x0210(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantRemoveVote;                              // 0x0248(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_T0JL[0x20];                                    // 0x0248(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_00NS[0x18];                                    // 0x0280(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer
// 0x0168 (FullSize[0x0260] - InheritedSize[0x00F8])
class UStopEmissaryVoyageInlineVoteConsumer : public UEmissaryVoyageInlineVoteConsumerBase
{
public:
	struct FText                                       EmissaryVotingCastVote;                                    // 0x00F8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_HM8M[0x20];                                    // 0x00F8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVote;                                    // 0x0130(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_HH5S[0x20];                                    // 0x0130(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonCrewShipOutsideRange;          // 0x0168(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_P7ZE[0x20];                                    // 0x0168(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantVoteReasonActiveForDifferentCompany;     // 0x01A0(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_4GHC[0x20];                                    // 0x01A0(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingRemoveVote;                                  // 0x01D8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_MH1T[0x20];                                    // 0x01D8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       EmissaryVotingCantRemoveVote;                              // 0x0210(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_LOQH[0x20];                                    // 0x0210(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_INW0[0x18];                                    // 0x0248(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteConsumer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.EmissaryVoyageVoteValidatorBase
// 0x0078 (FullSize[0x00A8] - InheritedSize[0x0030])
class UEmissaryVoyageVoteValidatorBase : public UVoteValidatorInlineBase
{
public:
	class UClass*                                      TargetCompany;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      RequiredEntitlement;                                       // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6GUT[0x60];                                    // 0x0040(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UEmissaryVoyageInlineVoteConsumerBase*       Consumer;                                                  // 0x00A0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.EmissaryVoyageVoteValidatorBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UStartEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StartEmissaryVoyageInlineVoteValidator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator
// 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
class UStopEmissaryVoyageInlineVoteValidator : public UEmissaryVoyageVoteValidatorBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.StopEmissaryVoyageInlineVoteValidator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EmissaryLevel.IsEmissaryStatCondition
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UIsEmissaryStatCondition : public UStatCondition
{
public:
	class UClass*                                      RequiredEmissaryCompany;                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               RequiresMaxEmissaryLevel;                                  // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MGFJ[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EmissaryLevel.IsEmissaryStatCondition");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
