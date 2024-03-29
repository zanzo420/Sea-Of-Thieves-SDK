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

// Function BP_Campaign032_VaultRaiders_BilgeRats_NPC.BP_Campaign032_VaultRaiders_BilgeRats_NPC_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Campaign032_VaultRaiders_BilgeRats_NPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campaign032_VaultRaiders_BilgeRats_NPC.BP_Campaign032_VaultRaiders_BilgeRats_NPC_C.UserConstructionScript");

	ABP_Campaign032_VaultRaiders_BilgeRats_NPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Campaign032_VaultRaiders_BilgeRats_NPC.BP_Campaign032_VaultRaiders_BilgeRats_NPC_C.ExecuteUbergraph_BP_Campaign032_VaultRaiders_BilgeRats_NPC
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Campaign032_VaultRaiders_BilgeRats_NPC_C::ExecuteUbergraph_BP_Campaign032_VaultRaiders_BilgeRats_NPC(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Campaign032_VaultRaiders_BilgeRats_NPC.BP_Campaign032_VaultRaiders_BilgeRats_NPC_C.ExecuteUbergraph_BP_Campaign032_VaultRaiders_BilgeRats_NPC");

	ABP_Campaign032_VaultRaiders_BilgeRats_NPC_C_ExecuteUbergraph_BP_Campaign032_VaultRaiders_BilgeRats_NPC_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Campaign032_VaultRaiders_BilgeRats_NPC_C::AfterRead()
{
	ACompanyShopkeeper::AfterRead();

	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(Capsule, UCapsuleComponent);
	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
}

void ABP_Campaign032_VaultRaiders_BilgeRats_NPC_C::BeforeDelete()
{
	ACompanyShopkeeper::BeforeDelete();

	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(Capsule);
	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
