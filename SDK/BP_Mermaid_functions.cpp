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

// Function BP_Mermaid.BP_Mermaid_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Mermaid_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Mermaid.BP_Mermaid_C.UserConstructionScript");

	ABP_Mermaid_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Mermaid_C::AfterRead()
{
	AMermaid::AfterRead();

	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
	READ_PTR_FULL(PlayerHits, UCapsuleComponent);
	READ_PTR_FULL(SkeletalMesh, USkeletalMeshComponent);
	READ_PTR_FULL(WorldHits, UCapsuleComponent);
}

void ABP_Mermaid_C::BeforeDelete()
{
	AMermaid::BeforeDelete();

	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
	DELE_PTR_FULL(PlayerHits);
	DELE_PTR_FULL(SkeletalMesh);
	DELE_PTR_FULL(WorldHits);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
