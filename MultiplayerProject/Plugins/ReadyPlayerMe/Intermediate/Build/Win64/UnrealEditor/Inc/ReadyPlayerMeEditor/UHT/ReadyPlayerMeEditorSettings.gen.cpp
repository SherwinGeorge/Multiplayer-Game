// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ReadyPlayerMeEditor/Public/ReadyPlayerMeEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReadyPlayerMeEditorSettings() {}
// Cross Module References
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
	READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings();
	READYPLAYERMEEDITOR_API UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ReadyPlayerMeEditor();
// End Cross Module References
	DEFINE_FUNCTION(UReadyPlayerMeEditorSettings::execSetDontAskAgain)
	{
		P_GET_UBOOL(Z_Param_bDontAsk);
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeEditorSettings::SetDontAskAgain(Z_Param_bDontAsk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReadyPlayerMeEditorSettings::execEnableAnalytics)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UReadyPlayerMeEditorSettings::EnableAnalytics();
		P_NATIVE_END;
	}
	void UReadyPlayerMeEditorSettings::StaticRegisterNativesUReadyPlayerMeEditorSettings()
	{
		UClass* Class = UReadyPlayerMeEditorSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAnalytics", &UReadyPlayerMeEditorSettings::execEnableAnalytics },
			{ "SetDontAskAgain", &UReadyPlayerMeEditorSettings::execSetDontAskAgain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics Privacy" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorSettings, nullptr, "EnableAnalytics", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics
	{
		struct ReadyPlayerMeEditorSettings_eventSetDontAskAgain_Parms
		{
			bool bDontAsk;
		};
		static void NewProp_bDontAsk_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontAsk;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::NewProp_bDontAsk_SetBit(void* Obj)
	{
		((ReadyPlayerMeEditorSettings_eventSetDontAskAgain_Parms*)Obj)->bDontAsk = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::NewProp_bDontAsk = { "bDontAsk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ReadyPlayerMeEditorSettings_eventSetDontAskAgain_Parms), &Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::NewProp_bDontAsk_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::NewProp_bDontAsk,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Analytics Privacy" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReadyPlayerMeEditorSettings, nullptr, "SetDontAskAgain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::ReadyPlayerMeEditorSettings_eventSetDontAskAgain_Parms), Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReadyPlayerMeEditorSettings);
	UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings_NoRegister()
	{
		return UReadyPlayerMeEditorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAnalytics_MetaData[];
#endif
		static void NewProp_bEnableAnalytics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAnalytics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDontAskAgain_MetaData[];
#endif
		static void NewProp_bDontAskAgain_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDontAskAgain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnalyticsTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AnalyticsTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_ReadyPlayerMeEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorSettings_EnableAnalytics, "EnableAnalytics" }, // 2744032561
		{ &Z_Construct_UFunction_UReadyPlayerMeEditorSettings_SetDontAskAgain, "SetDontAskAgain" }, // 2653088205
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Ready Player Me" },
		{ "IncludePath", "ReadyPlayerMeEditorSettings.h" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_MetaData[] = {
		{ "Category", "Privacy" },
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_SetBit(void* Obj)
	{
		((UReadyPlayerMeEditorSettings*)Obj)->bEnableAnalytics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics = { "bEnableAnalytics", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReadyPlayerMeEditorSettings), &Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bDontAskAgain_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
	void Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bDontAskAgain_SetBit(void* Obj)
	{
		((UReadyPlayerMeEditorSettings*)Obj)->bDontAskAgain = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bDontAskAgain = { "bDontAskAgain", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UReadyPlayerMeEditorSettings), &Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bDontAskAgain_SetBit, METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bDontAskAgain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bDontAskAgain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReadyPlayerMeEditorSettings.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget = { "AnalyticsTarget", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UReadyPlayerMeEditorSettings, AnalyticsTarget), METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bEnableAnalytics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_bDontAskAgain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::NewProp_AnalyticsTarget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReadyPlayerMeEditorSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::ClassParams = {
		&UReadyPlayerMeEditorSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReadyPlayerMeEditorSettings()
	{
		if (!Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton, Z_Construct_UClass_UReadyPlayerMeEditorSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings.OuterSingleton;
	}
	template<> READYPLAYERMEEDITOR_API UClass* StaticClass<UReadyPlayerMeEditorSettings>()
	{
		return UReadyPlayerMeEditorSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReadyPlayerMeEditorSettings);
	UReadyPlayerMeEditorSettings::~UReadyPlayerMeEditorSettings() {}
	struct Z_CompiledInDeferFile_FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReadyPlayerMeEditorSettings, UReadyPlayerMeEditorSettings::StaticClass, TEXT("UReadyPlayerMeEditorSettings"), &Z_Registration_Info_UClass_UReadyPlayerMeEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReadyPlayerMeEditorSettings), 2145549042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_3062880901(TEXT("/Script/ReadyPlayerMeEditor"),
		Z_CompiledInDeferFile_FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WiseWork_Plugins_ReadyPlayerMe_Source_ReadyPlayerMeEditor_Public_ReadyPlayerMeEditorSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
