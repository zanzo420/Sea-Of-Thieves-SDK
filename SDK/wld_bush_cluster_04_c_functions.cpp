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

// Function wld_bush_cluster_04_c.wld_bush_cluster_04_c_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_bush_cluster_04_c_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_bush_cluster_04_c.wld_bush_cluster_04_c_C.UserConstructionScript");

	Awld_bush_cluster_04_c_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_bush_cluster_04_c_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_bush_02_b_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_bush_03_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_bush_banana_01_b_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_bush_02_a_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awld_bush_cluster_04_c_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_bush_02_b_01);
	DELE_PTR_FULL(wld_bush_03_a_01);
	DELE_PTR_FULL(wld_bush_banana_01_b_01);
	DELE_PTR_FULL(wld_bush_02_a_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
