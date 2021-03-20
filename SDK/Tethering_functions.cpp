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

void FTetherProjectileImpact::AfterRead()
{
	READ_PTR_FULL(HitActor, AActor);
}

void FTetherProjectileImpact::BeforeDelete()
{
	DELE_PTR_FULL(HitActor);
}

void UCordRenderInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCordRenderInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCordRenderComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UCordRenderComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

void UHarpoonRenderComponent::AfterRead()
{
	UCordRenderComponent::AfterRead();

}

void UHarpoonRenderComponent::BeforeDelete()
{
	UCordRenderComponent::BeforeDelete();

}

void UTetherConstraintInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTetherConstraintInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UDistanceJointComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UDistanceJointComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UShouldTetherInWorldSpaceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UShouldTetherInWorldSpaceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UTetherQueriableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTetherQueriableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UTetherCustomisationInterface::AfterRead()
{
	UTetherQueriableInterface::AfterRead();

}

void UTetherCustomisationInterface::BeforeDelete()
{
	UTetherQueriableInterface::BeforeDelete();

}

void UTetherInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTetherInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ATether::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(TetherPositionAnchorComponent, USceneComponent);
	READ_PTR_FULL(SourcePhysicsHandle, USphereComponent);
	READ_PTR_FULL(TargetPhysicsHandle, USphereComponent);
	READ_PTR_FULL(JointComponent, UDistanceJointComponent);
	READ_PTR_FULL(SourceActor, AActor);
	READ_PTR_FULL(TargetActor, AActor);
}

void ATether::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(TetherPositionAnchorComponent);
	DELE_PTR_FULL(SourcePhysicsHandle);
	DELE_PTR_FULL(TargetPhysicsHandle);
	DELE_PTR_FULL(JointComponent);
	DELE_PTR_FULL(SourceActor);
	DELE_PTR_FULL(TargetActor);
}

void UTetherCustomisationComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(ComponentToTetherTo, USceneComponent);
}

void UTetherCustomisationComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(ComponentToTetherTo);
}

void UTetherInWorldSpaceComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UTetherInWorldSpaceComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
