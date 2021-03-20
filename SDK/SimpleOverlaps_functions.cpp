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

void FSimpleOverlapInfo::AfterRead()
{
	READ_PTR_FULL(OtherActor, AActor);
	READ_PTR_FULL(OtherComponent, UPrimitiveComponent);
}

void FSimpleOverlapInfo::BeforeDelete()
{
	DELE_PTR_FULL(OtherActor);
	DELE_PTR_FULL(OtherComponent);
}

void FSimpleOverlapEnd::AfterRead()
{
}

void FSimpleOverlapEnd::BeforeDelete()
{
}

void FSimpleOverlapBegin::AfterRead()
{
}

void FSimpleOverlapBegin::BeforeDelete()
{
}

void AOverlapTestActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PrimitiveComponent, UPrimitiveComponent);
}

void AOverlapTestActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PrimitiveComponent);
}

void USimpleOverlapCollectionKey::AfterRead()
{
	UObject::AfterRead();

}

void USimpleOverlapCollectionKey::BeforeDelete()
{
	UObject::BeforeDelete();

}

void USimpleOverlapComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void USimpleOverlapComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void ATestObjectMessagingDispatcherInterface::AfterRead()
{
	AActor::AfterRead();

}

void ATestObjectMessagingDispatcherInterface::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ATestOverlapBroadcasterActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PrimitiveComponent, UPrimitiveComponent);
}

void ATestOverlapBroadcasterActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PrimitiveComponent);
}

void ATestOverlapShapeActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PrimitiveComponent, UPrimitiveComponent);
}

void ATestOverlapShapeActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PrimitiveComponent);
}

void ATestSimpleOverlapsGameState::AfterRead()
{
	AGameState::AfterRead();

}

void ATestSimpleOverlapsGameState::BeforeDelete()
{
	AGameState::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
