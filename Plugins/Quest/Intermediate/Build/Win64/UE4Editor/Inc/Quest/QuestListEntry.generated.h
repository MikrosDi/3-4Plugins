// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUEST_QuestListEntry_generated_h
#error "QuestListEntry.generated.h already included, missing '#pragma once' in QuestListEntry.h"
#endif
#define QUEST_QuestListEntry_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectQuest);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectQuest);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestListEntry(); \
	friend struct Z_Construct_UClass_UQuestListEntry_Statics; \
public: \
	DECLARE_CLASS(UQuestListEntry, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UQuestListEntry)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUQuestListEntry(); \
	friend struct Z_Construct_UClass_UQuestListEntry_Statics; \
public: \
	DECLARE_CLASS(UQuestListEntry, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UQuestListEntry)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestListEntry(UQuestListEntry&&); \
	NO_API UQuestListEntry(const UQuestListEntry&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestListEntry(UQuestListEntry&&); \
	NO_API UQuestListEntry(const UQuestListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestListEntry)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__QuestText() { return STRUCT_OFFSET(UQuestListEntry, QuestText); } \
	FORCEINLINE static uint32 __PPO__SelectQuestButton() { return STRUCT_OFFSET(UQuestListEntry, SelectQuestButton); } \
	FORCEINLINE static uint32 __PPO__SelectionBorder() { return STRUCT_OFFSET(UQuestListEntry, SelectionBorder); }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_15_PROLOG
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_INCLASS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_INCLASS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class UQuestListEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
