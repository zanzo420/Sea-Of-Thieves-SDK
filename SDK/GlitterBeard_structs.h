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
// Enums
//---------------------------------------------------------------------------

// Enum GlitterBeard.EGlitterbeardVFXState
enum class GlitterBeard_EGlitterbeardVFXState : uint8_t
{
	EGlitterbeardVFXState__Active  = 0,
	EGlitterbeardVFXState__Inactive = 1,
	EGlitterbeardVFXState__EGlitterbeardVFXState_MAX = 2,

};

// Enum GlitterBeard.EFinaleState
enum class GlitterBeard_EFinaleState : uint8_t
{
	EFinaleState__Inactive         = 0,
	EFinaleState__Active           = 1,
	EFinaleState__ServerComplete   = 2,
	EFinaleState__EFinaleState_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GlitterBeard.GlitterbeardPuzzleUnlockTelemetryEvent
// 0x0010
struct FGlitterbeardPuzzleUnlockTelemetryEvent
{
	unsigned char                                      UnknownData_T8S9[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.GlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent
// 0x0010
struct FGlitterbeardPlayerPuzzleUnlockSuccessTelemetryEvent
{
	unsigned char                                      UnknownData_HFEI[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.GlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent
// 0x0020
struct FGlitterbeardPlayerPuzzleUnlockFailureTelemetryEvent
{
	unsigned char                                      UnknownData_8FXH[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.GlitterbeardSessionEndTelemetryEvent
// 0x0010
struct FGlitterbeardSessionEndTelemetryEvent
{
	unsigned char                                      UnknownData_BR5T[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.GlitterbeardSessionBeginTelemetryEvent
// 0x0010
struct FGlitterbeardSessionBeginTelemetryEvent
{
	unsigned char                                      UnknownData_CV7Q[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.FinaleReplicationState
// 0x0010
struct FFinaleReplicationState
{
	TEnumAsByte<GlitterBeard_EFinaleState>             State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7842[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     TargetEnsemble;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.UnlockEventData
// 0x0004
struct FUnlockEventData
{
	int                                                Idx;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.GlitterBeardVFXTransitionCompletedEvent
// 0x0004
struct FGlitterBeardVFXTransitionCompletedEvent
{
	int                                                Index;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.ChangeGlitterBeardVFXStateEvent
// 0x0008
struct FChangeGlitterBeardVFXStateEvent
{
	int                                                Index;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GlitterBeard_EGlitterbeardVFXState>    Target;                                                    // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HP5S[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GlitterBeard.GlitterbeardPuzzleCancelTelemetryEvent
// 0x0010
struct FGlitterbeardPuzzleCancelTelemetryEvent
{
	unsigned char                                      UnknownData_CV7Q[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
