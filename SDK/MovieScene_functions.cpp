﻿// Name: SeaOfThieves, Version: 2.0.23

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

void FMovieScenePropertySectionData::AfterRead()
{
}

void FMovieScenePropertySectionData::BeforeDelete()
{
}

void FMovieSceneKeyStruct::AfterRead()
{
}

void FMovieSceneKeyStruct::BeforeDelete()
{
}

void FMovieSceneSequenceTransform::AfterRead()
{
}

void FMovieSceneSequenceTransform::BeforeDelete()
{
}

void FMovieSceneSequenceID::AfterRead()
{
}

void FMovieSceneSequenceID::BeforeDelete()
{
}

void FMovieSceneSubSequenceData::AfterRead()
{
	READ_PTR_FULL(Sequence, UMovieSceneSequence);
}

void FMovieSceneSubSequenceData::BeforeDelete()
{
	DELE_PTR_FULL(Sequence);
}

void FMovieSceneTrackEvalOptions::AfterRead()
{
}

void FMovieSceneTrackEvalOptions::BeforeDelete()
{
}

void FMovieSceneTrackCompilationParams::AfterRead()
{
}

void FMovieSceneTrackCompilationParams::BeforeDelete()
{
}

void FMovieSceneTrackIdentifier::AfterRead()
{
}

void FMovieSceneTrackIdentifier::BeforeDelete()
{
}

void FMovieSceneGenerationLedger::AfterRead()
{
}

void FMovieSceneGenerationLedger::BeforeDelete()
{
}

void FMovieSceneSegment::AfterRead()
{
}

void FMovieSceneSegment::BeforeDelete()
{
}

void FMovieSceneEvalTemplatePtr::AfterRead()
{
}

void FMovieSceneEvalTemplatePtr::BeforeDelete()
{
}

void FMovieSceneTrackImplementationPtr::AfterRead()
{
}

void FMovieSceneTrackImplementationPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationTrack::AfterRead()
{
}

void FMovieSceneEvaluationTrack::BeforeDelete()
{
}

void FMovieSceneEvaluationGroupLUTIndex::AfterRead()
{
}

void FMovieSceneEvaluationGroupLUTIndex::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldTrackPtr::AfterRead()
{
}

void FMovieSceneEvaluationFieldTrackPtr::BeforeDelete()
{
}

void FMovieSceneEvaluationFieldSegmentPtr::AfterRead()
{
	FMovieSceneEvaluationFieldTrackPtr::AfterRead();

}

void FMovieSceneEvaluationFieldSegmentPtr::BeforeDelete()
{
	FMovieSceneEvaluationFieldTrackPtr::BeforeDelete();

}

void FMovieSceneEvaluationGroup::AfterRead()
{
}

void FMovieSceneEvaluationGroup::BeforeDelete()
{
}

void FMovieSceneEvaluationMetaData::AfterRead()
{
}

void FMovieSceneEvaluationMetaData::BeforeDelete()
{
}

void FMovieSceneEvaluationField::AfterRead()
{
}

void FMovieSceneEvaluationField::BeforeDelete()
{
}

void FMovieSceneSequenceHierarchyNode::AfterRead()
{
}

void FMovieSceneSequenceHierarchyNode::BeforeDelete()
{
}

void FMovieSceneSequenceHierarchy::AfterRead()
{
}

void FMovieSceneSequenceHierarchy::BeforeDelete()
{
}

void FMovieSceneEvaluationTemplate::AfterRead()
{
}

void FMovieSceneEvaluationTemplate::BeforeDelete()
{
}

void FCachedMovieSceneEvaluationTemplate::AfterRead()
{
	FMovieSceneEvaluationTemplate::AfterRead();

}

void FCachedMovieSceneEvaluationTemplate::BeforeDelete()
{
	FMovieSceneEvaluationTemplate::BeforeDelete();

}

void FMovieSceneSequenceCachedSignature::AfterRead()
{
}

void FMovieSceneSequenceCachedSignature::BeforeDelete()
{
}

void FMovieSceneEvalTemplateBase::AfterRead()
{
}

void FMovieSceneEvalTemplateBase::BeforeDelete()
{
}

void FMovieSceneEvalTemplate::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneEvalTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FMovieSceneLegacyTrackInstanceTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

	READ_PTR_FULL(Track, UMovieSceneTrack);
}

void FMovieSceneLegacyTrackInstanceTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

	DELE_PTR_FULL(Track);
}

void FSectionEvaluationData::AfterRead()
{
}

void FSectionEvaluationData::BeforeDelete()
{
}

void FMovieSceneTrackImplementation::AfterRead()
{
	FMovieSceneEvalTemplateBase::AfterRead();

}

void FMovieSceneTrackImplementation::BeforeDelete()
{
	FMovieSceneEvalTemplateBase::BeforeDelete();

}

void FMovieSceneSectionParameters::AfterRead()
{
}

void FMovieSceneSectionParameters::BeforeDelete()
{
}

void FMovieSceneTrackLabels::AfterRead()
{
}

void FMovieSceneTrackLabels::BeforeDelete()
{
}

void FMovieSceneExpansionState::AfterRead()
{
}

void FMovieSceneExpansionState::BeforeDelete()
{
}

void FMovieSceneEditorData::AfterRead()
{
}

void FMovieSceneEditorData::BeforeDelete()
{
}

void FMovieSceneObjectBindingPtr::AfterRead()
{
}

void FMovieSceneObjectBindingPtr::BeforeDelete()
{
}

void FMovieSceneBindingOverrideData::AfterRead()
{
}

void FMovieSceneBindingOverrideData::BeforeDelete()
{
}

void FMovieSceneSequencePlaybackSettings::AfterRead()
{
}

void FMovieSceneSequencePlaybackSettings::BeforeDelete()
{
}

void FMovieSceneSectionEvalOptions::AfterRead()
{
}

void FMovieSceneSectionEvalOptions::BeforeDelete()
{
}

void FMovieSceneSpawnable::AfterRead()
{
	READ_PTR_FULL(ObjectTemplate, UObject);
}

void FMovieSceneSpawnable::BeforeDelete()
{
	DELE_PTR_FULL(ObjectTemplate);
}

void FMovieScenePossessable::AfterRead()
{
	READ_PTR_FULL(PossessedObjectClass, UClass);
}

void FMovieScenePossessable::BeforeDelete()
{
	DELE_PTR_FULL(PossessedObjectClass);
}

void FMovieSceneBinding::AfterRead()
{
}

void FMovieSceneBinding::BeforeDelete()
{
}

void FMovieSceneEmptyStruct::AfterRead()
{
}

void FMovieSceneEmptyStruct::BeforeDelete()
{
}

void UMovieSceneSignedObject::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneSignedObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieScene::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

	READ_PTR_FULL(CameraCutTrack, UMovieSceneTrack);
}

void UMovieScene::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

	DELE_PTR_FULL(CameraCutTrack);
}

void UMovieSceneBindingOverridesInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneBindingOverridesInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneBindingOverrides::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneBindingOverrides::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMovieSceneBindingOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMovieSceneBindingOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMovieSceneFolder::AfterRead()
{
	UObject::AfterRead();

}

void UMovieSceneFolder::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Stop");

	UMovieSceneSequencePlayer_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::StartPlayingNextTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick");

	UMovieSceneSequencePlayer_StartPlayingNextTick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          PlayRate                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlayRate");

	UMovieSceneSequencePlayer_SetPlayRate_Params params;
	params.PlayRate = PlayRate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewStartTime                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          NewEndTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::SetPlaybackRange(float NewStartTime, float NewEndTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackRange");

	UMovieSceneSequencePlayer_SetPlaybackRange_Params params;
	params.NewStartTime = NewStartTime;
	params.NewEndTime = NewEndTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          NewPlaybackPosition            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::SetPlaybackPosition(float NewPlaybackPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition");

	UMovieSceneSequencePlayer_SetPlaybackPosition_Params params;
	params.NewPlaybackPosition = NewPlaybackPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::PlayReverse()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayReverse");

	UMovieSceneSequencePlayer_PlayReverse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            NumLoops                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovieSceneSequencePlayer::PlayLooping(int NumLoops)
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.PlayLooping");

	UMovieSceneSequencePlayer_PlayLooping_Params params;
	params.NumLoops = NumLoops;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Play");

	UMovieSceneSequencePlayer_Play_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::Pause()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.Pause");

	UMovieSceneSequencePlayer_Pause_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMovieSceneSequencePlayer::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.IsPlaying");

	UMovieSceneSequencePlayer_IsPlaying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlayRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlayRate");

	UMovieSceneSequencePlayer_GetPlayRate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlaybackStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackStart");

	UMovieSceneSequencePlayer_GetPlaybackStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlaybackPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition");

	UMovieSceneSequencePlayer_GetPlaybackPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetPlaybackEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd");

	UMovieSceneSequencePlayer_GetPlaybackEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.GetLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UMovieSceneSequencePlayer::GetLength()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.GetLength");

	UMovieSceneSequencePlayer_GetLength_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection");

	UMovieSceneSequencePlayer_ChangePlaybackDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMovieSceneSequencePlayer::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Sequence, UMovieSceneSequence);
}

void UMovieSceneSequencePlayer::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Sequence);
}

void UMovieSceneSection::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneSection::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneTrack::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneTrack::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneSequence::AfterRead()
{
	UMovieSceneSignedObject::AfterRead();

}

void UMovieSceneSequence::BeforeDelete()
{
	UMovieSceneSignedObject::BeforeDelete();

}

void UMovieSceneNameableTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneNameableTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
