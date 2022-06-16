// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUEST_LocationMarker_generated_h
#error "LocationMarker.generated.h already included, missing '#pragma once' in LocationMarker.h"
#endif
#define QUEST_LocationMarker_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_RPC_WRAPPERS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationMarker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationMarker) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationMarker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationMarker); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationMarker(ULocationMarker&&); \
	NO_API ULocationMarker(const ULocationMarker&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationMarker(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationMarker(ULocationMarker&&); \
	NO_API ULocationMarker(const ULocationMarker&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationMarker); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationMarker); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationMarker)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULocationMarker(); \
	friend struct Z_Construct_UClass_ULocationMarker_Statics; \
public: \
	DECLARE_CLASS(ULocationMarker, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Quest"), NO_API) \
	DECLARE_SERIALIZER(ULocationMarker)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_GENERATED_UINTERFACE_BODY() \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_GENERATED_UINTERFACE_BODY() \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILocationMarker() {} \
public: \
	typedef ULocationMarker UClassType; \
	typedef ILocationMarker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~ILocationMarker() {} \
public: \
	typedef ULocationMarker UClassType; \
	typedef ILocationMarker ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_8_PROLOG
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class ULocationMarker>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_LocationMarker_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
