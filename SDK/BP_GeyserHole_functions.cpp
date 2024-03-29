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

// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeOutParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GeyserHole_C::SetFadeOutParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.SetFadeOutParameters");

	ABP_GeyserHole_C_SetFadeOutParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GeyserHole.BP_GeyserHole_C.SetFadeInParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FadeTime                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GeyserHole_C::SetFadeInParameters(float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.SetFadeInParameters");

	ABP_GeyserHole_C_SetFadeInParameters_Params params;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GeyserHole.BP_GeyserHole_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_GeyserHole_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.UserConstructionScript");

	ABP_GeyserHole_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GeyserHole.BP_GeyserHole_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_GeyserHole_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.ReceiveBeginPlay");

	ABP_GeyserHole_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GeyserHole.BP_GeyserHole_C.OnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// TEnumAsByte<Athena_EHoleState> InState                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GeyserHole_C::OnStateChanged(TEnumAsByte<Athena_EHoleState> InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.OnStateChanged");

	ABP_GeyserHole_C_OnStateChanged_Params params;
	params.InState = InState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_GeyserHole.BP_GeyserHole_C.ExecuteUbergraph_BP_GeyserHole
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_GeyserHole_C::ExecuteUbergraph_BP_GeyserHole(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GeyserHole.BP_GeyserHole_C.ExecuteUbergraph_BP_GeyserHole");

	ABP_GeyserHole_C_ExecuteUbergraph_BP_GeyserHole_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_GeyserHole_C::AfterRead()
{
	AShovelHole::AfterRead();

	READ_PTR_FULL(CrackMesh, UStaticMeshComponent);
	READ_PTR_FULL(CrackDecal, UDecalComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
	READ_PTR_FULL(MeshDynamicMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(DecalDynamicMaterial, UMaterialInstanceDynamic);
}

void ABP_GeyserHole_C::BeforeDelete()
{
	AShovelHole::BeforeDelete();

	DELE_PTR_FULL(CrackMesh);
	DELE_PTR_FULL(CrackDecal);
	DELE_PTR_FULL(SharedRoot);
	DELE_PTR_FULL(MeshDynamicMaterial);
	DELE_PTR_FULL(DecalDynamicMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
