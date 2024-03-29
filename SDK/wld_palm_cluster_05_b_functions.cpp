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

// Function wld_palm_cluster_05_b.wld_palm_cluster_05_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_palm_cluster_05_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_palm_cluster_05_b.wld_palm_cluster_05_b_C.UserConstructionScript");

	Awld_palm_cluster_05_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_palm_cluster_05_b_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_tree_palm_02_b_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_bush_banana_01_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_bush_03_a_01, UStaticMeshComponent);
	READ_PTR_FULL(wld_tree_palm_02_a_01, UStaticMeshComponent);
	READ_PTR_FULL(NonVagueNonUniqueLandmark, UNonVagueNonUniqueLandmarkComponent);
	READ_PTR_FULL(wld_bush_01_b_01, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awld_palm_cluster_05_b_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_tree_palm_02_b_01);
	DELE_PTR_FULL(wld_bush_banana_01_a_01);
	DELE_PTR_FULL(wld_bush_03_a_01);
	DELE_PTR_FULL(wld_tree_palm_02_a_01);
	DELE_PTR_FULL(NonVagueNonUniqueLandmark);
	DELE_PTR_FULL(wld_bush_01_b_01);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
