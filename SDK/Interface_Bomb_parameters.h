﻿#pragma once

// Name: SeaOfThieves, Version: 2.0.23


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Interface_Bomb.Interface_Bomb_C.Interface Trigger
struct UInterface_Bomb_C_Interface_Trigger_Params
{
};

// Function Interface_Bomb.Interface_Bomb_C.Set Bomb Parameters
struct UInterface_Bomb_C_Set_Bomb_Parameters_Params
{
	float                                              Radius;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seed;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
