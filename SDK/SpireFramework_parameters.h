#pragma once

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

// Function SpireFramework.HeightTriggerableEffectsComponent.SetMovementDirection
struct UHeightTriggerableEffectsComponent_SetMovementDirection_Params
{
	TEnumAsByte<SpireFramework_EDirectionOfMovement>   InMovement;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function SpireFramework.SpireService.OnRep_SpireLevels
struct ASpireService_OnRep_SpireLevels_Params
{
	TArray<struct FSpireInfo>                          InPreviousSpireLevels;                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
