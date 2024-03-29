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

// Function BP_OutpostCrate_bld_shop_wood_box_01_a.BP_OutpostCrate_bld_shop_wood_box_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_OutpostCrate_bld_shop_wood_box_01_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_OutpostCrate_bld_shop_wood_box_01_a.BP_OutpostCrate_bld_shop_wood_box_01_a_C.UserConstructionScript");

	ABP_OutpostCrate_bld_shop_wood_box_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_OutpostCrate_bld_shop_wood_box_01_a_C::AfterRead()
{
	AStorageContainer::AfterRead();

	READ_PTR_FULL(Replenishable, UReplenishableComponent);
	READ_PTR_FULL(IslandTelemetrySubject, UIslandTelemetrySubjectComponent);
	READ_PTR_FULL(StorageContainer, UStorageContainerComponent);
}

void ABP_OutpostCrate_bld_shop_wood_box_01_a_C::BeforeDelete()
{
	AStorageContainer::BeforeDelete();

	DELE_PTR_FULL(Replenishable);
	DELE_PTR_FULL(IslandTelemetrySubject);
	DELE_PTR_FULL(StorageContainer);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
