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

// Function BP_Seagull01_32POI_Circling_Shipwreck.BP_Seagull01_32POI_Circling_Shipwreck_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Seagull01_32POI_Circling_Shipwreck_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Seagull01_32POI_Circling_Shipwreck.BP_Seagull01_32POI_Circling_Shipwreck_C.UserConstructionScript");

	ABP_Seagull01_32POI_Circling_Shipwreck_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Seagull01_32POI_Circling_Shipwreck_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WwiseEmitter2, UWwiseEmitterComponent);
	READ_PTR_FULL(WwiseEmitter1, UWwiseEmitterComponent);
	READ_PTR_FULL(WwiseEmitter, UWwiseEmitterComponent);
	READ_PTR_FULL(wil_seagull_01_ProcAnim32, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_Seagull01_32POI_Circling_Shipwreck_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WwiseEmitter2);
	DELE_PTR_FULL(WwiseEmitter1);
	DELE_PTR_FULL(WwiseEmitter);
	DELE_PTR_FULL(wil_seagull_01_ProcAnim32);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
