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

// Function BP_Anim_Bucket.BP_Anim_Bucket_C.ExecuteUbergraph_BP_Anim_Bucket
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Anim_Bucket_C::ExecuteUbergraph_BP_Anim_Bucket(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Anim_Bucket.BP_Anim_Bucket_C.ExecuteUbergraph_BP_Anim_Bucket");

	UBP_Anim_Bucket_C_ExecuteUbergraph_BP_Anim_Bucket_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Anim_Bucket_C::AfterRead()
{
	UWieldableItemAnimationInstance::AfterRead();

}

void UBP_Anim_Bucket_C::BeforeDelete()
{
	UWieldableItemAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
