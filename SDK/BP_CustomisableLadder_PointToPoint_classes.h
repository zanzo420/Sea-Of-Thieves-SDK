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

// BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C
// 0x0024 (FullSize[0x06BC] - InheritedSize[0x0698])
class ABP_CustomisableLadder_PointToPoint_C : public ABP_CustomisableLadder_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Ladder_Roll;                                               // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Ladder_Top_Target;                                         // 0x06A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Ladder_Bottom_Target;                                      // 0x06B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_CustomisableLadder_PointToPoint.BP_CustomisableLadder_PointToPoint_C");
		return ptr;
	}



	void Orientate_Ladder(const struct FVector& Point_A, const struct FVector& Point_B);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CustomisableLadder_PointToPoint(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
