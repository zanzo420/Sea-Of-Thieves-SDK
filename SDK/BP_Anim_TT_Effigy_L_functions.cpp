﻿// Name: SeaOfThieves, Version: 2.0.23

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BP_Anim_TT_Effigy_L.BP_Anim_TT_Effigy_L_C.ExecuteUbergraph_BP_Anim_TT_Effigy_L
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_TT_Effigy_L_C::ExecuteUbergraph_BP_Anim_TT_Effigy_L(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_TT_Effigy_L.BP_Anim_TT_Effigy_L_C.ExecuteUbergraph_BP_Anim_TT_Effigy_L");

	UBP_Anim_TT_Effigy_L_C_ExecuteUbergraph_BP_Anim_TT_Effigy_L_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_TT_Effigy_L_C::AfterRead()
{
	UAnimatedCosmeticItemAnimationInstance::AfterRead();

}

void UBP_Anim_TT_Effigy_L_C::BeforeDelete()
{
	UAnimatedCosmeticItemAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
