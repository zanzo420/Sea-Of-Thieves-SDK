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

// Function BP_Cannon.BP_Cannon_C.GetDockableInfo
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDockableInfo           ReturnValue                    (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_Cannon_C::GetDockableInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.GetDockableInfo");

	ABP_Cannon_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Cannon.BP_Cannon_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Cannon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.UserConstructionScript");

	ABP_Cannon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCannonDescAsset*        CannonDesc                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Cannon_C::OnCannonDescLoaded(class UCannonDescAsset* CannonDesc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.OnCannonDescLoaded");

	ABP_Cannon_C_OnCannonDescLoaded_Params params;
	params.CannonDesc = CannonDesc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Cannon_C::ExecuteUbergraph_BP_Cannon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.ExecuteUbergraph_BP_Cannon");

	ABP_Cannon_C_ExecuteUbergraph_BP_Cannon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Cannon_C::AfterRead()
{
	ACannon::AfterRead();

	READ_PTR_FULL(GroupedInteractableArea, UGroupedInteractableAreaComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(Collision, UStaticMeshComponent);
}

void ABP_Cannon_C::BeforeDelete()
{
	ACannon::BeforeDelete();

	DELE_PTR_FULL(GroupedInteractableArea);
	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(Collision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
