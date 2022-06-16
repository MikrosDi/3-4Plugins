// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUEST_QuestListComponent_generated_h
#error "QuestListComponent.generated.h already included, missing '#pragma once' in QuestListComponent.h"
#endif
#define QUEST_QuestListComponent_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_RPC_WRAPPERS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestListComponent(); \
	friend struct Z_Construct_UClass_UQuestListComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestListComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UQuestListComponent)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUQuestListComponent(); \
	friend struct Z_Construct_UClass_UQuestListComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestListComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UQuestListComponent)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestListComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestListComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestListComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestListComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestListComponent(UQuestListComponent&&); \
	NO_API UQuestListComponent(const UQuestListComponent&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestListComponent(UQuestListComponent&&); \
	NO_API UQuestListComponent(const UQuestListComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestListComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestListComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestListComponent)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AcceptedQuests() { return STRUCT_OFFSET(UQuestListComponent, AcceptedQuests); } \
	FORCEINLINE static uint32 __PPO__ActiveQuest() { return STRUCT_OFFSET(UQuestListComponent, ActiveQuest); }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_13_PROLOG
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_INCLASS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_INCLASS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class UQuestListComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestListComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
