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

// BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C
// 0x00A5 (FullSize[0x04CD] - InheritedSize[0x0428])
class ABP_Placement_Garden_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0428(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         Billboard;                                                 // 0x0430(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Spherical_Volume;                                          // 0x0438(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USceneComponent*                             Scene;                                                     // 0x0440(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	TArray<struct FPlacementGardenSeed>                Meshes;                                                    // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Radius;                                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Radius_Visible;                                            // 0x045C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UE3R[0x3];                                     // 0x045D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Spawn_Density;                                             // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Spawn_Clustering;                                          // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Seed;                                                      // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_IDYU[0x4];                                     // 0x046C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UObject*>                             Physical_Materials;                                        // 0x0470(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Update_On_Drag;                                            // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_83OU[0x7];                                     // 0x0481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      Mesh_Probabilities;                                        // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UInstancedStaticMeshComponent*>       Instanced_Meshes;                                          // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FRandomStream                               Random;                                                    // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                Instance_Count;                                            // 0x04B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FGAL[0x4];                                     // 0x04B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLinearColor>                        Mesh_Radii;                                                // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              Max_Draw_Distance;                                         // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Cast_Shadows;                                              // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Placement_Garden.BP_Placement_Garden_C");
		return ptr;
	}



	void Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created);
	void Create_Garden();
	void Initialise_Instances();
	void UserConstructionScript();
	void Force_Create_Garden();
	void ExecuteUbergraph_BP_Placement_Garden(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
