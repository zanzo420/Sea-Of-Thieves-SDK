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

// BlueprintGeneratedClass BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C
// 0x0018 (FullSize[0x0468] - InheritedSize[0x0450])
class ABP_ShipStorageBarrel_Grog_C : public AInteractableBase
{
public:
	class UTankardRefillerComponent*                   TankardRefiller;                                           // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UInteractableComponent*                      Interactable;                                              // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShipStorageBarrel_Grog.BP_ShipStorageBarrel_Grog_C");
		return ptr;
	}



	struct FVector GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius);
	bool ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition);
	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
