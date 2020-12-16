// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/MySQLBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySQLBPLibrary() {}
// Cross Module References
	MYSQL_API UFunction* Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MySQL();
	MYSQL_API UEnum* Z_Construct_UEnum_MySQL_EMysqlSuccessStatus();
	MYSQL_API UEnum* Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState();
	MYSQL_API UEnum* Z_Construct_UEnum_MySQL_EMySQLConnectionState();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow();
	MYSQL_API UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLBPLibrary_NoRegister();
	MYSQL_API UClass* Z_Construct_UClass_UMySQLBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync();
	MYSQL_API UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_MySQL_QueryExecuting__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MySQL, "QueryExecuting__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EMysqlSuccessStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MySQL_EMysqlSuccessStatus, Z_Construct_UPackage__Script_MySQL(), TEXT("EMysqlSuccessStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMysqlSuccessStatus(EMysqlSuccessStatus_StaticEnum, TEXT("/Script/MySQL"), TEXT("EMysqlSuccessStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MySQL_EMysqlSuccessStatus_CRC() { return 1018828552U; }
	UEnum* Z_Construct_UEnum_MySQL_EMysqlSuccessStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMysqlSuccessStatus"), 0, Get_Z_Construct_UEnum_MySQL_EMysqlSuccessStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMysqlSuccessStatus::Busy", (int64)EMysqlSuccessStatus::Busy },
				{ "EMysqlSuccessStatus::Success", (int64)EMysqlSuccessStatus::Success },
				{ "EMysqlSuccessStatus::Failed", (int64)EMysqlSuccessStatus::Failed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Busy.DisplayName", "Busy" },
				{ "Failed.DisplayName", "Failed" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "Success.DisplayName", "Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MySQL,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMysqlSuccessStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMysqlSuccessStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMySQLQueryExecutionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState, Z_Construct_UPackage__Script_MySQL(), TEXT("EMySQLQueryExecutionState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMySQLQueryExecutionState(EMySQLQueryExecutionState_StaticEnum, TEXT("/Script/MySQL"), TEXT("EMySQLQueryExecutionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState_CRC() { return 1490279358U; }
	UEnum* Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMySQLQueryExecutionState"), 0, Get_Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMySQLQueryExecutionState::Executing", (int64)EMySQLQueryExecutionState::Executing },
				{ "EMySQLQueryExecutionState::Success", (int64)EMySQLQueryExecutionState::Success },
				{ "EMySQLQueryExecutionState::Failed", (int64)EMySQLQueryExecutionState::Failed },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Executing.DisplayName", "Executing" },
				{ "Failed.DisplayName", "Failed" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "Success.DisplayName", "Success" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MySQL,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMySQLQueryExecutionState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMySQLQueryExecutionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMySQLConnectionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MySQL_EMySQLConnectionState, Z_Construct_UPackage__Script_MySQL(), TEXT("EMySQLConnectionState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMySQLConnectionState(EMySQLConnectionState_StaticEnum, TEXT("/Script/MySQL"), TEXT("EMySQLConnectionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MySQL_EMySQLConnectionState_CRC() { return 3880732768U; }
	UEnum* Z_Construct_UEnum_MySQL_EMySQLConnectionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMySQLConnectionState"), 0, Get_Z_Construct_UEnum_MySQL_EMySQLConnectionState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMySQLConnectionState::Broken", (int64)EMySQLConnectionState::Broken },
				{ "EMySQLConnectionState::Closed", (int64)EMySQLConnectionState::Closed },
				{ "EMySQLConnectionState::Connecting", (int64)EMySQLConnectionState::Connecting },
				{ "EMySQLConnectionState::Executing", (int64)EMySQLConnectionState::Executing },
				{ "EMySQLConnectionState::Fetching", (int64)EMySQLConnectionState::Fetching },
				{ "EMySQLConnectionState::Open", (int64)EMySQLConnectionState::Open },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Broken.DisplayName", "Broken" },
				{ "Closed.DisplayName", "Closed" },
				{ "Connecting.DisplayName", "Connecting" },
				{ "Executing.DisplayName", "Executing" },
				{ "Fetching.DisplayName", "Fetching" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "Open.DisplayName", "Open" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MySQL,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EMySQLConnectionState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EMySQLConnectionState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMySQLDataRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYSQL_API uint32 Get_Z_Construct_UScriptStruct_FMySQLDataRow_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataRow, Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataRow"), sizeof(FMySQLDataRow), Get_Z_Construct_UScriptStruct_FMySQLDataRow_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLDataRow(FMySQLDataRow::StaticStruct, TEXT("/Script/MySQL"), TEXT("MySQLDataRow"), false, nullptr, nullptr);
static struct FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataRow
{
	FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLDataRow")),new UScriptStruct::TCppStructOps<FMySQLDataRow>);
	}
} ScriptStruct_MySQL_StaticRegisterNativesFMySQLDataRow;
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLDataRow_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLDataRow"), sizeof(FMySQLDataRow), Get_Z_Construct_UScriptStruct_FMySQLDataRow_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "MySql|Tables" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataRow>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowData_MetaData[] = {
				{ "Category", "SQLDataRow" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RowData = { UE4CodeGen_Private::EPropertyClass::Array, "RowData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMySQLDataRow, RowData), METADATA_PARAMS(NewProp_RowData_MetaData, ARRAY_COUNT(NewProp_RowData_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_RowData_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "RowData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RowData_Inner,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MySQLDataRow",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMySQLDataRow),
				alignof(FMySQLDataRow),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLDataRow_CRC() { return 550847918U; }
class UScriptStruct* FMySQLDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MYSQL_API uint32 Get_Z_Construct_UScriptStruct_FMySQLDataTable_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMySQLDataTable, Z_Construct_UPackage__Script_MySQL(), TEXT("MySQLDataTable"), sizeof(FMySQLDataTable), Get_Z_Construct_UScriptStruct_FMySQLDataTable_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMySQLDataTable(FMySQLDataTable::StaticStruct, TEXT("/Script/MySQL"), TEXT("MySQLDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataTable
{
	FScriptStruct_MySQL_StaticRegisterNativesFMySQLDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MySQLDataTable")),new UScriptStruct::TCppStructOps<FMySQLDataTable>);
	}
} ScriptStruct_MySQL_StaticRegisterNativesFMySQLDataTable;
	UScriptStruct* Z_Construct_UScriptStruct_FMySQLDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMySQLDataTable_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MySQL();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MySQLDataTable"), sizeof(FMySQLDataTable), Get_Z_Construct_UScriptStruct_FMySQLDataTable_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Category", "MySql|Tables" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMySQLDataTable>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnData_MetaData[] = {
				{ "Category", "SQLDataTable" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColumnData = { UE4CodeGen_Private::EPropertyClass::Array, "ColumnData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMySQLDataTable, ColumnData), METADATA_PARAMS(NewProp_ColumnData_MetaData, ARRAY_COUNT(NewProp_ColumnData_MetaData)) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnData_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ColumnData", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[] = {
				{ "Category", "SQLDataTable" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ColumnName = { UE4CodeGen_Private::EPropertyClass::Str, "ColumnName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FMySQLDataTable, ColumnName), METADATA_PARAMS(NewProp_ColumnName_MetaData, ARRAY_COUNT(NewProp_ColumnName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnData,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnData_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ColumnName,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"MySQLDataTable",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FMySQLDataTable),
				alignof(FMySQLDataTable),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMySQLDataTable_CRC() { return 1361885182U; }
	void UMySQLBPLibrary::StaticRegisterNativesUMySQLBPLibrary()
	{
		UClass* Class = UMySQLBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AuthenticateUser", &UMySQLBPLibrary::execAuthenticateUser },
			{ "BrowseFile", &UMySQLBPLibrary::execBrowseFile },
			{ "CheckConnectionState", &UMySQLBPLibrary::execCheckConnectionState },
			{ "CheckQueryExecutionState", &UMySQLBPLibrary::execCheckQueryExecutionState },
			{ "GetCurrentDomain", &UMySQLBPLibrary::execGetCurrentDomain },
			{ "GetCurrentUser", &UMySQLBPLibrary::execGetCurrentUser },
			{ "GetSelectedTable", &UMySQLBPLibrary::execGetSelectedTable },
			{ "SelectDataFromQuery", &UMySQLBPLibrary::execSelectDataFromQuery },
			{ "SelectDataFromQueryAsync", &UMySQLBPLibrary::execSelectDataFromQueryAsync },
			{ "SelectImageFromQuery", &UMySQLBPLibrary::execSelectImageFromQuery },
			{ "SetConnectionProperties", &UMySQLBPLibrary::execSetConnectionProperties },
			{ "UpdateDataFromQuery", &UMySQLBPLibrary::execUpdateDataFromQuery },
			{ "UpdateDataFromQueryAsync", &UMySQLBPLibrary::execUpdateDataFromQueryAsync },
			{ "UpdateImageFromQuery", &UMySQLBPLibrary::execUpdateImageFromQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser()
	{
		struct MySQLBPLibrary_eventAuthenticateUser_Parms
		{
			FString UserName;
			FString Password;
			FString Domain;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((MySQLBPLibrary_eventAuthenticateUser_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MySQLBPLibrary_eventAuthenticateUser_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Domain = { UE4CodeGen_Private::EPropertyClass::Str, "Domain", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventAuthenticateUser_Parms, Domain), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password = { UE4CodeGen_Private::EPropertyClass::Str, "Password", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventAuthenticateUser_Parms, Password), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserName = { UE4CodeGen_Private::EPropertyClass::Str, "UserName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventAuthenticateUser_Parms, UserName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Domain,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Password,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LDAP" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Authenticates the User against the Windows Credentials. This only works if the current Windows user requires a password to login\n\n@param        UserName        Windows UserName. Can be obtained from the GetCurrentUser() function\n@param        Password        Windows Password\n@param        Domain      PC Domain. Can be obtained from the GetCurrentDomain() function" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "AuthenticateUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MySQLBPLibrary_eventAuthenticateUser_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile()
	{
		struct MySQLBPLibrary_eventBrowseFile_Parms
		{
			FString DialogueTitle;
			FString FileTypes;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventBrowseFile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileTypes = { UE4CodeGen_Private::EPropertyClass::Str, "FileTypes", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventBrowseFile_Parms, FileTypes), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DialogueTitle = { UE4CodeGen_Private::EPropertyClass::Str, "DialogueTitle", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventBrowseFile_Parms, DialogueTitle), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FileTypes,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DialogueTitle,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Utilities" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Browse File from Hard drive\n\n@param        DialogueTitle    Title that will show up in the Browse Dialogue\n@param        FileTypes            Filtered File Types that will be displayed in the Browse Dialogue" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "BrowseFile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MySQLBPLibrary_eventBrowseFile_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState()
	{
		struct MySQLBPLibrary_eventCheckConnectionState_Parms
		{
			FString ErrorMessage;
			EMySQLConnectionState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventCheckConnectionState_Parms, ReturnValue), Z_Construct_UEnum_MySQL_EMySQLConnectionState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventCheckConnectionState_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Checks the current connection state" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "CheckConnectionState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MySQLBPLibrary_eventCheckConnectionState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState()
	{
		struct MySQLBPLibrary_eventCheckQueryExecutionState_Parms
		{
			FString ErrorMessage;
			EMySQLQueryExecutionState ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventCheckQueryExecutionState_Parms, ReturnValue), Z_Construct_UEnum_MySQL_EMySQLQueryExecutionState, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventCheckQueryExecutionState_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Update" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Checks for the completion of Asynchronous exceution of Update or Select query\n\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "CheckQueryExecutionState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MySQLBPLibrary_eventCheckQueryExecutionState_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain()
	{
		struct MySQLBPLibrary_eventGetCurrentDomain_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventGetCurrentDomain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LDAP" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Gets the Current Domain of the PC" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "GetCurrentDomain", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MySQLBPLibrary_eventGetCurrentDomain_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser()
	{
		struct MySQLBPLibrary_eventGetCurrentUser_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventGetCurrentUser_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "LDAP" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Gets the Current Windows Login User Name" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "GetCurrentUser", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(MySQLBPLibrary_eventGetCurrentUser_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable()
	{
		struct MySQLBPLibrary_eventGetSelectedTable_Parms
		{
			TArray<FMySQLDataTable> ResultByColumn;
			TArray<FMySQLDataRow> ResultByRow;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByRow = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventGetSelectedTable_Parms, ResultByRow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByRow_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMySQLDataRow, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByColumn = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventGetSelectedTable_Parms, ResultByColumn), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByColumn_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMySQLDataTable, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Select" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Gets the Selected data from the database after the asynchronous select query has been successfully executed\n\n@param        ResultByColumn  Returns the result of the Selected Query as an array of SQLDataTable structure\n@param        ResultByRow     Returns the result of the Selected Query as an array of SQLDataRow structure" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "GetSelectedTable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MySQLBPLibrary_eventGetSelectedTable_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery()
	{
		struct MySQLBPLibrary_eventSelectDataFromQuery_Parms
		{
			FString Query;
			EMysqlSuccessStatus SuccessStatus;
			FString ErrorMessage;
			TArray<FMySQLDataTable> ResultByColumn;
			TArray<FMySQLDataRow> ResultByRow;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByRow = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, ResultByRow), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByRow_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByRow", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMySQLDataRow, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ResultByColumn = { UE4CodeGen_Private::EPropertyClass::Array, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, ResultByColumn), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_ResultByColumn_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "ResultByColumn", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FMySQLDataTable, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuccessStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "SuccessStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, SuccessStatus), Z_Construct_UEnum_MySQL_EMysqlSuccessStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuccessStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByRow_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResultByColumn_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Select" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Selects data from the database\n\n@param        Query           Select Query which selects data from the database\n@param        SuccessStatus   Returns the status of Query execution , or busy if the connection is already busy\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails\n@param        ResultByColumn  Returns the result of the Selected Query as an array of SQLDataTable structure\n@param        ResultByRow     Returns the result of the Selected Query as an array of SQLDataRow structure" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "SelectDataFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MySQLBPLibrary_eventSelectDataFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync()
	{
		struct MySQLBPLibrary_eventSelectDataFromQueryAsync_Parms
		{
			FString Query;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectDataFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Select" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Asynchronously executes select query to the database\n\n@param        Query           Select Query which selects data from the database" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "SelectDataFromQueryAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MySQLBPLibrary_eventSelectDataFromQueryAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery()
	{
		struct MySQLBPLibrary_eventSelectImageFromQuery_Parms
		{
			FString Query;
			bool IsSuccess;
			FString ErrorMessage;
			UTexture2D* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectImageFromQuery_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectImageFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsSuccess_SetBit = [](void* Obj){ ((MySQLBPLibrary_eventSelectImageFromQuery_Parms*)Obj)->IsSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MySQLBPLibrary_eventSelectImageFromQuery_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSelectImageFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Select" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Selects image from the database and returns Texture2D format of the selected image\n\n@param        Query           Select Query which fetches a single image from the database\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "SelectImageFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MySQLBPLibrary_eventSelectImageFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties()
	{
		struct MySQLBPLibrary_eventSetConnectionProperties_Parms
		{
			FString Server;
			FString DBName;
			FString UserID;
			FString Password;
			FString ExtraParam;
			bool IsTrusted;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_IsTrusted_SetBit = [](void* Obj){ ((MySQLBPLibrary_eventSetConnectionProperties_Parms*)Obj)->IsTrusted = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsTrusted = { UE4CodeGen_Private::EPropertyClass::Bool, "IsTrusted", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MySQLBPLibrary_eventSetConnectionProperties_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsTrusted_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExtraParam = { UE4CodeGen_Private::EPropertyClass::Str, "ExtraParam", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, ExtraParam), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Password = { UE4CodeGen_Private::EPropertyClass::Str, "Password", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, Password), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UserID = { UE4CodeGen_Private::EPropertyClass::Str, "UserID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, UserID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_DBName = { UE4CodeGen_Private::EPropertyClass::Str, "DBName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, DBName), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Server = { UE4CodeGen_Private::EPropertyClass::Str, "Server", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventSetConnectionProperties_Parms, Server), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsTrusted,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExtraParam,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Password,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UserID,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_DBName,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Server,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Sets the Connection Properties in order to be able to connect to the Database. This function must be called before performing any\n         Database Operations\n\n@param        Server          SQL Server Name\n@param        DBName          Initial Database Name to be connected to\n@param        UserID          SQL Server UserID. Not relevant while using Windows Authentication\n@param        Password        SQL Server Password. Not relevant while using Windows Authentication\n@param        ExtraParam      Additional Connection Parameter to be included\n@param        IsTrusted       Should be checked if user is using Windows Authentication Mode, unchecked for MySQL Server Authentication." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "SetConnectionProperties", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MySQLBPLibrary_eventSetConnectionProperties_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery()
	{
		struct MySQLBPLibrary_eventUpdateDataFromQuery_Parms
		{
			FString Query;
			EMysqlSuccessStatus SuccessStatus;
			FString ErrorMessage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SuccessStatus = { UE4CodeGen_Private::EPropertyClass::Enum, "SuccessStatus", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQuery_Parms, SuccessStatus), Z_Construct_UEnum_MySQL_EMysqlSuccessStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_SuccessStatus_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessStatus,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SuccessStatus_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Update" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Executes a Query to the database\n\n@param        Query           Query which is to be executed to the database\n@param        SuccessStatus   Returns the status of Query execution , or busy if the connection is already busy\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "UpdateDataFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MySQLBPLibrary_eventUpdateDataFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync()
	{
		struct MySQLBPLibrary_eventUpdateDataFromQueryAsync_Parms
		{
			FString Query;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateDataFromQueryAsync_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Update" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Asynchronously Executes a Query to the database\n\n@param        Query           Query which is to be executed to the database" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "UpdateDataFromQueryAsync", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(MySQLBPLibrary_eventUpdateDataFromQueryAsync_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery()
	{
		struct MySQLBPLibrary_eventUpdateImageFromQuery_Parms
		{
			FString Query;
			FString UpdateParameter;
			FString ImagePath;
			bool IsSuccess;
			FString ErrorMessage;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ErrorMessage = { UE4CodeGen_Private::EPropertyClass::Str, "ErrorMessage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, ErrorMessage), METADATA_PARAMS(nullptr, 0) };
			auto NewProp_IsSuccess_SetBit = [](void* Obj){ ((MySQLBPLibrary_eventUpdateImageFromQuery_Parms*)Obj)->IsSuccess = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccess = { UE4CodeGen_Private::EPropertyClass::Bool, "IsSuccess", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MySQLBPLibrary_eventUpdateImageFromQuery_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_IsSuccess_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath = { UE4CodeGen_Private::EPropertyClass::Str, "ImagePath", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, ImagePath), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_UpdateParameter = { UE4CodeGen_Private::EPropertyClass::Str, "UpdateParameter", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, UpdateParameter), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Query = { UE4CodeGen_Private::EPropertyClass::Str, "Query", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MySQLBPLibrary_eventUpdateImageFromQuery_Parms, Query), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ErrorMessage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_IsSuccess,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ImagePath,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UpdateParameter,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Query,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "MySql Server|Update" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Updates image to the database from the hard drive\n\n@param        Query           Update Query which inserts or updates image to the database\n@param        UpdateParameter Value which has been passed as a parameter for updating the image in the previous input,\n                                   without the @ symbol\n@param        ImagePath       Path of the Image that needs to be updated in the SQL Server\n@param        IsSuccess           Returns true if the Query execution is successful\n@param        ErrorMessage    Returns the exception message thrown if the Query execution fails" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMySQLBPLibrary, "UpdateImageFromQuery", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(MySQLBPLibrary_eventUpdateImageFromQuery_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMySQLBPLibrary_NoRegister()
	{
		return UMySQLBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UMySQLBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_MySQL,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMySQLBPLibrary_AuthenticateUser, "AuthenticateUser" }, // 897803519
				{ &Z_Construct_UFunction_UMySQLBPLibrary_BrowseFile, "BrowseFile" }, // 869211889
				{ &Z_Construct_UFunction_UMySQLBPLibrary_CheckConnectionState, "CheckConnectionState" }, // 4151716149
				{ &Z_Construct_UFunction_UMySQLBPLibrary_CheckQueryExecutionState, "CheckQueryExecutionState" }, // 2922660699
				{ &Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentDomain, "GetCurrentDomain" }, // 3133468409
				{ &Z_Construct_UFunction_UMySQLBPLibrary_GetCurrentUser, "GetCurrentUser" }, // 2233159926
				{ &Z_Construct_UFunction_UMySQLBPLibrary_GetSelectedTable, "GetSelectedTable" }, // 1122100508
				{ &Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQuery, "SelectDataFromQuery" }, // 4104210034
				{ &Z_Construct_UFunction_UMySQLBPLibrary_SelectDataFromQueryAsync, "SelectDataFromQueryAsync" }, // 653587683
				{ &Z_Construct_UFunction_UMySQLBPLibrary_SelectImageFromQuery, "SelectImageFromQuery" }, // 263533272
				{ &Z_Construct_UFunction_UMySQLBPLibrary_SetConnectionProperties, "SetConnectionProperties" }, // 2728926901
				{ &Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQuery, "UpdateDataFromQuery" }, // 249916347
				{ &Z_Construct_UFunction_UMySQLBPLibrary_UpdateDataFromQueryAsync, "UpdateDataFromQueryAsync" }, // 2176088088
				{ &Z_Construct_UFunction_UMySQLBPLibrary_UpdateImageFromQuery, "UpdateImageFromQuery" }, // 442238461
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "MySQLBPLibrary.h" },
				{ "ModuleRelativePath", "Public/MySQLBPLibrary.h" },
				{ "ToolTip", "Contains all the methods that are used to connect to the C# dll\nwhich takes care of connecting to the MySQL server and executing\nthe given queries. These methods can be directly called from GetErrorMessage\nthe Blueprints." },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMySQLBPLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMySQLBPLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMySQLBPLibrary, 76936702);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMySQLBPLibrary(Z_Construct_UClass_UMySQLBPLibrary, &UMySQLBPLibrary::StaticClass, TEXT("/Script/MySQL"), TEXT("UMySQLBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMySQLBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
