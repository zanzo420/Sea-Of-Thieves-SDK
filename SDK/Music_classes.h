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
// Classes
//---------------------------------------------------------------------------

// Class Music.MusicZoneService
// 0x00A8 (FullSize[0x04D0] - InheritedSize[0x0428])
class AMusicZoneService : public AActor
{
public:
	unsigned char                                      UnknownData_V6CA[0xA8];                                    // 0x0428(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Music.MusicZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMusicZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneInterface");
		return ptr;
	}



	bool CanPlayForPlayer(class AActor* Player);
	void AfterRead();
	void BeforeDelete();

};

// Class Music.MusicZoneComponent
// 0x00B0 (FullSize[0x0338] - InheritedSize[0x0288])
class UMusicZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_0FUA[0x8];                                     // 0x0288(0x0008) Fix Super Size
	float                                              InnerRadius;                                               // 0x0290(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRadius;                                               // 0x0294(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LocationRTPC;                                              // 0x0298(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalRTPC;                                                 // 0x02A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_17H8[0x7];                                     // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x02A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEvent*>                         OneShotEvents;                                             // 0x02B8(0x0010) (Edit, ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x02C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableAfterPlayThrough;                                   // 0x02D0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ActivateOnBeginPlay;                                       // 0x02D1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0WUL[0x66];                                    // 0x02D2(0x0066) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneComponent");
		return ptr;
	}



	struct FWwiseEmitter GetEmitter();
	void DisableZone();
	void Client_StopMusicAndDisableZone();
	void Client_PlayOneShot(int Index);
	void ActivateZone();
	void AfterRead();
	void BeforeDelete();

};

// Class Music.AISpawnerMusicZoneComponent
// 0x0028 (FullSize[0x0360] - InheritedSize[0x0338])
class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
{
public:
	class UWwiseEvent*                                 BattleWonEvent;                                            // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  AISpawner;                                                 // 0x0340(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APawn*>                               SpawnerPawns;                                              // 0x0348(0x0010) (Net, ZeroConstructor)
	TEnumAsByte<Music_EAISpawnerMusicZoneState>        SpawnerState;                                              // 0x0358(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KD7R[0x7];                                     // 0x0359(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.AISpawnerMusicZoneComponent");
		return ptr;
	}



	void OnRep_SpawnerState();
	void AfterRead();
	void BeforeDelete();

};

// Class Music.SynchedMusicZoneComponent
// 0x0038 (FullSize[0x0370] - InheritedSize[0x0338])
class USynchedMusicZoneComponent : public UMusicZoneComponent
{
public:
	unsigned char                                      UnknownData_O5U1[0x4];                                     // 0x0338(0x0004) Fix Super Size
	int                                                PlayFromStartTimeMS;                                       // 0x033C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5ZUL[0x30];                                    // 0x0340(0x0030) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.SynchedMusicZoneComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Music.MusicZoneServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMusicZoneServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Music.MusicZoneServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
