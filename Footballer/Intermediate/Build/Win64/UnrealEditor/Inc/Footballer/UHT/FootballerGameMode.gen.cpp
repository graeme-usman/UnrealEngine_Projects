// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Footballer/FootballerGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootballerGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FOOTBALLER_API UClass* Z_Construct_UClass_AFootballerGameMode();
FOOTBALLER_API UClass* Z_Construct_UClass_AFootballerGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Footballer();
// End Cross Module References

// Begin Class AFootballerGameMode
void AFootballerGameMode::StaticRegisterNativesAFootballerGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFootballerGameMode);
UClass* Z_Construct_UClass_AFootballerGameMode_NoRegister()
{
	return AFootballerGameMode::StaticClass();
}
struct Z_Construct_UClass_AFootballerGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FootballerGameMode.h" },
		{ "ModuleRelativePath", "FootballerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFootballerGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFootballerGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Footballer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFootballerGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFootballerGameMode_Statics::ClassParams = {
	&AFootballerGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFootballerGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFootballerGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFootballerGameMode()
{
	if (!Z_Registration_Info_UClass_AFootballerGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFootballerGameMode.OuterSingleton, Z_Construct_UClass_AFootballerGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFootballerGameMode.OuterSingleton;
}
template<> FOOTBALLER_API UClass* StaticClass<AFootballerGameMode>()
{
	return AFootballerGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFootballerGameMode);
AFootballerGameMode::~AFootballerGameMode() {}
// End Class AFootballerGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFootballerGameMode, AFootballerGameMode::StaticClass, TEXT("AFootballerGameMode"), &Z_Registration_Info_UClass_AFootballerGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFootballerGameMode), 3385628862U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_1058534777(TEXT("/Script/Footballer"),
	Z_CompiledInDeferFile_FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_Footballer_Source_Footballer_FootballerGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
