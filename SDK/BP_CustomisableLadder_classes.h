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

// BlueprintGeneratedClass BP_CustomisableLadder.BP_CustomisableLadder_C
// 0x0088 (FullSize[0x0698] - InheritedSize[0x0610])
class ABP_CustomisableLadder_C : public ALadder
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInteractableComponent*                      InteractableComponent;                                     // 0x0618(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Ladder_Cap;                                                // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	struct FCustomisableLadderDefinitionStruct         LadderCustomisationDefinition;                             // 0x0628(0x0020) (Edit, BlueprintVisible)
	TArray<struct FVector>                             OffTopSplineComponentPositions;                            // 0x0648(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             OnTopSplineComponentPositions;                             // 0x0658(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Steps;                                                     // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OKSM[0x4];                                     // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material_Override;                                         // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              StepHeight;                                                // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Interactable_Position;                                     // 0x067C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Interactable_Scale;                                        // 0x0688(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                Minimum_Steps;                                             // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomisableLadder.BP_CustomisableLadder_C");
		return ptr;
	}



	struct FDockableInfo GetDockableInfo();
	void Construct_Ladder();
	void Get_Total_Height_Before_Cap(float* Height);
	void Get_Steps(int* Num_Steps);
	struct FTransform GetBottomLadderRungTransform();
	struct FTransform GetTopLadderRungTransform();
	void Get_World_Loc_at_Height_Along_Z(float Relative_Z, struct FVector* Return_Value);
	void SetupSpline(class USplineComponent* Spline_Component, TArray<struct FVector>* Positions);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CustomisableLadder(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
