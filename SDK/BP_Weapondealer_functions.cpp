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

// Function BP_Weapondealer.BP_Weapondealer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Weapondealer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Weapondealer.BP_Weapondealer_C.UserConstructionScript");

	ABP_Weapondealer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Weapondealer_C::AfterRead()
{
	AShopkeeper::AfterRead();

	READ_PTR_FULL(CargoRunParticipant, UCargoRunParticipantComponent);
	READ_PTR_FULL(SolidHits, UCapsuleComponent);
	READ_PTR_FULL(NPCDialog, UNPCDialogComponent);
	READ_PTR_FULL(AnimNotifyWwiseEmitter, UAnimNotifyWwiseEmitterComponent);
}

void ABP_Weapondealer_C::BeforeDelete()
{
	AShopkeeper::BeforeDelete();

	DELE_PTR_FULL(CargoRunParticipant);
	DELE_PTR_FULL(SolidHits);
	DELE_PTR_FULL(NPCDialog);
	DELE_PTR_FULL(AnimNotifyWwiseEmitter);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
