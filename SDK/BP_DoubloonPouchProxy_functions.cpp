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

// Function BP_DoubloonPouchProxy.BP_DoubloonPouchProxy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DoubloonPouchProxy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_DoubloonPouchProxy.BP_DoubloonPouchProxy_C.UserConstructionScript");

	ABP_DoubloonPouchProxy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DoubloonPouchProxy_C::AfterRead()
{
	ARewardPouchItemProxy::AfterRead();

	READ_PTR_FULL(Glint, UStaticMeshComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_DoubloonPouchProxy_C::BeforeDelete()
{
	ARewardPouchItemProxy::BeforeDelete();

	DELE_PTR_FULL(Glint);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
