// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/PP_PlayerController.h"

#ifdef PHYSICSPUZZLE_PP_PlayerController_generated_h
#error "PP_PlayerController.generated.h already included, missing '#pragma once' in PP_PlayerController.h"
#endif
#define PHYSICSPUZZLE_PP_PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APP_PlayerController *****************************************************
struct Z_Construct_UClass_APP_PlayerController_Statics;
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_PlayerController_NoRegister();

#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPP_PlayerController(); \
	friend struct ::Z_Construct_UClass_APP_PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSPUZZLE_API UClass* ::Z_Construct_UClass_APP_PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(APP_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsPuzzle"), Z_Construct_UClass_APP_PlayerController_NoRegister) \
	DECLARE_SERIALIZER(APP_PlayerController)


#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APP_PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APP_PlayerController(APP_PlayerController&&) = delete; \
	APP_PlayerController(const APP_PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APP_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APP_PlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APP_PlayerController) \
	NO_API virtual ~APP_PlayerController();


#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h_15_PROLOG
#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APP_PlayerController;

// ********** End Class APP_PlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
