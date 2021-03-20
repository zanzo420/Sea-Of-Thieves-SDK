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

// Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Figurehead_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript");

	ABP_Figurehead_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Figurehead.BP_Figurehead_C.OnPartMeshLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UStaticMesh*             Mesh                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Figurehead_C::OnPartMeshLoaded(class UStaticMesh* Mesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead.BP_Figurehead_C.OnPartMeshLoaded");

	ABP_Figurehead_C_OnPartMeshLoaded_Params params;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Figurehead.BP_Figurehead_C.OnPartDescLoaded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UGenericPartDescAsset*   Desc                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Figurehead_C::OnPartDescLoaded(class UGenericPartDescAsset* Desc)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead.BP_Figurehead_C.OnPartDescLoaded");

	ABP_Figurehead_C_OnPartDescLoaded_Params params;
	params.Desc = Desc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Figurehead.BP_Figurehead_C.ExecuteUbergraph_BP_Figurehead
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Figurehead_C::ExecuteUbergraph_BP_Figurehead(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Figurehead.BP_Figurehead_C.ExecuteUbergraph_BP_Figurehead");

	ABP_Figurehead_C_ExecuteUbergraph_BP_Figurehead_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Figurehead_C::AfterRead()
{
	AGenericPart::AfterRead();

	READ_PTR_FULL(Figurehead, UStaticMeshComponent);
}

void ABP_Figurehead_C::BeforeDelete()
{
	AGenericPart::BeforeDelete();

	DELE_PTR_FULL(Figurehead);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
