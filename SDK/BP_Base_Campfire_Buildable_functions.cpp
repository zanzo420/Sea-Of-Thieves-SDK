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

void ABP_Base_Campfire_Buildable_C::AfterRead()
{
	ACampfire::AfterRead();

}

void ABP_Base_Campfire_Buildable_C::BeforeDelete()
{
	ACampfire::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
