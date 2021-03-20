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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TestUtilities.EventTestEventWithId
// 0x0004
struct FEventTestEventWithId
{
	int                                                Id;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct TestUtilities.EventOtherTestEvent
// 0x0001
struct FEventOtherTestEvent
{
	unsigned char                                      UnknownData_Q00W[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct TestUtilities.EventTestEvent
// 0x0001
struct FEventTestEvent
{
	unsigned char                                      UnknownData_28BO[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
