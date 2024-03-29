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

// Function BP_TT_RitualBone.BP_TT_RitualBone_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TT_RitualBone_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_TT_RitualBone.BP_TT_RitualBone_C.UserConstructionScript");

	ABP_TT_RitualBone_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TT_RitualBone_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BoneMesh, UStaticMeshComponent);
}

void ABP_TT_RitualBone_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BoneMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
