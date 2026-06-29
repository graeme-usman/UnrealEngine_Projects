// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FootballerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOOTBALLER_FootballerCharacter_generated_h
#error "FootballerCharacter.generated.h already included, missing '#pragma once' in FootballerCharacter.h"
#endif
#define FOOTBALLER_FootballerCharacter_generated_h

#define FID_GitHub_Footballer_Source_Footballer_FootballerCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFootballerCharacter(); \
	friend struct Z_Construct_UClass_AFootballerCharacter_Statics; \
public: \
	DECLARE_CLASS(AFootballerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Footballer"), NO_API) \
	DECLARE_SERIALIZER(AFootballerCharacter)


#define FID_GitHub_Footballer_Source_Footballer_FootballerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFootballerCharacter(AFootballerCharacter&&); \
	AFootballerCharacter(const AFootballerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFootballerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFootballerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFootballerCharacter) \
	NO_API virtual ~AFootballerCharacter();


#define FID_GitHub_Footballer_Source_Footballer_FootballerCharacter_h_11_PROLOG
#define FID_GitHub_Footballer_Source_Footballer_FootballerCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Footballer_Source_Footballer_FootballerCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Footballer_Source_Footballer_FootballerCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOTBALLER_API UClass* StaticClass<class AFootballerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Footballer_Source_Footballer_FootballerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
