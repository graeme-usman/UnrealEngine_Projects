// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/PP_PlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePP_PlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_PlayerController();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APP_PlayerController *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APP_PlayerController;
UClass* APP_PlayerController::GetPrivateStaticClass()
{
	using TClass = APP_PlayerController;
	if (!Z_Registration_Info_UClass_APP_PlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PP_PlayerController"),
			Z_Registration_Info_UClass_APP_PlayerController.InnerSingleton,
			StaticRegisterNativesAPP_PlayerController,
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
	return Z_Registration_Info_UClass_APP_PlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_APP_PlayerController_NoRegister()
{
	return APP_PlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APP_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/PP_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Core/PP_PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Core/PP_PlayerController.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APP_PlayerController constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APP_PlayerController constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APP_PlayerController_Statics

// ********** Begin Class APP_PlayerController Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APP_PlayerController_Statics::NewProp_MovementContext = { "MovementContext", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APP_PlayerController, MovementContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementContext_MetaData), NewProp_MovementContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APP_PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP_PlayerController_Statics::NewProp_MovementContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_PlayerController_Statics::PropPointers) < 2048);
// ********** End Class APP_PlayerController Property Definitions **********************************
UObject* (*const Z_Construct_UClass_APP_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APP_PlayerController_Statics::ClassParams = {
	&APP_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APP_PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APP_PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APP_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APP_PlayerController_Statics::Class_MetaDataParams)
};
void APP_PlayerController::StaticRegisterNativesAPP_PlayerController()
{
}
UClass* Z_Construct_UClass_APP_PlayerController()
{
	if (!Z_Registration_Info_UClass_APP_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APP_PlayerController.OuterSingleton, Z_Construct_UClass_APP_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APP_PlayerController.OuterSingleton;
}
APP_PlayerController::APP_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APP_PlayerController);
APP_PlayerController::~APP_PlayerController() {}
// ********** End Class APP_PlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h__Script_PhysicsPuzzle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APP_PlayerController, APP_PlayerController::StaticClass, TEXT("APP_PlayerController"), &Z_Registration_Info_UClass_APP_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APP_PlayerController), 3537945292U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h__Script_PhysicsPuzzle_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h__Script_PhysicsPuzzle_3162944905{
	TEXT("/Script/PhysicsPuzzle"),
	Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h__Script_PhysicsPuzzle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h__Script_PhysicsPuzzle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
