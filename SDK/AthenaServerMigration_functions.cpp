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

void FIncomingMigrationPreventionZone::AfterRead()
{
}

void FIncomingMigrationPreventionZone::BeforeDelete()
{
}

void FServerMigrationSetupCompleteEvent::AfterRead()
{
}

void FServerMigrationSetupCompleteEvent::BeforeDelete()
{
}

void FServerMigrationSetupRequestEvent::AfterRead()
{
}

void FServerMigrationSetupRequestEvent::BeforeDelete()
{
}

void FPrepareForWorldSwitchRpc::AfterRead()
{
	FBoxedRpc::AfterRead();

}

void FPrepareForWorldSwitchRpc::BeforeDelete()
{
	FBoxedRpc::BeforeDelete();

}

void UMigrationServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMigrationServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UServerMigrationGatherableActorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UServerMigrationGatherableActorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
