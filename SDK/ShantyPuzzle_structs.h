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
// Enums
//---------------------------------------------------------------------------

// Enum ShantyPuzzle.EGlitterBeardPlayerPuzzleOutcome
enum class ShantyPuzzle_EGlitterBeardPlayerPuzzleOutcome : uint8_t
{
	EGlitterBeardPlayerPuzzleOutcome__WrongTime = 0,
	EGlitterBeardPlayerPuzzleOutcome__WrongInstrument = 1,
	EGlitterBeardPlayerPuzzleOutcome__WrongShanty = 2,
	EGlitterBeardPlayerPuzzleOutcome__ConditionsMetForThisPosition = 3,
	EGlitterBeardPlayerPuzzleOutcome__EGlitterBeardPlayerPuzzleOutcome_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockCanceledEvent
// 0x0001
struct FShantyPuzzleUnlockCanceledEvent
{
	unsigned char                                      UnknownData_CKT9[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneStopInteractingEvent
// 0x0010
struct FShantyPuzzleSingleInteractionZoneStopInteractingEvent
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InteractionZoneIdx;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7Q4Z[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShantyPuzzle.ShantyPuzzleSingleInteractionZoneUnlockEvent
// 0x0010
struct FShantyPuzzleSingleInteractionZoneUnlockEvent
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InteractionZoneIdx;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9Z8V[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShantyPuzzle.ShantyPuzzleUnlockedCompleteEvent
// 0x0001
struct FShantyPuzzleUnlockedCompleteEvent
{
	unsigned char                                      UnknownData_R8NY[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ShantyPuzzle.ShantyPuzzleInteractionZoneDefinition
// 0x0018
struct FShantyPuzzleInteractionZoneDefinition
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EMusicalInstrumentType>         RequiredMusicalInstrumentType;                             // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EJVD[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RequiredNumInteractors;                                    // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
