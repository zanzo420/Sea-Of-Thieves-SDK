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

// Function BP_FishingFish_Devilfish_05_Colour_01_Ashen.BP_FishingFish_Devilfish_05_Colour_01_Ashen_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FishingFish_Devilfish_05_Colour_01_Ashen_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FishingFish_Devilfish_05_Colour_01_Ashen.BP_FishingFish_Devilfish_05_Colour_01_Ashen_C.UserConstructionScript");

	ABP_FishingFish_Devilfish_05_Colour_01_Ashen_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FishingFish_Devilfish_05_Colour_01_Ashen_C::AfterRead()
{
	ABP_FishingFish_Devilfish_05_C::AfterRead();

}

void ABP_FishingFish_Devilfish_05_Colour_01_Ashen_C::BeforeDelete()
{
	ABP_FishingFish_Devilfish_05_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
