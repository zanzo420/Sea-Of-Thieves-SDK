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

// BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C
// 0x0008 (FullSize[0x1570] - InheritedSize[0x1568])
class ABP_OnlineAthenaPlayerController_C : public AOnlineAthenaPlayerController
{
public:
	class UBP_Component_Tutorial2019_C*                VisitShopkeepersTutorialComponent;                         // 0x1568(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_OnlineAthenaPlayerController.BP_OnlineAthenaPlayerController_C");
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
