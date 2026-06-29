// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/PP_TopDownCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePP_TopDownCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_TopDownCharacter();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_TopDownCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APP_TopDownCharacter *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APP_TopDownCharacter;
UClass* APP_TopDownCharacter::GetPrivateStaticClass()
{
	using TClass = APP_TopDownCharacter;
	if (!Z_Registration_Info_UClass_APP_TopDownCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PP_TopDownCharacter"),
			Z_Registration_Info_UClass_APP_TopDownCharacter.InnerSingleton,
			StaticRegisterNativesAPP_TopDownCharacter,
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
	return Z_Registration_Info_UClass_APP_TopDownCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APP_TopDownCharacter_NoRegister()
{
	return APP_TopDownCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APP_TopDownCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/PP_TopDownCharacter.h" },
		{ "ModuleRelativePath", "Public/Core/PP_TopDownCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/PP_TopDownCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/PP_TopDownCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/PP_TopDownCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APP_TopDownCharacter constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APP_TopDownCharacter constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP_TopDownCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APP_TopDownCharacter_Statics

// ********** Begin Class APP_TopDownCharacter Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APP_TopDownCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APP_TopDownCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APP_TopDownCharacter_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APP_TopDownCharacter, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APP_TopDownCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APP_TopDownCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APP_TopDownCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP_TopDownCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP_TopDownCharacter_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP_TopDownCharacter_Statics::NewProp_Camera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_TopDownCharacter_Statics::PropPointers) < 2048);
// ********** End Class APP_TopDownCharacter Property Definitions **********************************
UObject* (*const Z_Construct_UClass_APP_TopDownCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_TopDownCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APP_TopDownCharacter_Statics::ClassParams = {
	&APP_TopDownCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APP_TopDownCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APP_TopDownCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APP_TopDownCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APP_TopDownCharacter_Statics::Class_MetaDataParams)
};
void APP_TopDownCharacter::StaticRegisterNativesAPP_TopDownCharacter()
{
}
UClass* Z_Construct_UClass_APP_TopDownCharacter()
{
	if (!Z_Registration_Info_UClass_APP_TopDownCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APP_TopDownCharacter.OuterSingleton, Z_Construct_UClass_APP_TopDownCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APP_TopDownCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APP_TopDownCharacter);
APP_TopDownCharacter::~APP_TopDownCharacter() {}
// ********** End Class APP_TopDownCharacter *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h__Script_PhysicsPuzzle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APP_TopDownCharacter, APP_TopDownCharacter::StaticClass, TEXT("APP_TopDownCharacter"), &Z_Registration_Info_UClass_APP_TopDownCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APP_TopDownCharacter), 3161281513U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h__Script_PhysicsPuzzle_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h__Script_PhysicsPuzzle_1764256227{
	TEXT("/Script/PhysicsPuzzle"),
	Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h__Script_PhysicsPuzzle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h__Script_PhysicsPuzzle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
