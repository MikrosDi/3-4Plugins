// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Quest/Public/QuestDialog.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestDialog() {}
// Cross Module References
	QUEST_API UClass* Z_Construct_UClass_UQuestDialog_NoRegister();
	QUEST_API UClass* Z_Construct_UClass_UQuestDialog();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Quest();
	QUEST_API UClass* Z_Construct_UClass_UQuestDescription_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestDialog::execOnRejected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRejected();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestDialog::execOnAccepted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAccepted();
		P_NATIVE_END;
	}
	void UQuestDialog::StaticRegisterNativesUQuestDialog()
	{
		UClass* Class = UQuestDialog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAccepted", &UQuestDialog::execOnAccepted },
			{ "OnRejected", &UQuestDialog::execOnRejected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestDialog_OnAccepted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDialog_OnAccepted_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDialog_OnAccepted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDialog, nullptr, "OnAccepted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDialog_OnAccepted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDialog_OnAccepted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDialog_OnAccepted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDialog_OnAccepted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestDialog_OnRejected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestDialog_OnRejected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestDialog_OnRejected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestDialog, nullptr, "OnRejected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestDialog_OnRejected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestDialog_OnRejected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestDialog_OnRejected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestDialog_OnRejected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestDialog_NoRegister()
	{
		return UQuestDialog::StaticClass();
	}
	struct Z_Construct_UClass_UQuestDialog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcceptButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcceptButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RejectButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RejectButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestDialog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Quest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestDialog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestDialog_OnAccepted, "OnAccepted" }, // 1720842129
		{ &Z_Construct_UFunction_UQuestDialog_OnRejected, "OnRejected" }, // 3843910486
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestDialog.h" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDialog, Description), Z_Construct_UClass_UQuestDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton = { "AcceptButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDialog, AcceptButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestDialog.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton = { "RejectButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestDialog, RejectButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDialog_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDialog_Statics::NewProp_AcceptButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestDialog_Statics::NewProp_RejectButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestDialog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestDialog>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestDialog_Statics::ClassParams = {
		&UQuestDialog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestDialog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestDialog_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDialog_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestDialog()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestDialog_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestDialog, 536107276);
	template<> QUEST_API UClass* StaticClass<UQuestDialog>()
	{
		return UQuestDialog::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestDialog(Z_Construct_UClass_UQuestDialog, &UQuestDialog::StaticClass, TEXT("/Script/Quest"), TEXT("UQuestDialog"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestDialog);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
