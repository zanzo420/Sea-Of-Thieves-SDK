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

// Function BP_WaterProjectile_NoSplash.BP_WaterProjectile_NoSplash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WaterProjectile_NoSplash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_WaterProjectile_NoSplash.BP_WaterProjectile_NoSplash_C.UserConstructionScript");

	ABP_WaterProjectile_NoSplash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_WaterProjectile_NoSplash_C::AfterRead()
{
	ABP_WaterProjectile_C::AfterRead();

}

void ABP_WaterProjectile_NoSplash_C::BeforeDelete()
{
	ABP_WaterProjectile_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
