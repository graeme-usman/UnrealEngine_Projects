// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/PP_TopDownCharacter.h"

#ifdef PHYSICSPUZZLE_PP_TopDownCharacter_generated_h
#error "PP_TopDownCharacter.generated.h already included, missing '#pragma once' in PP_TopDownCharacter.h"
#endif
#define PHYSICSPUZZLE_PP_TopDownCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APP_TopDownCharacter *****************************************************
struct Z_Construct_UClass_APP_TopDownCharacter_Statics;
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_TopDownCharacter_NoRegister();

#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPP_TopDownCharacter(); \
	friend struct ::Z_Construct_UClass_APP_TopDownCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PHYSICSPUZZLE_API UClass* ::Z_Construct_UClass_APP_TopDownCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(APP_TopDownCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysicsPuzzle"), Z_Construct_UClass_APP_TopDownCharacter_NoRegister) \
	DECLARE_SERIALIZER(APP_TopDownCharacter)


#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APP_TopDownCharacter(APP_TopDownCharacter&&) = delete; \
	APP_TopDownCharacter(const APP_TopDownCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APP_TopDownCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APP_TopDownCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APP_TopDownCharacter) \
	NO_API virtual ~APP_TopDownCharacter();


#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h_15_PROLOG
#define FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APP_TopDownCharacter;

// ********** End Class APP_TopDownCharacter *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Core_PP_TopDownCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
