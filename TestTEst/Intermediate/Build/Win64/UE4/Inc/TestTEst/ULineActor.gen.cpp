// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestTEst/ULineActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeULineActor() {}
// Cross Module References
	TESTTEST_API UClass* Z_Construct_UClass_AULineActor_NoRegister();
	TESTTEST_API UClass* Z_Construct_UClass_AULineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TestTEst();
// End Cross Module References
	void AULineActor::StaticRegisterNativesAULineActor()
	{
	}
	UClass* Z_Construct_UClass_AULineActor_NoRegister()
	{
		return AULineActor::StaticClass();
	}
	struct Z_Construct_UClass_AULineActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AULineActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TestTEst,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AULineActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ULineActor.h" },
		{ "ModuleRelativePath", "ULineActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AULineActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AULineActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AULineActor_Statics::ClassParams = {
		&AULineActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AULineActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AULineActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AULineActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AULineActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AULineActor, 1736631400);
	template<> TESTTEST_API UClass* StaticClass<AULineActor>()
	{
		return AULineActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AULineActor(Z_Construct_UClass_AULineActor, &AULineActor::StaticClass, TEXT("/Script/TestTEst"), TEXT("AULineActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AULineActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
