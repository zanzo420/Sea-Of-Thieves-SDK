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

// Function BP_GlitterbeardLoreBook_MyMaidenVoyage.BP_GlitterbeardLoreBook_MyMaidenVoyage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GlitterbeardLoreBook_MyMaidenVoyage_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GlitterbeardLoreBook_MyMaidenVoyage.BP_GlitterbeardLoreBook_MyMaidenVoyage_C.UserConstructionScript");

	ABP_GlitterbeardLoreBook_MyMaidenVoyage_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_GlitterbeardLoreBook_MyMaidenVoyage_C::AfterRead()
{
	AModalInteractionProxy::AfterRead();

	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(Books, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_GlitterbeardLoreBook_MyMaidenVoyage_C::BeforeDelete()
{
	AModalInteractionProxy::BeforeDelete();

	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(Books);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
