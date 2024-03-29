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
// Classes
//---------------------------------------------------------------------------

// Class DebugMenu.DebugMenuComponent
// 0x0050 (FullSize[0x0118] - InheritedSize[0x00C8])
class UDebugMenuComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_8ABZ[0x28];                                    // 0x00C8(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADebugMenu*                                  DebugMenuInstance;                                         // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2Q1C[0x20];                                    // 0x00F8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DebugMenu.DebugMenuEntryGenerator
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugMenuEntryGenerator : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuEntryGenerator");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DebugMenu.DebugMenuDataAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UDebugMenuDataAsset : public UDataAsset
{
public:
	TArray<class UDebugMenuDataAsset*>                 DataAssets;                                                // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuDataAssetEntry>            MenuEntires;                                               // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FDebugMenuButtonShortcut>            ButtonShortcuts;                                           // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<class UDebugMenuEntryGenerator*>            MenuEntryGenerators;                                       // 0x0058(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DebugMenu.DebugMenu
// 0x0060 (FullSize[0x0488] - InheritedSize[0x0428])
class ADebugMenu : public AActor
{
public:
	unsigned char                                      UnknownData_ET9H[0x60];                                    // 0x0428(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenu");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DebugMenu.DebugMenuComponentMock
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
class UDebugMenuComponentMock : public UDebugMenuComponent
{
public:
	unsigned char                                      UnknownData_D77H[0x8];                                     // 0x0118(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuComponentMock");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DebugMenu.DebugMenuTestFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDebugMenuTestFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DebugMenu.DebugMenuTestFunctions");
		return ptr;
	}



	bool STATIC_IsDebugMenuReady(class UObject* WorldContextObject);
	bool STATIC_IsDebugMenuOpen(class UObject* WorldContextObject);
	bool STATIC_IsDebugMenuAvailable();
	struct FKey STATIC_GetDebugMenuToggleKeyComboBetaKeyboard();
	struct FKey STATIC_GetDebugMenuToggleKeyComboAlphaKeyboard();
	struct FKey STATIC_GetDebugMenuToggleButtonComboBetaGamepad();
	struct FKey STATIC_GetDebugMenuToggleButtonComboAlphaGamepad();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
