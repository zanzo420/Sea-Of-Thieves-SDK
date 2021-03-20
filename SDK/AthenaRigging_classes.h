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

// Class AthenaRigging.InstancedRopeComponent
// 0x00C8 (FullSize[0x05F0] - InheritedSize[0x0528])
class UInstancedRopeComponent : public UPrimitiveComponent
{
public:
	class UStaticMesh*                                 StaticMesh;                                                // 0x0528(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInstancedRopeParams>                Ropes;                                                     // 0x0530(0x0010) (Edit, ZeroConstructor, EditConst)
	int                                                ShadowLOD;                                                 // 0x0540(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FZ42[0xAC];                                    // 0x0544(0x00AC) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.InstancedRopeComponent");
		return ptr;
	}



	void SetUnderwater(bool Underwater);
	void SetRopes(TArray<struct FInstancedRopeParams> InRopes);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaRigging.MaterialExpressionRopeParameter
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMaterialExpressionRopeParameter : public UMaterialExpression
{
public:
	TEnumAsByte<AthenaRigging_EInstancedRopeParameterType> RopeParameterType;                                         // 0x0070(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CD7R[0x7];                                     // 0x0071(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.MaterialExpressionRopeParameter");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaRigging.RiggingSystem
// 0x0150 (FullSize[0x0578] - InheritedSize[0x0428])
class ARiggingSystem : public AActor
{
public:
	unsigned char                                      UnknownData_LRAW[0x8];                                     // 0x0428(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             Root;                                                      // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInstancedRopeComponent*                     InstancedRopes;                                            // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FRiggingSystemLine>                  Lines;                                                     // 0x0440(0x0010) (ZeroConstructor)
	TArray<struct FInstancedRopeParams>                Ropes;                                                     // 0x0450(0x0010) (ZeroConstructor)
	TArray<class UMobileInstancedStaticMeshComponent*> PulleyInstances;                                           // 0x0460(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	struct FRiggingSystemPulleyData                    Pulleys;                                                   // 0x0470(0x0060)
	TArray<struct FSocketId>                           Sockets;                                                   // 0x04D0(0x0010) (ZeroConstructor)
	TArray<float>                                      InitialMainRopeLengths;                                    // 0x04E0(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_5VMA[0x88];                                    // 0x04F0(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystem");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaRigging.RiggingSystemComponent
// 0x0048 (FullSize[0x02D0] - InheritedSize[0x0288])
class URiggingSystemComponent : public USceneComponent
{
public:
	struct FRopeStyleParams                            RopeStyle;                                                 // 0x0288(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<struct FRiggingSystemLineGroup>             LineGroups;                                                // 0x02A8(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ARiggingSystem*                              Impl;                                                      // 0x02B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UIXT[0x10];                                    // 0x02C0(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RiggingSystemComponent");
		return ptr;
	}



	void SetSocketLookupSource(class AActor* InSocketSource);
	int ConvertLineToRopeIndex(const struct FName& InLineGroupName, int InLineOffset);
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaRigging.RopeCatenaryRenderComponent
// 0x0008 (FullSize[0x05C8] - InheritedSize[0x05C0])
class URopeCatenaryRenderComponent : public UCordRenderComponent
{
public:
	unsigned char                                      UnknownData_ZOZR[0x8];                                     // 0x05C0(0x0008) Fix Super Size


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RopeCatenaryRenderComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaRigging.RopeInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class URopeInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AthenaRigging.RopeInterface");
		return ptr;
	}



	void SetRopeUVOffset(float InUVOffset);
	void SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
