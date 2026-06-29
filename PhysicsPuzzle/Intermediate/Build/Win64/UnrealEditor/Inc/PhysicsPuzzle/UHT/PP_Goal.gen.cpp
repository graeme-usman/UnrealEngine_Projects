// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/PP_Goal.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePP_Goal() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_Goal();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_Goal_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APP_Goal *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APP_Goal;
UClass* APP_Goal::GetPrivateStaticClass()
{
	using TClass = APP_Goal;
	if (!Z_Registration_Info_UClass_APP_Goal.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PP_Goal"),
			Z_Registration_Info_UClass_APP_Goal.InnerSingleton,
			StaticRegisterNativesAPP_Goal,
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
	return Z_Registration_Info_UClass_APP_Goal.InnerSingleton;
}
UClass* Z_Construct_UClass_APP_Goal_NoRegister()
{
	return APP_Goal::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APP_Goal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PP_Goal.h" },
		{ "ModuleRelativePath", "Public/Actors/PP_Goal.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APP_Goal constinit property declarations *********************************
// ********** End Class APP_Goal constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP_Goal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APP_Goal_Statics
UObject* (*const Z_Construct_UClass_APP_Goal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_Goal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APP_Goal_Statics::ClassParams = {
	&APP_Goal::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APP_Goal_Statics::Class_MetaDataParams), Z_Construct_UClass_APP_Goal_Statics::Class_MetaDataParams)
};
void APP_Goal::StaticRegisterNativesAPP_Goal()
{
}
UClass* Z_Construct_UClass_APP_Goal()
{
	if (!Z_Registration_Info_UClass_APP_Goal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APP_Goal.OuterSingleton, Z_Construct_UClass_APP_Goal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APP_Goal.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APP_Goal);
APP_Goal::~APP_Goal() {}
// ********** End Class APP_Goal *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h__Script_PhysicsPuzzle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APP_Goal, APP_Goal::StaticClass, TEXT("APP_Goal"), &Z_Registration_Info_UClass_APP_Goal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APP_Goal), 428946561U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h__Script_PhysicsPuzzle_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h__Script_PhysicsPuzzle_295099580{
	TEXT("/Script/PhysicsPuzzle"),
	Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h__Script_PhysicsPuzzle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h__Script_PhysicsPuzzle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
