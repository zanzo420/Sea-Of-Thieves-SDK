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

// Class OceanCrawlersAnimation.OceanCrawlerAnimationData
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UOceanCrawlerAnimationData : public UAnimationData
{
public:
	struct FOceanCrawlerAnimationDataStructure         OceanCrawlerAnimationDataStructure;                        // 0x0028(0x0030) (Edit, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance
// 0x0250 (FullSize[0x0690] - InheritedSize[0x0440])
class UOceanCrawlerAnimationInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData_6LXK[0x8];                                     // 0x0440(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FOceanCrawlerAnimationDataStructure         LoadedAnimations;                                          // 0x0448(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FActorVelocityData                          MovementData;                                              // 0x0478(0x0018) (BlueprintVisible, BlueprintReadOnly)
	struct FAthenaAnimationWeapon                      AttackAnims;                                               // 0x0490(0x00B8) (BlueprintVisible, BlueprintReadOnly)
	bool                                               UseDefaultAnimations;                                      // 0x0548(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AnimationsLoaded;                                          // 0x0549(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F3SK[0x6];                                     // 0x054A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCustomAnimationMontageStateMachine         MontagePlayer;                                             // 0x0550(0x00D8)
	struct FHitReactionAnimationState                  HitReacts;                                                 // 0x0628(0x0028)
	unsigned char                                      UnknownData_MGRX[0x40];                                    // 0x0650(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OceanCrawlersAnimation.OceanCrawlerAnimationInstance");
		return ptr;
	}



	void ClearActiveAttack();
	void BeginNewAttack();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
