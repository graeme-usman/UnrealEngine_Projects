// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FootballerGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FOOTBALLER_FootballerGameMode_generated_h
#error "FootballerGameMode.generated.h already included, missing '#pragma once' in FootballerGameMode.h"
#endif
#define FOOTBALLER_FootballerGameMode_generated_h

#define FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFootballerGameMode(); \
	friend struct Z_Construct_UClass_AFootballerGameMode_Statics; \
public: \
	DECLARE_CLASS(AFootballerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Footballer"), FOOTBALLER_API) \
	DECLARE_SERIALIZER(AFootballerGameMode)


#define FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFootballerGameMode(AFootballerGameMode&&); \
	AFootballerGameMode(const AFootballerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FOOTBALLER_API, AFootballerGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFootballerGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFootballerGameMode) \
	FOOTBALLER_API virtual ~AFootballerGameMode();


#define FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_9_PROLOG
#define FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FOOTBALLER_API UClass* StaticClass<class AFootballerGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
