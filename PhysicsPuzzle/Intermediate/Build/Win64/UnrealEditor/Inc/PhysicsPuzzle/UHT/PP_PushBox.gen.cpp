// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actors/PP_PushBox.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePP_PushBox() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_PushBox();
PHYSICSPUZZLE_API UClass* Z_Construct_UClass_APP_PushBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_PhysicsPuzzle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APP_PushBox Function BeginOverlap ****************************************
struct Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics
{
	struct PP_PushBox_eventBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/PP_PushBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function BeginOverlap constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function BeginOverlap constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function BeginOverlap Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PP_PushBox_eventBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PP_PushBox_eventBeginOverlap_Parms), &Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::PropPointers) < 2048);
// ********** End Function BeginOverlap Property Definitions ***************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APP_PushBox, nullptr, "BeginOverlap", 	Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::PP_PushBox_eventBeginOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::PP_PushBox_eventBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APP_PushBox_BeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APP_PushBox_BeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APP_PushBox::execBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APP_PushBox Function BeginOverlap ******************************************

// ********** Begin Class APP_PushBox Function EndOverlap ******************************************
struct Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics
{
	struct PP_PushBox_eventEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/PP_PushBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndOverlap constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EndOverlap constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EndOverlap Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::PropPointers) < 2048);
// ********** End Function EndOverlap Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APP_PushBox, nullptr, "EndOverlap", 	Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::PP_PushBox_eventEndOverlap_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::PP_PushBox_eventEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APP_PushBox_EndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APP_PushBox_EndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APP_PushBox::execEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class APP_PushBox Function EndOverlap ********************************************

// ********** Begin Class APP_PushBox Function OnHit ***********************************************
struct Z_Construct_UFunction_APP_PushBox_OnHit_Statics
{
	struct PP_PushBox_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actors/PP_PushBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnHit constinit property declarations *********************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnHit constinit property declarations ***********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnHit Property Definitions ********************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PP_PushBox_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APP_PushBox_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APP_PushBox_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_OnHit_Statics::PropPointers) < 2048);
// ********** End Function OnHit Property Definitions **********************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APP_PushBox_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APP_PushBox, nullptr, "OnHit", 	Z_Construct_UFunction_APP_PushBox_OnHit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_OnHit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APP_PushBox_OnHit_Statics::PP_PushBox_eventOnHit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APP_PushBox_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APP_PushBox_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APP_PushBox_OnHit_Statics::PP_PushBox_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APP_PushBox_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APP_PushBox_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APP_PushBox::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class APP_PushBox Function OnHit *************************************************

// ********** Begin Class APP_PushBox **************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APP_PushBox;
UClass* APP_PushBox::GetPrivateStaticClass()
{
	using TClass = APP_PushBox;
	if (!Z_Registration_Info_UClass_APP_PushBox.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PP_PushBox"),
			Z_Registration_Info_UClass_APP_PushBox.InnerSingleton,
			StaticRegisterNativesAPP_PushBox,
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
	return Z_Registration_Info_UClass_APP_PushBox.InnerSingleton;
}
UClass* Z_Construct_UClass_APP_PushBox_NoRegister()
{
	return APP_PushBox::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APP_PushBox_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// add enum to tell what kind of box it is\n" },
#endif
		{ "IncludePath", "Actors/PP_PushBox.h" },
		{ "ModuleRelativePath", "Public/Actors/PP_PushBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "add enum to tell what kind of box it is" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxStaticMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PP_PushBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxMaterial_MetaData[] = {
		{ "Category", "PP_PushBox" },
		{ "ModuleRelativePath", "Public/Actors/PP_PushBox.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PP_PushBox.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APP_PushBox constinit property declarations ******************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APP_PushBox constinit property declarations ********************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("BeginOverlap"), .Pointer = &APP_PushBox::execBeginOverlap },
		{ .NameUTF8 = UTF8TEXT("EndOverlap"), .Pointer = &APP_PushBox::execEndOverlap },
		{ .NameUTF8 = UTF8TEXT("OnHit"), .Pointer = &APP_PushBox::execOnHit },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APP_PushBox_BeginOverlap, "BeginOverlap" }, // 3765357263
		{ &Z_Construct_UFunction_APP_PushBox_EndOverlap, "EndOverlap" }, // 411650522
		{ &Z_Construct_UFunction_APP_PushBox_OnHit, "OnHit" }, // 1515274198
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APP_PushBox>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APP_PushBox_Statics

// ********** Begin Class APP_PushBox Property Definitions *****************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APP_PushBox_Statics::NewProp_BoxStaticMesh = { "BoxStaticMesh", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APP_PushBox, BoxStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxStaticMesh_MetaData), NewProp_BoxStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APP_PushBox_Statics::NewProp_BoxMaterial = { "BoxMaterial", nullptr, (EPropertyFlags)0x0124080000010005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APP_PushBox, BoxMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxMaterial_MetaData), NewProp_BoxMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APP_PushBox_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APP_PushBox, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxCollision_MetaData), NewProp_BoxCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APP_PushBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP_PushBox_Statics::NewProp_BoxStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP_PushBox_Statics::NewProp_BoxMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APP_PushBox_Statics::NewProp_BoxCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_PushBox_Statics::PropPointers) < 2048);
// ********** End Class APP_PushBox Property Definitions *******************************************
UObject* (*const Z_Construct_UClass_APP_PushBox_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_PhysicsPuzzle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APP_PushBox_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APP_PushBox_Statics::ClassParams = {
	&APP_PushBox::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APP_PushBox_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APP_PushBox_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APP_PushBox_Statics::Class_MetaDataParams), Z_Construct_UClass_APP_PushBox_Statics::Class_MetaDataParams)
};
void APP_PushBox::StaticRegisterNativesAPP_PushBox()
{
	UClass* Class = APP_PushBox::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APP_PushBox_Statics::Funcs));
}
UClass* Z_Construct_UClass_APP_PushBox()
{
	if (!Z_Registration_Info_UClass_APP_PushBox.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APP_PushBox.OuterSingleton, Z_Construct_UClass_APP_PushBox_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APP_PushBox.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APP_PushBox);
APP_PushBox::~APP_PushBox() {}
// ********** End Class APP_PushBox ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_PushBox_h__Script_PhysicsPuzzle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APP_PushBox, APP_PushBox::StaticClass, TEXT("APP_PushBox"), &Z_Registration_Info_UClass_APP_PushBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APP_PushBox), 23213591U) },
	};
}; // Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_PushBox_h__Script_PhysicsPuzzle_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_PushBox_h__Script_PhysicsPuzzle_505025423{
	TEXT("/Script/PhysicsPuzzle"),
	Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_PushBox_h__Script_PhysicsPuzzle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_CGS_IntroToUnreal_PhysicsPuzzle_Source_PhysicsPuzzle_Public_Actors_PP_PushBox_h__Script_PhysicsPuzzle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
