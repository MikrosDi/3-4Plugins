// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef QUEST_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define QUEST_InteractionComponent_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteractionCompEndOverlap); \
	DECLARE_FUNCTION(execOnInteractionCompBeginOverlap); \
	DECLARE_FUNCTION(execInteract);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteractionCompEndOverlap); \
	DECLARE_FUNCTION(execOnInteractionCompBeginOverlap); \
	DECLARE_FUNCTION(execInteract);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractMessageClass() { return STRUCT_OFFSET(UInteractionComponent, InteractMessageClass); } \
	FORCEINLINE static uint32 __PPO__InteractMessage() { return STRUCT_OFFSET(UInteractionComponent, InteractMessage); } \
	FORCEINLINE static uint32 __PPO__ActorToInteract() { return STRUCT_OFFSET(UInteractionComponent, ActorToInteract); }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_11_PROLOG
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_INCLASS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
