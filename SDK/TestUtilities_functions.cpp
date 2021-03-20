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

void FEventTestEventWithId::AfterRead()
{
}

void FEventTestEventWithId::BeforeDelete()
{
}

void FEventOtherTestEvent::AfterRead()
{
}

void FEventOtherTestEvent::BeforeDelete()
{
}

void FEventTestEvent::AfterRead()
{
}

void FEventTestEvent::BeforeDelete()
{
}

void USampleUObject::AfterRead()
{
	UObject::AfterRead();

}

void USampleUObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UAnotherSampleUObject::AfterRead()
{
	UObject::AfterRead();

}

void UAnotherSampleUObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function TestUtilities.DelegateTester.Callback
// (Final, RequiredAPI, Native, Public)
void UDelegateTester::Callback()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.DelegateTester.Callback");

	UDelegateTester_Callback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDelegateTester::AfterRead()
{
	UObject::AfterRead();

}

void UDelegateTester::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UDelegateTesterWithOneParam::AfterRead()
{
	UObject::AfterRead();

}

void UDelegateTesterWithOneParam::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function TestUtilities.DelegateTesterWithFNameParam.Callback
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FName                   InParam                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UDelegateTesterWithFNameParam::Callback(const struct FName& InParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.DelegateTesterWithFNameParam.Callback");

	UDelegateTesterWithFNameParam_Callback_Params params;
	params.InParam = InParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDelegateTesterWithFNameParam::AfterRead()
{
	UDelegateTesterWithOneParam::AfterRead();

}

void UDelegateTesterWithFNameParam::BeforeDelete()
{
	UDelegateTesterWithOneParam::BeforeDelete();

}

void AMockControllerWithMessagingDispatcher::AfterRead()
{
	AController::AfterRead();

}

void AMockControllerWithMessagingDispatcher::BeforeDelete()
{
	AController::BeforeDelete();

}

void UMockObjectCollectorComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UMockObjectCollectorComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UMockObjectWithMessagingDispatcher::AfterRead()
{
	UObject::AfterRead();

}

void UMockObjectWithMessagingDispatcher::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AMockPlayerControllerWithMessagingDispatcher::AfterRead()
{
	APlayerController::AfterRead();

}

void AMockPlayerControllerWithMessagingDispatcher::BeforeDelete()
{
	APlayerController::BeforeDelete();

}

void AObjectCollectorGameState::AfterRead()
{
	AGameState::AfterRead();

}

void AObjectCollectorGameState::BeforeDelete()
{
	AGameState::BeforeDelete();

}

void ATestActor::AfterRead()
{
	AActor::AfterRead();

}

void ATestActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ATestActorWithBoxedRpcDispatcherComponent::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(BoxedRpcDispatcherComponent, UBoxedRpcDispatcherComponent);
}

void ATestActorWithBoxedRpcDispatcherComponent::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(BoxedRpcDispatcherComponent);
}

void ATestActorWithCapsule::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(BaseComponent, UCapsuleComponent);
}

void ATestActorWithCapsule::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(BaseComponent);
}

void ATestActorWithObjectMessagingDispatcher::AfterRead()
{
	AActor::AfterRead();

}

void ATestActorWithObjectMessagingDispatcher::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AMockActorWithMessagingDispatcherAndSceneComponent::AfterRead()
{
	ATestActorWithObjectMessagingDispatcher::AfterRead();

	READ_PTR_FULL(SceneComponent, USceneComponent);
}

void AMockActorWithMessagingDispatcherAndSceneComponent::BeforeDelete()
{
	ATestActorWithObjectMessagingDispatcher::BeforeDelete();

	DELE_PTR_FULL(SceneComponent);
}

void ATestController::AfterRead()
{
	AController::AfterRead();

}

void ATestController::BeforeDelete()
{
	AController::BeforeDelete();

}

void ATestControllerWithObjectMessagingDispatcher::AfterRead()
{
	AController::AfterRead();

}

void ATestControllerWithObjectMessagingDispatcher::BeforeDelete()
{
	AController::BeforeDelete();

}

void UTestEnvQueryContextPoints::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UTestEnvQueryContextPoints::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UTestEnvQueryContextActors::AfterRead()
{
	UEnvQueryContext::AfterRead();

}

void UTestEnvQueryContextActors::BeforeDelete()
{
	UEnvQueryContext::BeforeDelete();

}

void UTestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface::AfterRead()
{
	UGameInstance::AfterRead();

}

void UTestGameInstanceWithObjectMessagingAndUserGameSettingsRetrievalInterface::BeforeDelete()
{
	UGameInstance::BeforeDelete();

}

void UTestObjectWithObjectMessagingDispatcher::AfterRead()
{
	UObject::AfterRead();

}

void UTestObjectWithObjectMessagingDispatcher::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ATestPawnWithCapsule::AfterRead()
{
	APawn::AfterRead();

	READ_PTR_FULL(BaseComponent, UCapsuleComponent);
}

void ATestPawnWithCapsule::BeforeDelete()
{
	APawn::BeforeDelete();

	DELE_PTR_FULL(BaseComponent);
}

// Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Engine_ECollisionChannel> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Engine_ECollisionChannel> UTestPrimitiveComponent::GetCollisionObjectType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.TestPrimitiveComponent.GetCollisionObjectType");

	UTestPrimitiveComponent_GetCollisionObjectType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTestPrimitiveComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void UTestPrimitiveComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void UTestSkeletalMeshComponent::AfterRead()
{
	USkeletalMeshComponent::AfterRead();

}

void UTestSkeletalMeshComponent::BeforeDelete()
{
	USkeletalMeshComponent::BeforeDelete();

}

// Function TestUtilities.TestStaticMeshComponent.AddForce
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 Force                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   BoneName                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           bAccelChange                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTestStaticMeshComponent::AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange)
{
	static auto fn = UObject::FindObject<UFunction>("Function TestUtilities.TestStaticMeshComponent.AddForce");

	UTestStaticMeshComponent_AddForce_Params params;
	params.Force = Force;
	params.BoneName = BoneName;
	params.bAccelChange = bAccelChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTestStaticMeshComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UTestStaticMeshComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
