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

void UMockWwiseInputManager::AfterRead()
{
	UObject::AfterRead();

}

void UMockWwiseInputManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AWwiseEmitterComponentBlueprintLibraryTestActor::AfterRead()
{
	AActor::AfterRead();

}

void AWwiseEmitterComponentBlueprintLibraryTestActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UWwiseEventTest1::AfterRead()
{
	UWwiseEvent::AfterRead();

}

void UWwiseEventTest1::BeforeDelete()
{
	UWwiseEvent::BeforeDelete();

}

void UWwiseEventTest2::AfterRead()
{
	UWwiseEvent::AfterRead();

}

void UWwiseEventTest2::BeforeDelete()
{
	UWwiseEvent::BeforeDelete();

}

void UMockAudioComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(SfxPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(SfxEvent, UWwiseEvent);
}

void UMockAudioComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(SfxPool);
	DELE_PTR_FULL(SfxEvent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
