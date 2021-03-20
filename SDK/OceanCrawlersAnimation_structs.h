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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerLocomotionAnimationDataStructure
// 0x0018
struct FOceanCrawlerLocomotionAnimationDataStructure
{
	class UAnimSequence*                               Idle;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                               LocomotionOutOf;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpace*                                 Locomotion;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OceanCrawlersAnimation.OceanCrawlerAnimationDataStructure
// 0x0030
struct FOceanCrawlerAnimationDataStructure
{
	struct FOceanCrawlerLocomotionAnimationDataStructure LocomotionData;                                            // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	class UCustomAnimationMontageDefinitionListingDataAsset* MontageData;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAnimationWeaponDataAsset*             AttackAnimations;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitReactionAnimationData                   HitReactionData;                                           // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
