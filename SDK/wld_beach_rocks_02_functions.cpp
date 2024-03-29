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

// Function wld_beach_rocks_02.wld_beach_rocks_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_beach_rocks_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_beach_rocks_02.wld_beach_rocks_02_C.UserConstructionScript");

	Awld_beach_rocks_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_beach_rocks_02_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_rock_large_01__c1, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__b, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__c1, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__c, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__c, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__d, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__b, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__a, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_xlarge_04_a, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_medium_01__e, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awld_beach_rocks_02_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_rock_large_01__c1);
	DELE_PTR_FULL(wld_rock_small_01__b);
	DELE_PTR_FULL(wld_rock_small_01__c1);
	DELE_PTR_FULL(wld_rock_small_01__c);
	DELE_PTR_FULL(wld_rock_large_01__c);
	DELE_PTR_FULL(wld_rock_large_01__d);
	DELE_PTR_FULL(wld_rock_large_01__b);
	DELE_PTR_FULL(wld_rock_large_01__a);
	DELE_PTR_FULL(wld_rock_xlarge_04_a);
	DELE_PTR_FULL(wld_rock_medium_01__e);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
