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

// BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C
// 0x0008 (FullSize[0x0AC8] - InheritedSize[0x0AC0])
class ABP_Cutlass_Item_C : public APlayerMeleeWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Cutlass_Item.BP_Cutlass_Item_C");
		return ptr;
	}



	void DoBlockEffect();
	void UserConstructionScript();
	void OnBlockedAttack(const struct FEventBlocked& Event);
	void ExecuteUbergraph_BP_Cutlass_Item(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
