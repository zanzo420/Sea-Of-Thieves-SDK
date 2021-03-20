// Name: SeaOfThieves, Version: 2.0.23

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function wsp_Pole_Orb_Light_b.wsp_Pole_Orb_Light_b_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_Pole_Orb_Light_b_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_Pole_Orb_Light_b.wsp_Pole_Orb_Light_b_C.UserConstructionScript");

	Awsp_Pole_Orb_Light_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_Pole_Orb_Light_b_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(tls_linstock_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_rope_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent03, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent02, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent01, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void Awsp_Pole_Orb_Light_b_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(tls_linstock_01_a);
	DELE_PTR_FULL(wsp_rope_a);
	DELE_PTR_FULL(StaticMeshComponent03);
	DELE_PTR_FULL(StaticMeshComponent02);
	DELE_PTR_FULL(StaticMeshComponent01);
	DELE_PTR_FULL(StaticMeshComponent0);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
