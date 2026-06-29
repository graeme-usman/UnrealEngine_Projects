// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootballer_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Footballer;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Footballer()
	{
		if (!Z_Registration_Info_UPackage__Script_Footballer.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Footballer",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xCA5B6DE5,
				0x8AF46EF4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Footballer.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Footballer.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Footballer(Z_Construct_UPackage__Script_Footballer, TEXT("/Script/Footballer"), Z_Registration_Info_UPackage__Script_Footballer, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCA5B6DE5, 0x8AF46EF4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
