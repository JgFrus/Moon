// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOON_MoonGameMode_generated_h
#error "MoonGameMode.generated.h already included, missing '#pragma once' in MoonGameMode.h"
#endif
#define MOON_MoonGameMode_generated_h

#define Moon_Source_Moon_MoonGameMode_h_12_RPC_WRAPPERS
#define Moon_Source_Moon_MoonGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Moon_Source_Moon_MoonGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMoonGameMode(); \
	friend MOON_API class UClass* Z_Construct_UClass_AMoonGameMode(); \
public: \
	DECLARE_CLASS(AMoonGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Moon"), MOON_API) \
	DECLARE_SERIALIZER(AMoonGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Moon_Source_Moon_MoonGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMoonGameMode(); \
	friend MOON_API class UClass* Z_Construct_UClass_AMoonGameMode(); \
public: \
	DECLARE_CLASS(AMoonGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Moon"), MOON_API) \
	DECLARE_SERIALIZER(AMoonGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Moon_Source_Moon_MoonGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOON_API AMoonGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMoonGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOON_API, AMoonGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOON_API AMoonGameMode(AMoonGameMode&&); \
	MOON_API AMoonGameMode(const AMoonGameMode&); \
public:


#define Moon_Source_Moon_MoonGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MOON_API AMoonGameMode(AMoonGameMode&&); \
	MOON_API AMoonGameMode(const AMoonGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOON_API, AMoonGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMoonGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMoonGameMode)


#define Moon_Source_Moon_MoonGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Moon_Source_Moon_MoonGameMode_h_9_PROLOG
#define Moon_Source_Moon_MoonGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moon_Source_Moon_MoonGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Moon_Source_Moon_MoonGameMode_h_12_RPC_WRAPPERS \
	Moon_Source_Moon_MoonGameMode_h_12_INCLASS \
	Moon_Source_Moon_MoonGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Moon_Source_Moon_MoonGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Moon_Source_Moon_MoonGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Moon_Source_Moon_MoonGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Moon_Source_Moon_MoonGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Moon_Source_Moon_MoonGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Moon_Source_Moon_MoonGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
