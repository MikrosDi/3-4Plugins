// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quest/Public/QuestClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestClass() {}
// Cross Module References
	QUEST_API UClass* Z_Construct_UClass_AQuestClass_NoRegister();
	QUEST_API UClass* Z_Construct_UClass_AQuestClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Quest();
	QUEST_API UClass* Z_Construct_UClass_UObjective_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AQuestClass::execTakeQuest)
	{
		P_GET_OBJECT(AActor,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeQuest(Z_Param_Character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestClass::execUpdateLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestClass::execGetObjectives)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObjective*>*)Z_Param__Result=P_THIS->GetObjectives();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(AQuestClass::execAddInteractObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInteractObjective();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AQuestClass::execAddLocationObjective)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddLocationObjective();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void AQuestClass::StaticRegisterNativesAQuestClass()
	{
		UClass* Class = AQuestClass::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
			{ "AddInteractObjective", &AQuestClass::execAddInteractObjective },
			{ "AddLocationObjective", &AQuestClass::execAddLocationObjective },
#endif // WITH_EDITOR
			{ "GetObjectives", &AQuestClass::execGetObjectives },
			{ "TakeQuest", &AQuestClass::execTakeQuest },
			{ "UpdateLocation", &AQuestClass::execUpdateLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AQuestClass_AddInteractObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestClass_AddInteractObjective_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestClass_AddInteractObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestClass, nullptr, "AddInteractObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestClass_AddInteractObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_AddInteractObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestClass_AddInteractObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestClass_AddInteractObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AQuestClass_AddLocationObjective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestClass_AddLocationObjective_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestClass_AddLocationObjective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestClass, nullptr, "AddLocationObjective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestClass_AddLocationObjective_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_AddLocationObjective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestClass_AddLocationObjective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestClass_AddLocationObjective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	struct Z_Construct_UFunction_AQuestClass_GetObjectives_Statics
	{
		struct QuestClass_eventGetObjectives_Parms
		{
			TArray<UObjective*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestClass_eventGetObjectives_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestClass, nullptr, "GetObjectives", nullptr, nullptr, sizeof(QuestClass_eventGetObjectives_Parms), Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestClass_GetObjectives()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestClass_GetObjectives_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestClass_TakeQuest_Statics
	{
		struct QuestClass_eventTakeQuest_Parms
		{
			AActor* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestClass_eventTakeQuest_Parms, Character), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestClass, nullptr, "TakeQuest", nullptr, nullptr, sizeof(QuestClass_eventTakeQuest_Parms), Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestClass_TakeQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestClass_TakeQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AQuestClass_UpdateLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestClass_UpdateLocation_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestClass_UpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestClass, nullptr, "UpdateLocation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestClass_UpdateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestClass_UpdateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestClass_UpdateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestClass_UpdateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AQuestClass_NoRegister()
	{
		return AQuestClass::StaticClass();
	}
	struct Z_Construct_UClass_AQuestClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Objectives_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Objectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Objectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStoryQuest_MetaData[];
#endif
		static void NewProp_bIsStoryQuest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStoryQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bKeepObjectivesOrder_MetaData[];
#endif
		static void NewProp_bKeepObjectivesOrder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bKeepObjectivesOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousQuest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousQuest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTaken_MetaData[];
#endif
		static void NewProp_bIsTaken_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Quest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestClass_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AQuestClass_AddInteractObjective, "AddInteractObjective" }, // 2221892581
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AQuestClass_AddLocationObjective, "AddLocationObjective" }, // 4253856547
#endif //WITH_EDITOR
		{ &Z_Construct_UFunction_AQuestClass_GetObjectives, "GetObjectives" }, // 3038827300
		{ &Z_Construct_UFunction_AQuestClass_TakeQuest, "TakeQuest" }, // 2254521549
		{ &Z_Construct_UFunction_AQuestClass_UpdateLocation, "UpdateLocation" }, // 1090112971
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestClass.h" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "QuestClass" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestClass, Name), METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "QuestClass" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestClass, Description), METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_Objectives_Inner = { "Objectives", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjective_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::NewProp_Objectives_MetaData[] = {
		{ "Category", "QuestClass" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_Objectives = { "Objectives", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestClass, Objectives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::NewProp_Objectives_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::NewProp_Objectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsStoryQuest_MetaData[] = {
		{ "Category", "QuestClass" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	void Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsStoryQuest_SetBit(void* Obj)
	{
		((AQuestClass*)Obj)->bIsStoryQuest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsStoryQuest = { "bIsStoryQuest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuestClass), &Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsStoryQuest_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsStoryQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsStoryQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::NewProp_bKeepObjectivesOrder_MetaData[] = {
		{ "Category", "QuestClass" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	void Z_Construct_UClass_AQuestClass_Statics::NewProp_bKeepObjectivesOrder_SetBit(void* Obj)
	{
		((AQuestClass*)Obj)->bKeepObjectivesOrder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_bKeepObjectivesOrder = { "bKeepObjectivesOrder", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuestClass), &Z_Construct_UClass_AQuestClass_Statics::NewProp_bKeepObjectivesOrder_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::NewProp_bKeepObjectivesOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::NewProp_bKeepObjectivesOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::NewProp_PreviousQuest_MetaData[] = {
		{ "Category", "QuestClass" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_PreviousQuest = { "PreviousQuest", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestClass, PreviousQuest), Z_Construct_UClass_AQuestClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::NewProp_PreviousQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::NewProp_PreviousQuest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsTaken_MetaData[] = {
		{ "Category", "QuestClass" },
		{ "ModuleRelativePath", "Public/QuestClass.h" },
	};
#endif
	void Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsTaken_SetBit(void* Obj)
	{
		((AQuestClass*)Obj)->bIsTaken = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsTaken = { "bIsTaken", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuestClass), &Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsTaken_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsTaken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsTaken_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_Objectives_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_Objectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsStoryQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_bKeepObjectivesOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_PreviousQuest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestClass_Statics::NewProp_bIsTaken,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestClass_Statics::ClassParams = {
		&AQuestClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuestClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestClass, 1142735120);
	template<> QUEST_API UClass* StaticClass<AQuestClass>()
	{
		return AQuestClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestClass(Z_Construct_UClass_AQuestClass, &AQuestClass::StaticClass, TEXT("/Script/Quest"), TEXT("AQuestClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
