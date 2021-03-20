// Name: SeaOfThieves, Version: 2.0.23

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

void FWaterSlideActionStateParams::AfterRead()
{
}

void FWaterSlideActionStateParams::BeforeDelete()
{
}

void FOnPlayerSpeedOnWaterSlideChangedActionStateEvent::AfterRead()
{
}

void FOnPlayerSpeedOnWaterSlideChangedActionStateEvent::BeforeDelete()
{
}

void FOnPlayerChangedWaterSlideRouteActionStateEvent::AfterRead()
{
}

void FOnPlayerChangedWaterSlideRouteActionStateEvent::BeforeDelete()
{
}

void FOnEndWaterSlideActionStateEvent::AfterRead()
{
}

void FOnEndWaterSlideActionStateEvent::BeforeDelete()
{
}

void FOnStartWaterSlideActionStateEvent::AfterRead()
{
}

void FOnStartWaterSlideActionStateEvent::BeforeDelete()
{
}

void FOnExitedWaterSlideEvent::AfterRead()
{
}

void FOnExitedWaterSlideEvent::BeforeDelete()
{
}

void FOnEnteredWaterSlideEvent::AfterRead()
{
	READ_PTR_FULL(WaterSlide, AWaterSlide);
}

void FOnEnteredWaterSlideEvent::BeforeDelete()
{
	DELE_PTR_FULL(WaterSlide);
}

void FWaterSlideParams::AfterRead()
{
}

void FWaterSlideParams::BeforeDelete()
{
}

void FWaterSlideActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

	READ_PTR_FULL(SceneComponent, USceneComponent);
}

void FWaterSlideActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

	DELE_PTR_FULL(SceneComponent);
}

void UWaterSlideParamsDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWaterSlideParamsDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function WaterSlide.WaterSlide.SetEntranceCollisionComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*     InEntranceCollisionComponent   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWaterSlide::SetEntranceCollisionComponent(class UPrimitiveComponent* InEntranceCollisionComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.SetEntranceCollisionComponent");

	AWaterSlide_SetEntranceCollisionComponent_Params params;
	params.InEntranceCollisionComponent = InEntranceCollisionComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack
// (Final, Native, Private, HasOutParms)
// Parameters:
// class AActor*                  InOtherActor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*     InOtherComp                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InOtherBodyIndex               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InFromSweep                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult              InSweepResult                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void AWaterSlide::ComponentBeginOverlapCallBack(class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int InOtherBodyIndex, bool InFromSweep, const struct FHitResult& InSweepResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlide.ComponentBeginOverlapCallBack");

	AWaterSlide_ComponentBeginOverlapCallBack_Params params;
	params.InOtherActor = InOtherActor;
	params.InOtherComp = InOtherComp;
	params.InOtherBodyIndex = InOtherBodyIndex;
	params.InFromSweep = InFromSweep;
	params.InSweepResult = InSweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AWaterSlide::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SlideSpline, USplineComponent);
	READ_PTR_FULL(Root, USceneComponent);
	READ_PTR_FULL(WaterSlideParamsDataAsset, UWaterSlideParamsDataAsset);
	READ_PTR_FULL(EntranceCollisionComponent, UPrimitiveComponent);
	READ_PTR_FULL(ContinuedWaterSlideRoute, AWaterSlide);
	READ_PTR_FULL(LeftWaterSlideRoute, AWaterSlide);
	READ_PTR_FULL(RightWaterSlideRoute, AWaterSlide);
}

void AWaterSlide::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SlideSpline);
	DELE_PTR_FULL(Root);
	DELE_PTR_FULL(WaterSlideParamsDataAsset);
	DELE_PTR_FULL(EntranceCollisionComponent);
	DELE_PTR_FULL(ContinuedWaterSlideRoute);
	DELE_PTR_FULL(LeftWaterSlideRoute);
	DELE_PTR_FULL(RightWaterSlideRoute);
}

void UWaterSlideActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void UWaterSlideActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveRight
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UWaterSlideCompositeInputHandler::OnMoveRight(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveRight");

	UWaterSlideCompositeInputHandler_OnMoveRight_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveForward
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaInput_EInputHandlerResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaInput_EInputHandlerResult> UWaterSlideCompositeInputHandler::OnMoveForward(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function WaterSlide.WaterSlideCompositeInputHandler.OnMoveForward");

	UWaterSlideCompositeInputHandler_OnMoveForward_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UWaterSlideCompositeInputHandler::AfterRead()
{
	ULookAtOffsetCompositeInputHandler::AfterRead();

}

void UWaterSlideCompositeInputHandler::BeforeDelete()
{
	ULookAtOffsetCompositeInputHandler::BeforeDelete();

}

void UWaterSlidePlayerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UWaterSlidePlayerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWaterSlidePlayerComponent::AfterRead()
{
	UDoubleIntentComponent::AfterRead();

	READ_PTR_FULL(PlayerWaterSlideSplashingVFXComponent, UParticleSystemComponent);
	READ_PTR_FULL(PlayerWaterSlideSplashingVFX, UParticleSystem);
	READ_PTR_FULL(CurrentWaterSlide, AWaterSlide);
}

void UWaterSlidePlayerComponent::BeforeDelete()
{
	UDoubleIntentComponent::BeforeDelete();

	DELE_PTR_FULL(PlayerWaterSlideSplashingVFXComponent);
	DELE_PTR_FULL(PlayerWaterSlideSplashingVFX);
	DELE_PTR_FULL(CurrentWaterSlide);
}

void UWaterSlideVeeringAnalogInputId::AfterRead()
{
	UAnalogInputId::AfterRead();

}

void UWaterSlideVeeringAnalogInputId::BeforeDelete()
{
	UAnalogInputId::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
