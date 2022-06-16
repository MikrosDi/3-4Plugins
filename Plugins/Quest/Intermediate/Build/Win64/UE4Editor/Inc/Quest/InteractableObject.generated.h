// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef QUEST_InteractableObject_generated_h
#error "InteractableObject.generated.h already included, missing '#pragma once' in InteractableObject.h"
#endif
#define QUEST_InteractableObject_generated_h

#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_SPARSE_DATA
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_RPC_WRAPPERS \
	virtual void Interact_Implementation(AActor* ActorInteractedWithObject) {}; \
 \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract_Implementation); \
	DECLARE_FUNCTION(execInteract);


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_EVENT_PARMS \
	struct InteractableObject_eventInteract_Parms \
	{ \
		AActor* ActorInteractedWithObject; \
	};


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_CALLBACK_WRAPPERS
#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUEST_API UInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUEST_API, UInteractableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUEST_API UInteractableObject(UInteractableObject&&); \
	QUEST_API UInteractableObject(const UInteractableObject&); \
public:


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	QUEST_API UInteractableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	QUEST_API UInteractableObject(UInteractableObject&&); \
	QUEST_API UInteractableObject(const UInteractableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(QUEST_API, UInteractableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableObject)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableObject(); \
	friend struct Z_Construct_UClass_UInteractableObject_Statics; \
public: \
	DECLARE_CLASS(UInteractableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Quest"), QUEST_API) \
	DECLARE_SERIALIZER(UInteractableObject)


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_GENERATED_UINTERFACE_BODY() \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_GENERATED_UINTERFACE_BODY() \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableObject() {} \
public: \
	typedef UInteractableObject UClassType; \
	typedef IInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractedWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractableObject() {} \
public: \
	typedef UInteractableObject UClassType; \
	typedef IInteractableObject ThisClass; \
	static void Execute_Interact(UObject* O, AActor* ActorInteractedWithObject); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_11_PROLOG \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_EVENT_PARMS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_RPC_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_CALLBACK_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_SPARSE_DATA \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_CALLBACK_WRAPPERS \
	MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUEST_API UClass* StaticClass<class UInteractableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MediaPlayerProject_Plugins_Quest_Source_Quest_Public_InteractableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
