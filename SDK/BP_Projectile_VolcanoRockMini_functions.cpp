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

// Function BP_Projectile_VolcanoRockMini.BP_Projectile_VolcanoRockMini_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Projectile_VolcanoRockMini_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Projectile_VolcanoRockMini.BP_Projectile_VolcanoRockMini_C.UserConstructionScript");

	ABP_Projectile_VolcanoRockMini_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Projectile_VolcanoRockMini_C::AfterRead()
{
	AVolcanicRock::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Collision, USphereComponent);
}

void ABP_Projectile_VolcanoRockMini_C::BeforeDelete()
{
	AVolcanicRock::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Collision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
