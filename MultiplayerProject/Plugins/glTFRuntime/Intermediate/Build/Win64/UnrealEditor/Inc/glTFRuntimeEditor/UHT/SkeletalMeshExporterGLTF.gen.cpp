// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "glTFRuntimeEditor/Public/SkeletalMeshExporterGLTF.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshExporterGLTF() {}
// Cross Module References
	GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF();
	GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF_NoRegister();
	GLTFRUNTIMEEDITOR_API UClass* Z_Construct_UClass_USkeletonExporterGLTF();
	UPackage* Z_Construct_UPackage__Script_glTFRuntimeEditor();
// End Cross Module References
	void USkeletalMeshExporterGLTF::StaticRegisterNativesUSkeletalMeshExporterGLTF()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshExporterGLTF);
	UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF_NoRegister()
	{
		return USkeletalMeshExporterGLTF::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletonExporterGLTF,
		(UObject* (*)())Z_Construct_UPackage__Script_glTFRuntimeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SkeletalMeshExporterGLTF.h" },
		{ "ModuleRelativePath", "Public/SkeletalMeshExporterGLTF.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshExporterGLTF>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::ClassParams = {
		&USkeletalMeshExporterGLTF::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshExporterGLTF()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshExporterGLTF.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshExporterGLTF.OuterSingleton, Z_Construct_UClass_USkeletalMeshExporterGLTF_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshExporterGLTF.OuterSingleton;
	}
	template<> GLTFRUNTIMEEDITOR_API UClass* StaticClass<USkeletalMeshExporterGLTF>()
	{
		return USkeletalMeshExporterGLTF::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshExporterGLTF);
	USkeletalMeshExporterGLTF::~USkeletalMeshExporterGLTF() {}
	struct Z_CompiledInDeferFile_FID_WiseWork_Plugins_glTFRuntime_Source_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WiseWork_Plugins_glTFRuntime_Source_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletalMeshExporterGLTF, USkeletalMeshExporterGLTF::StaticClass, TEXT("USkeletalMeshExporterGLTF"), &Z_Registration_Info_UClass_USkeletalMeshExporterGLTF, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshExporterGLTF), 3795144276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_WiseWork_Plugins_glTFRuntime_Source_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_3474894334(TEXT("/Script/glTFRuntimeEditor"),
		Z_CompiledInDeferFile_FID_WiseWork_Plugins_glTFRuntime_Source_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_WiseWork_Plugins_glTFRuntime_Source_glTFRuntimeEditor_Public_SkeletalMeshExporterGLTF_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
