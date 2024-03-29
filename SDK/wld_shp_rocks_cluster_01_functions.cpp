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

// Function wld_shp_rocks_cluster_01.wld_shp_rocks_cluster_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awld_shp_rocks_cluster_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wld_shp_rocks_cluster_01.wld_shp_rocks_cluster_01_C.UserConstructionScript");

	Awld_shp_rocks_cluster_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awld_shp_rocks_cluster_01_C::AfterRead()
{
	ABP_Placement_HeightDrop_C::AfterRead();

	READ_PTR_FULL(wld_rock_xlarge_04_b, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__e, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__d, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_small_01__a, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_medium_01__b, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_medium_01__a, UStaticMeshComponent);
	READ_PTR_FULL(wld_rock_large_01__a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_cavern_roof_rock_02, UStaticMeshComponent);
	READ_PTR_FULL(Scene, USceneComponent);
}

void Awld_shp_rocks_cluster_01_C::BeforeDelete()
{
	ABP_Placement_HeightDrop_C::BeforeDelete();

	DELE_PTR_FULL(wld_rock_xlarge_04_b);
	DELE_PTR_FULL(wld_rock_large_01__e);
	DELE_PTR_FULL(wld_rock_small_01__d);
	DELE_PTR_FULL(wld_rock_small_01__a);
	DELE_PTR_FULL(wld_rock_medium_01__b);
	DELE_PTR_FULL(wld_rock_medium_01__a);
	DELE_PTR_FULL(wld_rock_large_01__a);
	DELE_PTR_FULL(wsp_cavern_roof_rock_02);
	DELE_PTR_FULL(Scene);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
