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

void FServiceMessagingUnsubscribedEvent::AfterRead()
{
}

void FServiceMessagingUnsubscribedEvent::BeforeDelete()
{
}

void FServiceMessagingTestMessage::AfterRead()
{
}

void FServiceMessagingTestMessage::BeforeDelete()
{
}

void FServiceMessagingSubscribedEvent::AfterRead()
{
}

void FServiceMessagingSubscribedEvent::BeforeDelete()
{
}

void UServiceMessagingDispatcherInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServiceMessagingDispatcherInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UServiceMessagingInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServiceMessagingInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Object                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)
struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcherFromActor(class UObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcherFromActor");

	UServiceMessagingFunctions_GetServiceMessagingDispatcherFromActor_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TScriptInterface<class UServiceMessagingDispatcherInterface> ServiceMessagingDispatcher     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper)
// struct FObjectMessagingDispatcherHandle ReturnValue                    (Parm, OutParm, ReturnParm)
struct FObjectMessagingDispatcherHandle UServiceMessagingFunctions::STATIC_GetServiceMessagingDispatcher(const TScriptInterface<class UServiceMessagingDispatcherInterface>& ServiceMessagingDispatcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingFunctions.GetServiceMessagingDispatcher");

	UServiceMessagingFunctions_GetServiceMessagingDispatcher_Params params;
	params.ServiceMessagingDispatcher = ServiceMessagingDispatcher;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UServiceMessagingFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UServiceMessagingFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FServiceMessagingTestMessage InMessage                      (Parm, OutParm)
void UServiceMessagingListenerTestObject::TestFunctionWithMessage(struct FServiceMessagingTestMessage* InMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function ServiceMessaging.ServiceMessagingListenerTestObject.TestFunctionWithMessage");

	UServiceMessagingListenerTestObject_TestFunctionWithMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;

}


void UServiceMessagingListenerTestObject::AfterRead()
{
	UObject::AfterRead();

}

void UServiceMessagingListenerTestObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
