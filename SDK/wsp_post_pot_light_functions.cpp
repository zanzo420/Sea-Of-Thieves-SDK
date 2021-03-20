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

// Function wsp_post_pot_light.wsp_post_pot_light_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_post_pot_light_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function wsp_post_pot_light.wsp_post_pot_light_C.UserConstructionScript");

	Awsp_post_pot_light_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_post_pot_light_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
}

void Awsp_post_pot_light_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
