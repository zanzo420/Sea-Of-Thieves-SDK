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

// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_AggressiveGhostShip_Portal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.UserConstructionScript");

	ABP_AggressiveGhostShip_Portal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_AggressiveGhostShip_Portal_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ReceiveBeginPlay");

	ABP_AggressiveGhostShip_Portal_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartOpening
// (Event, Protected, BlueprintEvent)
void ABP_AggressiveGhostShip_Portal_C::StartOpening()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartOpening");

	ABP_AggressiveGhostShip_Portal_C_StartOpening_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartClosing
// (Event, Protected, BlueprintEvent)
void ABP_AggressiveGhostShip_Portal_C::StartClosing()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.StartClosing");

	ABP_AggressiveGhostShip_Portal_C_StartClosing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.End
// (Event, Protected, BlueprintEvent)
void ABP_AggressiveGhostShip_Portal_C::End()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.End");

	ABP_AggressiveGhostShip_Portal_C_End_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ExecuteUbergraph_BP_AggressiveGhostShip_Portal
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_AggressiveGhostShip_Portal_C::ExecuteUbergraph_BP_AggressiveGhostShip_Portal(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_AggressiveGhostShip_Portal.BP_AggressiveGhostShip_Portal_C.ExecuteUbergraph_BP_AggressiveGhostShip_Portal");

	ABP_AggressiveGhostShip_Portal_C_ExecuteUbergraph_BP_AggressiveGhostShip_Portal_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_AggressiveGhostShip_Portal_C::AfterRead()
{
	AAggressiveGhostShipPortal::AfterRead();

	READ_PTR_FULL(Portal_VFX, UParticleSystemComponent);
	READ_PTR_FULL(WwiseEmitter, UWwiseEmitterComponent);
	READ_PTR_FULL(Portal, UStaticMeshComponent);
	READ_PTR_FULL(shroud, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void ABP_AggressiveGhostShip_Portal_C::BeforeDelete()
{
	AAggressiveGhostShipPortal::BeforeDelete();

	DELE_PTR_FULL(Portal_VFX);
	DELE_PTR_FULL(WwiseEmitter);
	DELE_PTR_FULL(Portal);
	DELE_PTR_FULL(shroud);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
