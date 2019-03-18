// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOON_MoonCharacter_generated_h
#error "MoonCharacter.generated.h already included, missing '#pragma once' in MoonCharacter.h"
#endif
#define MOON_MoonCharacter_generated_h

#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_RPC_WRAPPERS
#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoonCharacter(); \
	friend struct Z_Construct_UClass_AMoonCharacter_Statics; \
public: \
	DECLARE_CLASS(AMoonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Moon"), NO_API) \
	DECLARE_SERIALIZER(AMoonCharacter)


#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMoonCharacter(); \
	friend struct Z_Construct_UClass_AMoonCharacter_Statics; \
public: \
	DECLARE_CLASS(AMoonCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Moon"), NO_API) \
	DECLARE_SERIALIZER(AMoonCharacter)


#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMoonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonCharacter(AMoonCharacter&&); \
	NO_API AMoonCharacter(const AMoonCharacter&); \
public:


#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMoonCharacter(AMoonCharacter&&); \
	NO_API AMoonCharacter(const AMoonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMoonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoonCharacter)


#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMoonCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMoonCharacter, FollowCamera); }


#define Moon_4_21___2_Source_Moon_MoonCharacter_h_9_PROLOG
#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_RPC_WRAPPERS \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_INCLASS \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Moon_4_21___2_Source_Moon_MoonCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Moon_4_21___2_Source_Moon_MoonCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Moon_4_21___2_Source_Moon_MoonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
