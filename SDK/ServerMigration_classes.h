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

// Class ServerMigration.MigrationControlChannel
// 0x0048 (FullSize[0x00B0] - InheritedSize[0x0068])
class UMigrationControlChannel : public UChannel
{
public:
	unsigned char                                      UnknownData_5WED[0x48];                                    // 0x0068(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.MigrationControlChannel");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.MigrationRelevancyClusterActor
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class AMigrationRelevancyClusterActor : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.MigrationRelevancyClusterActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.NetworkTestingBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UNetworkTestingBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.NetworkTestingBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner);
	void STATIC_SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime);
	void STATIC_ResumePropertyTracking(class AActor* TargetActor);
	void STATIC_PausePropertyTrackingOnNextSend(class AActor* TargetActor);
	bool STATIC_IsComponentNetDormant(int ClientConnectionIdx, class UActorComponent* TargetComponent);
	bool STATIC_IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController);
	bool STATIC_IsActorNetDormant(class AActor* TargetActor);
	bool STATIC_IsActorInNetworkClusterGlobal(class AActor* TargetActor);
	bool STATIC_IsActorInNetworkCluster(class AActor* TargetActor, class AActor* NetworkClusterOwner);
	bool STATIC_IsActorInLevelNetworkClusterOnOwner(class AActor* TargetActor, class AActor* LevelOwner);
	bool STATIC_IsActorInLevelNetworkCluster(class AActor* TargetActor, const struct FName& Level);
	bool STATIC_HasComponentReplicator(int ClientConnectionIdx, class UActorComponent* TargetComponent);
	int STATIC_GetReliableBufferBunchCount(class AActor* TargetActor);
	bool STATIC_FlushComponentNetDormancy(class UActorComponent* TargetComponent);
	void STATIC_ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController);
	void STATIC_ClearRecentRelevanceTimer(class AActor* TargetActor);
	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UServerMigrationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	void STATIC_WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	void STATIC_WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor);
	TArray<unsigned char> STATIC_TestSerialiseActorToBuffer(class AActor* TargetActor);
	TArray<unsigned char> STATIC_TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup);
	class AActor* STATIC_TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	TArray<class AActor*> STATIC_TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset);
	TArray<class AActor*> STATIC_TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	class AActor* STATIC_TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer);
	void STATIC_SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings);
	void STATIC_SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings);
	void STATIC_SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss);
	void STATIC_ResumeReplication(class AActor* TargetActor);
	void STATIC_RegisterPersistentDynamicActor(class AActor* TargetActor, const struct FString& IdentificationName);
	void STATIC_PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused);
	bool STATIC_HasActorChannelFromServer(class AActor* TargetActor);
	bool STATIC_ClientsHaveDormantActor(class AActor* TargetActor);
	bool STATIC_ClientsHaveActorChannel(class AActor* TargetActor);
	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UServerMigrationSerialisationDetailsTestsActorRef : public UObject
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                         // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorRef");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay : public AActor
{
public:
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsActorWithChild : public AActor
{
public:
	class UChildActorComponent*                        ChildActorComponent;                                       // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithChild");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* SubObject;                                                 // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ActorComponent;                                            // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* Subobject2;                                                // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithDynamicComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr : public AActor
{
public:
	struct FNetActorPtr                                ActorPtr;                                                  // 0x0428(0x0014)
	unsigned char                                      UnknownData_EBFQ[0x4];                                     // 0x043C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithNetActorPtr");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId
// 0x0018 (FullSize[0x0440] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId : public AActor
{
public:
	struct FUniqueNetIdRepl                            UniqueId;                                                  // 0x0428(0x0018)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsActorWithUniqueNetId");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UServerMigrationSerialisationDetailsTestsMigratableComponent : public UActorComponent
{
public:
	float                                              FloatWithMigrationMarkup;                                  // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                IntWithNoMarkup;                                           // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigratableComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                              // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableComponentActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor : public AActor
{
public:
	class UServerMigrationSerialisationDetailsTestsMigratableComponent* ComponentWithMigrationMarkup;                              // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor : public AActor
{
public:
	unsigned char                                      UnknownData_10KP[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault
// 0x0000 (FullSize[0x0428] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor : public AActor
{
public:
	class UChildActorComponent*                        Component;                                                 // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor : public AActor
{
public:
	struct FServerMigrationCustomMigrationSerialisationStruct TestStruct;                                                // 0x0428(0x0004)
	unsigned char                                      UnknownData_UI78[0x4];                                     // 0x042C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor : public AActor
{
public:
	class AActor*                                      DependentActor;                                            // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor
// 0x0010 (FullSize[0x0438] - InheritedSize[0x0428])
class AServerMigrationSerialisationDetailsTestsMigrationReferenceActor : public AActor
{
public:
	class AActor*                                      ActorReferenceWithMigrationMarkup;                         // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JH56[0x8];                                     // 0x0430(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsMigrationReferenceActor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class UServerMigrationSerialisationDetailsTestsPropertyMarkup : public UObject
{
public:
	int                                                Int32NoMarkup;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolWithMigrationMarkup;                                   // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_72CQ[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringWithSaveGameMarkup;                                  // 0x0030(0x0010) (ZeroConstructor, SaveGame, HasGetValueTypeHash)
	float                                              FloatWithMigrationAndReplicationMarkup;                    // 0x0040(0x0004) (Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I3HR[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsPropertyMarkup");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UServerMigrationSerialisationDetailsTestsTArrayProperty : public UObject
{
public:
	TArray<int>                                        IntegerArrayWithMigrationMarkup;                           // 0x0028(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsTArrayProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UServerMigrationSerialisationDetailsTestsUStructProperty : public UObject
{
public:
	struct FServerMigrationSerialisationDetailsTestsUStruct SubStructWithMigrationMarkup;                              // 0x0028(0x000C)
	unsigned char                                      UnknownData_DZPR[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSerialisationDetailsTestsUStructProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.ServerMigrationSettings
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UServerMigrationSettings : public UObject
{
public:
	int                                                MaxSimultaneousMigrations;                                 // 0x0028(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P1S7[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TransportImplementation;                                   // 0x0030(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	int                                                ServerDefaultListenPort;                                   // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ServerListenPortRangeSize;                                 // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AutomationServerDefaultListenPort;                         // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RU5W[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InstanceImplementation;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	float                                              MigrationConnectionTimeoutSeconds;                         // 0x0060(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaitForClientActorRemappingTimeoutLength;                  // 0x0064(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaitForTransferOwnershipAcknowledgementTimeoutLength;      // 0x0068(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeserialisationTimeSliceLength;                            // 0x006C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.ServerMigrationSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.TestActorWithUObjectProperty
// 0x0008 (FullSize[0x0430] - InheritedSize[0x0428])
class ATestActorWithUObjectProperty : public AActor
{
public:
	class UObject*                                     ObjectProperty;                                            // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.TestActorWithUObjectProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ServerMigration.TestUObjectWithObjectProperty
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTestUObjectWithObjectProperty : public UObject
{
public:
	class UObject*                                     ObjectProperty;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ServerMigration.TestUObjectWithObjectProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
