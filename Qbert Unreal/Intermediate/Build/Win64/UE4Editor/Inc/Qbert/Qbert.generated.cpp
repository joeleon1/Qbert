// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Boilerplate C++ definitions for a single module.
	This is automatically generated by UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "Qbert.h"
#include "Qbert.generated.dep.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQbert() {}
	void AQbertGameMode::StaticRegisterNativesAQbertGameMode()
	{
	}
	IMPLEMENT_CLASS(AQbertGameMode, 2159165753);
	void ATraverser::StaticRegisterNativesATraverser()
	{
	}
	IMPLEMENT_CLASS(ATraverser, 2918107899);
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameMode();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();

	QBERT_API class UClass* Z_Construct_UClass_AQbertGameMode_NoRegister();
	QBERT_API class UClass* Z_Construct_UClass_AQbertGameMode();
	QBERT_API class UClass* Z_Construct_UClass_ATraverser_NoRegister();
	QBERT_API class UClass* Z_Construct_UClass_ATraverser();
	QBERT_API class UPackage* Z_Construct_UPackage_Qbert();
	UClass* Z_Construct_UClass_AQbertGameMode_NoRegister()
	{
		return AQbertGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AQbertGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameMode();
			Z_Construct_UPackage_Qbert();
			OuterClass = AQbertGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2090028C;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("QbertGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("QbertGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQbertGameMode(Z_Construct_UClass_AQbertGameMode, TEXT("AQbertGameMode"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQbertGameMode);
	UClass* Z_Construct_UClass_ATraverser_NoRegister()
	{
		return ATraverser::StaticClass();
	}
	UClass* Z_Construct_UClass_ATraverser()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage_Qbert();
			OuterClass = ATraverser::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Traverser.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Traverser.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATraverser(Z_Construct_UClass_ATraverser, TEXT("ATraverser"));
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATraverser);
	UPackage* Z_Construct_UPackage_Qbert()
	{
		static UPackage* ReturnPackage = NULL;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), NULL, FName(TEXT("/Script/Qbert")), false, false));
			ReturnPackage->PackageFlags |= PKG_CompiledIn | 0x00000000;
			FGuid Guid;
			Guid.A = 0x2F952753;
			Guid.B = 0x946B20AA;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif

PRAGMA_ENABLE_DEPRECATION_WARNINGS
