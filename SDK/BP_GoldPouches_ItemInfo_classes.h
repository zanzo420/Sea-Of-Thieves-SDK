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

// BlueprintGeneratedClass BP_GoldPouches_ItemInfo.BP_GoldPouches_ItemInfo_C
// 0x0010 (FullSize[0x05B8] - InheritedSize[0x05A8])
class ABP_GoldPouches_ItemInfo_C : public ARewardableItemInfo
{
public:
	class UCollectorsChestPickUpFromSlotRewardComponent* CollectorsChestPickUpFromSlotReward;                       // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x05B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GoldPouches_ItemInfo.BP_GoldPouches_ItemInfo_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
