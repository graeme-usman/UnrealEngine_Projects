// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/PP_GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePP_GameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_GameMode();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APP_GameMode *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APP_GameMode;
UClass* APP_GameMode::GetPrivateStaticClass()
{
	using TClass = APP_GameMode;
	if (!Z_Registration_Info_UClass_APP_GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PP_GameMode"),
			Z_Registration_Info_UClass_APP_GameMode.InnerSingleton,
			StaticRegisterNativesAPP_GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APP_GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_APP_GameMode_NoRegister()
{
	return APP_GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APP_GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/PP_GameMode.h" },
		{ "ModuleRelativePath", "Public/Core/PP_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA

// ********** Begin Class APP_GameMode constinit property declarations *****************************
// ********** End Class APP_GameMode constinit property declarations *******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP_GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APP_GameMode_Statics
UObject* (*const Z_Construct_UClass_APP_GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APP_GameMode_Statics::ClassParams = {
	&APP_GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APP_GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APP_GameMode_Statics::Class_MetaDataParams)
};
void APP_GameMode::StaticRegisterNativesAPP_GameMode()
{
}
UClass* Z_Construct_UClass_APP_GameMode()
{
	if (!Z_Registration_Info_UClass_APP_GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APP_GameMode.OuterSingleton, Z_Construct_UClass_APP_GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APP_GameMode.OuterSingleton;
}
APP_GameMode::APP_GameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APP_GameMode);
APP_GameMode::~APP_GameMode() {}
// ********** End Class APP_GameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_GameMode_h__Script_PhysicsPuzzle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APP_GameMode, APP_GameMode::StaticClass, TEXT("APP_GameMode"), &Z_Registration_Info_UClass_APP_GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APP_GameMode), 2637570731U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_GameMode_h__Script_PhysicsPuzzle_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_GameMode_h__Script_PhysicsPuzzle_4109066014{
	TEXT("/Script/PhysicsPuzzle"),
	Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_GameMode_h__Script_PhysicsPuzzle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_GameMode_h__Script_PhysicsPuzzle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
