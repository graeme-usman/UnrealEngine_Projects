// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/PP_Goal.h"

#ifdef PHYSICSPUZZLE_PP_Goal_generated_h
#error "PP_Goal.generated.h already included, missing '#pragma once' in PP_Goal.h"
#endif
#define PHYSICSPUZZLE_PP_Goal_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APP_Goal *****************************************************************
struct Z_Construct_UClass_APP_Goal_Statics;
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_Goal_NoRegister();

#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPP_Goal(); \
	friend struct ::Z_Construct_UClass_APP_Goal_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSPUZZLE_API UClass* ::Z_Construct_UClass_APP_Goal_NoRegister(); \
public: \
	DECLARE_CLASS2(APP_Goal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsPuzzle"), Z_Construct_UClass_APP_Goal_NoRegister) \
	DECLARE_SERIALIZER(APP_Goal)


#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APP_Goal(APP_Goal&&) = delete; \
	APP_Goal(const APP_Goal&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APP_Goal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APP_Goal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APP_Goal) \
	NO_API virtual ~APP_Goal();


#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h_9_PROLOG
#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APP_Goal;

// ********** End Class APP_Goal *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_Goal_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
