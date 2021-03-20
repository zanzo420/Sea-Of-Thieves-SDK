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

void FLiquidTypeParams::AfterRead()
{
}

void FLiquidTypeParams::BeforeDelete()
{
}

// Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULiquidContainerInterface::SetLiquidLevel(float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.SetLiquidLevel");

	ULiquidContainerInterface_SetLiquidLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULiquidContainerInterface::GetWantedLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetWantedLiquidLevel");

	ULiquidContainerInterface_GetWantedLiquidLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULiquidContainerInterface::GetMaxLiquidCollectionAmount()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetMaxLiquidCollectionAmount");

	ULiquidContainerInterface_GetMaxLiquidCollectionAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULiquidContainerInterface::GetLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.GetLiquidLevel");

	ULiquidContainerInterface_GetLiquidLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount
// (Native, Public, BlueprintCallable)
// Parameters:
// float                          DesiredAmount                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULiquidContainerInterface::CollectLiquidAmount(float DesiredAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerInterface.CollectLiquidAmount");

	ULiquidContainerInterface_CollectLiquidAmount_Params params;
	params.DesiredAmount = DesiredAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULiquidContainerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void ULiquidContainerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function LiquidContainer.LiquidContainerComponent.SetLiquidType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<LiquidContainer_ELiquidType> LiquidType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULiquidContainerComponent::SetLiquidType(TEnumAsByte<LiquidContainer_ELiquidType> LiquidType)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.SetLiquidType");

	ULiquidContainerComponent_SetLiquidType_Params params;
	params.LiquidType = LiquidType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Level                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULiquidContainerComponent::SetLiquidLevel(float Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.SetLiquidLevel");

	ULiquidContainerComponent_SetLiquidLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ULiquidContainerComponent::GetLiquidLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.GetLiquidLevel");

	ULiquidContainerComponent_GetLiquidLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMeshComponent*          MeshComponent                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULiquidContainerComponent::CollectLiquidMaterials(class UMeshComponent* MeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function LiquidContainer.LiquidContainerComponent.CollectLiquidMaterials");

	ULiquidContainerComponent_CollectLiquidMaterials_Params params;
	params.MeshComponent = MeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULiquidContainerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(TransitionCurve, UCurveFloat);
}

void ULiquidContainerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(TransitionCurve);
}

void ULiquidContainerServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void ULiquidContainerServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ULiquidContainerService::AfterRead()
{
	UInteractableService::AfterRead();

}

void ULiquidContainerService::BeforeDelete()
{
	UInteractableService::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
