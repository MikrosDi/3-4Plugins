// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUEST_QuestDescription_generated_h
#error "QuestDescription.generated.h already included, missing '#pragma once' in QuestDescription.h"
#endif
#define QUEST_QuestDescription_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_RPC_WRAPPERS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestDescription(); \
	friend struct Z_Construct_UClass_UQuestDescription_Statics; \
public: \
	DECLARE_CLASS(UQuestDescription, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UQuestDescription)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUQuestDescription(); \
	friend struct Z_Construct_UClass_UQuestDescription_Statics; \
public: \
	DECLARE_CLASS(UQuestDescription, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UQuestDescription)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestDescription) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDescription); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDescription(UQuestDescription&&); \
	NO_API UQuestDescription(const UQuestDescription&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestDescription(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDescription(UQuestDescription&&); \
	NO_API UQuestDescription(const UQuestDescription&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDescription); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDescription); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestDescription)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NameText() { return STRUCT_OFFSET(UQuestDescription, NameText); } \
	FORCEINLINE static uint32 __PPO__ObjectivesList() { return STRUCT_OFFSET(UQuestDescription, ObjectivesList); } \
	FORCEINLINE static uint32 __PPO__DescriptionText() { return STRUCT_OFFSET(UQuestDescription, DescriptionText); } \
	FORCEINLINE static uint32 __PPO__ObjectiveWidgetClass() { return STRUCT_OFFSET(UQuestDescription, ObjectiveWidgetClass); }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_14_PROLOG
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_INCLASS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_INCLASS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class UQuestDescription>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestDescription_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
