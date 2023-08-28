// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ReadyPlayerMeTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMesh;
class UTexture2D;
struct FAvatarMetadata;
#ifdef READYPLAYERME_ReadyPlayerMeTypes_generated_h
#error "ReadyPlayerMeTypes.generated.h already included, missing '#pragma once' in ReadyPlayerMeTypes.h"
#endif
#define READYPLAYERME_ReadyPlayerMeTypes_generated_h

#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAvatarMetadata_Statics; \
	READYPLAYERME_API static class UScriptStruct* StaticStruct();


template<> READYPLAYERME_API UScriptStruct* StaticStruct<struct FAvatarMetadata>();

#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_138_DELEGATE \
READYPLAYERME_API void FAvatarDownloadCompleted_DelegateWrapper(const FScriptDelegate& AvatarDownloadCompleted, USkeletalMesh* Mesh, FAvatarMetadata const& Metadata);


#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_140_DELEGATE \
READYPLAYERME_API void FAvatarLoadCompleted_DelegateWrapper(const FScriptDelegate& AvatarLoadCompleted);


#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_142_DELEGATE \
READYPLAYERME_API void FAvatarLoadFailed_DelegateWrapper(const FScriptDelegate& AvatarLoadFailed, const FString& ErrorMessage);


#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_144_DELEGATE \
READYPLAYERME_API void FDownloadImageCompleted_DelegateWrapper(const FScriptDelegate& DownloadImageCompleted, UTexture2D* Texture);


#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_146_DELEGATE \
READYPLAYERME_API void FDownloadImageFailed_DelegateWrapper(const FScriptDelegate& DownloadImageFailed, const FString& ErrorMessage);


#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_148_DELEGATE \
READYPLAYERME_API void FGlbLoadCompleted_DelegateWrapper(const FScriptDelegate& GlbLoadCompleted, USkeletalMesh* SkeletalMesh);


#define FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h_150_DELEGATE \
READYPLAYERME_API void FAvatarPreloadCompleted_DelegateWrapper(const FScriptDelegate& AvatarPreloadCompleted, bool bSuccess);


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMe_Public_ReadyPlayerMeTypes_h


#define FOREACH_ENUM_EAVATARGENDER(op) \
	op(EAvatarGender::Undefined) \
	op(EAvatarGender::Masculine) \
	op(EAvatarGender::Feminine) 

enum class EAvatarGender : uint8;
template<> struct TIsUEnumClass<EAvatarGender> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarGender>();

#define FOREACH_ENUM_EAVATARBODYTYPE(op) \
	op(EAvatarBodyType::Undefined) \
	op(EAvatarBodyType::FullBody) \
	op(EAvatarBodyType::HalfBody) 

enum class EAvatarBodyType : uint8;
template<> struct TIsUEnumClass<EAvatarBodyType> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarBodyType>();

#define FOREACH_ENUM_ESTANDARDMORPHTARGETGROUP(op) \
	op(EStandardMorphTargetGroup::None) \
	op(EStandardMorphTargetGroup::ArKit) \
	op(EStandardMorphTargetGroup::Oculus) 

enum class EStandardMorphTargetGroup : uint8;
template<> struct TIsUEnumClass<EStandardMorphTargetGroup> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EStandardMorphTargetGroup>();

#define FOREACH_ENUM_EAVATARMORPHTARGET(op) \
	op(EAvatarMorphTarget::Viseme_aa) \
	op(EAvatarMorphTarget::Viseme_E) \
	op(EAvatarMorphTarget::Viseme_I) \
	op(EAvatarMorphTarget::Viseme_O) \
	op(EAvatarMorphTarget::Viseme_U) \
	op(EAvatarMorphTarget::Viseme_CH) \
	op(EAvatarMorphTarget::Viseme_DD) \
	op(EAvatarMorphTarget::Viseme_FF) \
	op(EAvatarMorphTarget::Viseme_kk) \
	op(EAvatarMorphTarget::Viseme_nn) \
	op(EAvatarMorphTarget::Viseme_PP) \
	op(EAvatarMorphTarget::Viseme_RR) \
	op(EAvatarMorphTarget::Viseme_sil) \
	op(EAvatarMorphTarget::Viseme_SS) \
	op(EAvatarMorphTarget::Viseme_TH) \
	op(EAvatarMorphTarget::BrowDownLeft) \
	op(EAvatarMorphTarget::BrowDownRight) \
	op(EAvatarMorphTarget::BrowInnerUp) \
	op(EAvatarMorphTarget::BrowOuterUpLeft) \
	op(EAvatarMorphTarget::BrowOuterUpRight) \
	op(EAvatarMorphTarget::EyeBlinkLeft) \
	op(EAvatarMorphTarget::EyeBlinkRight) \
	op(EAvatarMorphTarget::EyeSquintLeft) \
	op(EAvatarMorphTarget::EyeSquintRight) \
	op(EAvatarMorphTarget::EyeWideLeft) \
	op(EAvatarMorphTarget::EyeWideRight) \
	op(EAvatarMorphTarget::JawOpen) \
	op(EAvatarMorphTarget::JawForward) \
	op(EAvatarMorphTarget::JawLeft) \
	op(EAvatarMorphTarget::JawRight) \
	op(EAvatarMorphTarget::NoseSneerLeft) \
	op(EAvatarMorphTarget::NoseSneerRight) \
	op(EAvatarMorphTarget::CheekPuff) \
	op(EAvatarMorphTarget::CheekSquintLeft) \
	op(EAvatarMorphTarget::CheekSquintRight) \
	op(EAvatarMorphTarget::MouthSmileLeft) \
	op(EAvatarMorphTarget::MouthSmileRight) \
	op(EAvatarMorphTarget::MouthLeft) \
	op(EAvatarMorphTarget::MouthRight) \
	op(EAvatarMorphTarget::MouthClose) \
	op(EAvatarMorphTarget::MouthFunnel) \
	op(EAvatarMorphTarget::MouthDimpleLeft) \
	op(EAvatarMorphTarget::MouthDimpleRight) \
	op(EAvatarMorphTarget::MouthStretchLeft) \
	op(EAvatarMorphTarget::MouthStretchRight) \
	op(EAvatarMorphTarget::MouthRollLower) \
	op(EAvatarMorphTarget::MouthRollUpper) \
	op(EAvatarMorphTarget::MouthPressLeft) \
	op(EAvatarMorphTarget::MouthPressRight) \
	op(EAvatarMorphTarget::MouthUpperUpLeft) \
	op(EAvatarMorphTarget::MouthUpperUpRight) \
	op(EAvatarMorphTarget::MouthFrownLeft) \
	op(EAvatarMorphTarget::MouthFrownRight) \
	op(EAvatarMorphTarget::MouthPucker) \
	op(EAvatarMorphTarget::MouthShrugLower) \
	op(EAvatarMorphTarget::MouthShrugUpper) \
	op(EAvatarMorphTarget::MouthLowerDownLeft) \
	op(EAvatarMorphTarget::MouthLowerDownRight) \
	op(EAvatarMorphTarget::MouthOpen) \
	op(EAvatarMorphTarget::MouthSmile) \
	op(EAvatarMorphTarget::EyesClosed) \
	op(EAvatarMorphTarget::EyesLookUp) \
	op(EAvatarMorphTarget::EyesLookDown) \
	op(EAvatarMorphTarget::EyeLookDownLeft) \
	op(EAvatarMorphTarget::EyeLookInLeft) \
	op(EAvatarMorphTarget::EyeLookOutLeft) \
	op(EAvatarMorphTarget::EyeLookUpLeft) \
	op(EAvatarMorphTarget::EyeLookDownRight) \
	op(EAvatarMorphTarget::EyeLookInRight) \
	op(EAvatarMorphTarget::EyeLookOutRight) \
	op(EAvatarMorphTarget::EyeLookUpRight) \
	op(EAvatarMorphTarget::TongueOut) 

enum class EAvatarMorphTarget : uint8;
template<> struct TIsUEnumClass<EAvatarMorphTarget> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<EAvatarMorphTarget>();

#define FOREACH_ENUM_ERENDERSCENETYPE(op) \
	op(ERenderSceneType::FullBodyPortrait) \
	op(ERenderSceneType::HalfBodyPortrait) \
	op(ERenderSceneType::FullBodyPortraitTransparent) \
	op(ERenderSceneType::HalfBodyPortraitTransparent) \
	op(ERenderSceneType::FullBodyPostureTransparent) 

enum class ERenderSceneType : uint8;
template<> struct TIsUEnumClass<ERenderSceneType> { enum { Value = true }; };
template<> READYPLAYERME_API UEnum* StaticEnum<ERenderSceneType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
