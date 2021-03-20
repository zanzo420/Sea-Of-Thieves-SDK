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

// Function BP_SmallMapTable.BP_SmallMapTable_C.UpdateBlurEffect
// (Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallMapTable_C::UpdateBlurEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.UpdateBlurEffect");

	ABP_SmallMapTable_C_UpdateBlurEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallMapTable.BP_SmallMapTable_C.GetClosestInteractionPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_SmallMapTable_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.GetClosestInteractionPoint");

	ABP_SmallMapTable_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function BP_SmallMapTable.BP_SmallMapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallMapTable_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.UserConstructionScript");

	ABP_SmallMapTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallMapTable.BP_SmallMapTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void ABP_SmallMapTable_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.ReceiveBeginPlay");

	ABP_SmallMapTable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallMapTable.BP_SmallMapTable_C.SetEffectActiveWhenClose
// (BlueprintCallable, BlueprintEvent)
void ABP_SmallMapTable_C::SetEffectActiveWhenClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.SetEffectActiveWhenClose");

	ABP_SmallMapTable_C_SetEffectActiveWhenClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsMapActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextureRenderTarget2D*  Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallMapTable_C::OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapActivate");

	ABP_SmallMapTable_C_OnMapActivate_Params params;
	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapMove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D               CentreLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallMapTable_C::OnMapMove(const struct FVector2D& CentreLocation, const struct FVector2D& ZoomLevel)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.OnMapMove");

	ABP_SmallMapTable_C_OnMapMove_Params params;
	params.CentreLocation = CentreLocation;
	params.ZoomLevel = ZoomLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SmallMapTable.BP_SmallMapTable_C.ExecuteUbergraph_BP_SmallMapTable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_SmallMapTable_C::ExecuteUbergraph_BP_SmallMapTable(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallMapTable.BP_SmallMapTable_C.ExecuteUbergraph_BP_SmallMapTable");

	ABP_SmallMapTable_C_ExecuteUbergraph_BP_SmallMapTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallMapTable_C::AfterRead()
{
	AMapTable::AfterRead();

	READ_PTR_FULL(NavBlocker, UBoxComponent);
	READ_PTR_FULL(ControlPoint_4, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_3, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_2, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_1, UChildActorComponent);
	READ_PTR_FULL(TextureFeedback, UTextureFeedbackComponent);
	READ_PTR_FULL(Cube, UStaticMeshComponent);
	READ_PTR_FULL(Map, UStaticMeshComponent);
}

void ABP_SmallMapTable_C::BeforeDelete()
{
	AMapTable::BeforeDelete();

	DELE_PTR_FULL(NavBlocker);
	DELE_PTR_FULL(ControlPoint_4);
	DELE_PTR_FULL(ControlPoint_3);
	DELE_PTR_FULL(ControlPoint_2);
	DELE_PTR_FULL(ControlPoint_1);
	DELE_PTR_FULL(TextureFeedback);
	DELE_PTR_FULL(Cube);
	DELE_PTR_FULL(Map);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
