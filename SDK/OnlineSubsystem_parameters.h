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

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
struct UTurnBasedMatchInterface_OnMatchReceivedTurn_Params
{
	struct FString                                     Match;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bDidBecomeActive;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
struct UTurnBasedMatchInterface_OnMatchEnded_Params
{
	struct FString                                     Match;                                                     // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
