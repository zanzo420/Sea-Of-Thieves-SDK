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

// Function tls_wld_harpoon_light_a.tls_wld_harpoon_light_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Atls_wld_harpoon_light_a_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function tls_wld_harpoon_light_a.tls_wld_harpoon_light_a_C.UserConstructionScript");

	Atls_wld_harpoon_light_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Atls_wld_harpoon_light_a_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void Atls_wld_harpoon_light_a_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
