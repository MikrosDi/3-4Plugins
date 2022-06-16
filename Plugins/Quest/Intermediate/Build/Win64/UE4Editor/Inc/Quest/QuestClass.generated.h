// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObjective;
#ifdef QUEST_QuestClass_generated_h
#error "QuestClass.generated.h already included, missing '#pragma once' in QuestClass.h"
#endif
#define QUEST_QuestClass_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTakeQuest); \
	DECLARE_FUNCTION(execUpdateLocation); \
	DECLARE_FUNCTION(execGetObjectives);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTakeQuest); \
	DECLARE_FUNCTION(execUpdateLocation); \
	DECLARE_FUNCTION(execGetObjectives);


#if WITH_EDITOR
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddInteractObjective); \
	DECLARE_FUNCTION(execAddLocationObjective);


#else
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_EDITOR_ONLY_RPC_WRAPPERS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestClass(); \
	friend struct Z_Construct_UClass_AQuestClass_Statics; \
public: \
	DECLARE_CLASS(AQuestClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(AQuestClass)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAQuestClass(); \
	friend struct Z_Construct_UClass_AQuestClass_Statics; \
public: \
	DECLARE_CLASS(AQuestClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(AQuestClass)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestClass(AQuestClass&&); \
	NO_API AQuestClass(const AQuestClass&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestClass(AQuestClass&&); \
	NO_API AQuestClass(const AQuestClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestClass)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_PRIVATE_PROPERTY_OFFSET
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_11_PROLOG
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_EDITOR_ONLY_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_INCLASS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_INCLASS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class AQuestClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_QuestClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
