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

// ScriptStruct AthenaServerMigration.IncomingMigrationPreventionZone
// 0x000C
struct FIncomingMigrationPreventionZone
{
	struct FVector2D                                   Location;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupCompleteEvent
// 0x0001
struct FServerMigrationSetupCompleteEvent
{
	unsigned char                                      UnknownData_ZC27[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.ServerMigrationSetupRequestEvent
// 0x0001
struct FServerMigrationSetupRequestEvent
{
	unsigned char                                      UnknownData_VVB2[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaServerMigration.PrepareForWorldSwitchRpc
// 0x0000 (0x0010 - 0x0010)
struct FPrepareForWorldSwitchRpc : public FBoxedRpc
{

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
