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

// Function BP_SmallShip_DamageZone_MezzanineDeck_00.BP_SmallShip_DamageZone_MezzanineDeck_00_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_SmallShip_DamageZone_MezzanineDeck_00_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SmallShip_DamageZone_MezzanineDeck_00.BP_SmallShip_DamageZone_MezzanineDeck_00_C.UserConstructionScript");

	ABP_SmallShip_DamageZone_MezzanineDeck_00_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SmallShip_DamageZone_MezzanineDeck_00_C::AfterRead()
{
	ABP_BaseInternalDamageZone_C::AfterRead();

}

void ABP_SmallShip_DamageZone_MezzanineDeck_00_C::BeforeDelete()
{
	ABP_BaseInternalDamageZone_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
