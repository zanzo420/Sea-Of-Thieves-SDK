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

// Function BP_LotS_reward038.BP_LotS_reward038_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LotS_reward038_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_LotS_reward038.BP_LotS_reward038_C.UserConstructionScript");

	ABP_LotS_reward038_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LotS_reward038_C::AfterRead()
{
	AModalInteractionProxy::AfterRead();

	READ_PTR_FULL(InspectDialog, UNPCDialogComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_LotS_reward038_C::BeforeDelete()
{
	AModalInteractionProxy::BeforeDelete();

	DELE_PTR_FULL(InspectDialog);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
