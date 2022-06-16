// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUEST_LocationMarkerActor_generated_h
#error "LocationMarkerActor.generated.h already included, missing '#pragma once' in LocationMarkerActor.h"
#endif
#define QUEST_LocationMarkerActor_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapedByActor);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapedByActor);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALocationMarkerActor(); \
	friend struct Z_Construct_UClass_ALocationMarkerActor_Statics; \
public: \
	DECLARE_CLASS(ALocationMarkerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(ALocationMarkerActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALocationMarkerActor*>(this); }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesALocationMarkerActor(); \
	friend struct Z_Construct_UClass_ALocationMarkerActor_Statics; \
public: \
	DECLARE_CLASS(ALocationMarkerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(ALocationMarkerActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALocationMarkerActor*>(this); }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALocationMarkerActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALocationMarkerActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocationMarkerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocationMarkerActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALocationMarkerActor(ALocationMarkerActor&&); \
	NO_API ALocationMarkerActor(const ALocationMarkerActor&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALocationMarkerActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALocationMarkerActor(ALocationMarkerActor&&); \
	NO_API ALocationMarkerActor(const ALocationMarkerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALocationMarkerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALocationMarkerActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALocationMarkerActor)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_PRIVATE_PROPERTY_OFFSET
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_10_PROLOG
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_INCLASS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_PRIVATE_PROPERTY_OFFSET \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_INCLASS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class ALocationMarkerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarkerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
