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

void UUnarmedOnlySpawnContext_C::AfterRead()
{
	UAISpawnContextId::AfterRead();

}

void UUnarmedOnlySpawnContext_C::BeforeDelete()
{
	UAISpawnContextId::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
