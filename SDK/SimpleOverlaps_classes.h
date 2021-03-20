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

// Class SimpleOverlaps.OverlapTestActor
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class AOverlapTestActor : public AActor
{
public:
	unsigned char                                      UnknownData_KQOY[0x10];                                    // 0x0428(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.OverlapTestActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SimpleOverlaps.SimpleOverlapCollectionKey
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USimpleOverlapCollectionKey : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapCollectionKey");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SimpleOverlaps.SimpleOverlapComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class USimpleOverlapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_YF4P[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SimpleOverlaps.TestObjectMessagingDispatcherInterface
// 0x00A8 (FullSize[0x04D0] - InheritedSize[0x0428])
class ATestObjectMessagingDispatcherInterface : public AActor
{
public:
	unsigned char                                      UnknownData_ZEO8[0xA8];                                    // 0x0428(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestObjectMessagingDispatcherInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SimpleOverlaps.TestOverlapBroadcasterActor
// 0x0120 (FullSize[0x0548] - InheritedSize[0x0428])
class ATestOverlapBroadcasterActor : public AActor
{
public:
	unsigned char                                      UnknownData_0F1D[0x30];                                    // 0x0428(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0458(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O0KM[0xE8];                                    // 0x0460(0x00E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestOverlapBroadcasterActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SimpleOverlaps.TestOverlapShapeActor
// 0x0010 (FullSize[0x0438] - InheritedSize[0x0428])
class ATestOverlapShapeActor : public AActor
{
public:
	unsigned char                                      UnknownData_6PK1[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestOverlapShapeActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SimpleOverlaps.TestSimpleOverlapsGameState
// 0x0060 (FullSize[0x04E0] - InheritedSize[0x0480])
class ATestSimpleOverlapsGameState : public AGameState
{
public:
	unsigned char                                      UnknownData_KPJX[0x60];                                    // 0x0480(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SimpleOverlaps.TestSimpleOverlapsGameState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
