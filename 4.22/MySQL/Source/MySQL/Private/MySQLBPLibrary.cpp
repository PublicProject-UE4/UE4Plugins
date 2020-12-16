// Copyright 2018-2019, Sameek Kundu. All Rights Reserved. 


#include "MySQLBPLibrary.h"
#include "XmlParser.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Serialization/BufferArchive.h"
#include "Templates/SharedPointer.h"
#include "HAL/PlatformFilemanager.h"

#if PLATFORM_WINDOWS

#include "Windows/AllowWindowsPlatformTypes.h"

#include <codecvt>

using namespace std;

#include "Windows/HideWindowsPlatformTypes.h"

void *v_MySQLdllHandle;

FString GetDLLPath(FString DLLName)
{
	//Checks for the Plugin path from the current plugin directory. 
	FString Pluginpath = IPluginManager::Get().FindPlugin(TEXT("MySQL"))->GetBaseDir();
	FString DllPath = FPaths::Combine(*Pluginpath, TEXT("Source"), TEXT("SQLLib"), DLLName);

	return DllPath;
	
}

bool LoadDLL(FString DLLName, void*& v_DllHandle)
{
#if PLATFORM_WINDOWS
	
	FString DLLPath = GetDLLPath(DLLName);
	if (FPaths::FileExists(DLLPath))
	{
		v_DllHandle = FPlatformProcess::GetDllHandle(*DLLPath);
		if (v_DllHandle)
		{
			return true;
		}
	}

#endif

	return false;
}

void UnloadDLL(void*& v_DllHandle)
{
	if (v_DllHandle != nullptr)
	{
		FPlatformProcess::FreeDllHandle(v_DllHandle);
		v_DllHandle = nullptr;
	}
}


FLoadTextureDataAsync::~FLoadTextureDataAsync()
{
}


void FLoadTextureDataAsync::DoWork()
{
	
}

wchar_t* UMySQLBPLibrary::GetWCharfromChar(const char* Input)
{
	const size_t length = 1 + strlen(Input);
	wchar_t* wcsText = new wchar_t[length];
	
	size_t convertedSize = 0;

	_locale_t local = _create_locale(LC_ALL, "Chinese");
	errno_t ret = _mbstowcs_s_l(&convertedSize, wcsText, length, Input, _TRUNCATE, local);
	
	return wcsText;
}


char* UMySQLBPLibrary::GetCharfromFString(FString Query)
{
	const TCHAR* queryTChar = *Query;

	size_t len;
	_locale_t local = _create_locale(LC_ALL, "Chinese");

	_wcstombs_s_l(&len, NULL, 0, queryTChar, 0, local);

	size_t convertedSize = 0;
	
	char *charBuffer = (char *)malloc(len);
	_wcstombs_s_l(&convertedSize, charBuffer, len,
		queryTChar, _TRUNCATE, local);

	return charBuffer;
}






FString UMySQLBPLibrary::GetCurrentDomain()
{
	typedef const char*(*_GetDomain)(bool res);

	if (v_MySQLdllHandle!=NULL)
	{
		_GetDomain DLLFuncPtr = NULL;
		FString procName = "GetDomain";
		DLLFuncPtr = (_GetDomain)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FString output(result);
			FPlatformProcess::FreeDllHandle(v_MySQLdllHandle);
			return output;
		}
	}
	return "";
}

FString UMySQLBPLibrary::GetCurrentUser()
{
	typedef const char*(*_GetUserName)(bool res);

	
	if (FPaths::FileExists(GetDLLPath(TEXT("SQL.dll"))))
	{
		
	}

	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_GetUserName DLLFuncPtr = NULL;
		FString procName = "GetUserName";
		DLLFuncPtr = (_GetUserName)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FString output(result);
			FPlatformProcess::FreeDllHandle(v_MySQLdllHandle);
			return output;
		}
	}
	return "";
}



void UMySQLBPLibrary::SetConnectionProperties(FString Server, FString DBName, FString UserID, FString Password, FString ExtraParam , bool IsTrusted)
{

	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		string server(TCHAR_TO_UTF8(*Server));
		char* sv = _strdup(server.c_str());
		string dbname(TCHAR_TO_UTF8(*DBName));
		char* db = _strdup(dbname.c_str());
		string userid(TCHAR_TO_UTF8(*UserID));
		char* uid = _strdup(userid.c_str());
		string password(TCHAR_TO_UTF8(*Password));
		char* pw = _strdup(password.c_str());
		string eparam(TCHAR_TO_UTF8(*ExtraParam));
		char* ep = _strdup(eparam.c_str());

		FString trustedString = (IsTrusted ? "true" : "false");
		string istrusted(TCHAR_TO_UTF8(*trustedString));
		char* t = _strdup(istrusted.c_str());

		typedef void(*_SetConnectionProperties)(char* server, char* dbname, char* userid, char* password, char* eparam, char* isTrusted);

		_SetConnectionProperties DLLFuncPtr = NULL;
		FString procName = "SetConnectionProperties";
		DLLFuncPtr = (_SetConnectionProperties)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);

		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(sv, db, uid, pw, ep, t);
		}

		UnloadDLL(v_MySQLdllHandle);
	}
}


bool UMySQLBPLibrary::AuthenticateUser(FString UserName, FString Password, FString Domain)
{
	string domain(TCHAR_TO_UTF8(*Domain));
	char* d = _strdup(domain.c_str());
	string username(TCHAR_TO_UTF8(*UserName));
	char* u = _strdup(username.c_str());
	string password(TCHAR_TO_UTF8(*Password));
	char* p = _strdup(password.c_str());
	typedef bool(*_Authenticate)(char* UserName, char* Password, char* Domain);

	
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_Authenticate DLLFuncPtr = NULL;
		FString procName = "Authenticate";
		DLLFuncPtr = (_Authenticate)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{

			bool result = DLLFuncPtr(u, p, d);
			UnloadDLL(v_MySQLdllHandle);
			return result;

		}
		UnloadDLL(v_MySQLdllHandle);

	}


	return false;


}


UTexture2D* UMySQLBPLibrary::GetSelectedImage(bool &IsSuccess, FString &ErrorMessage)
{
	
	TArray<FString> Results;
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		typedef const char*(*_GetSelectedImage)(bool result);
		_GetSelectedImage DLLFuncPtr = NULL;
		FString procName = "GetSelectedImage";
		DLLFuncPtr = (_GetSelectedImage)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			FPlatformProcess::FreeDllHandle(v_MySQLdllHandle);
			ErrorMessage = GetErrorMessage();

			if (ErrorMessage.IsEmpty())
			{
				IsSuccess = true;
				UTexture2D* ImageTexture = LoadTextureFromPath(FString(result));

				FPlatformFileManager::Get().GetPlatformFile().DeleteFile(*FString(result));

				return ImageTexture;
			}
			else
				IsSuccess = false;


		}

	}

	return NULL;
}

void UMySQLBPLibrary::SelectImageFromQueryAsync(FString Query)
{
	string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());
	typedef void(*_SelectImageFromQueryAsync)(char* query);
	

	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_SelectImageFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "SelectImageFromQueryAsync";
		DLLFuncPtr = (_SelectImageFromQueryAsync)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(v_MySQLdllHandle);
		}
	}

}

FString UMySQLBPLibrary::BrowseFile(FString DialogueTitle, FString FileTypes)
{

	string title(TCHAR_TO_UTF8(*DialogueTitle));
	char* t = _strdup(title.c_str());
	string types(TCHAR_TO_UTF8(*FileTypes));
	char* ty = _strdup(types.c_str());
	typedef const char*(*_FileBrowser)(char* title , char* types);


	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_FileBrowser DLLFuncPtr = NULL;
		FString procName = "FileBrowser";
		DLLFuncPtr = (_FileBrowser)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(t , ty);
			UnloadDLL(v_MySQLdllHandle);
			return result;
		}
		UnloadDLL(v_MySQLdllHandle);

	}

	return "";

}

bool UMySQLBPLibrary::GetConnectionBusyStatus()
{
	typedef bool(*_GetConnectionBusyStatus)(bool res);


	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_GetConnectionBusyStatus DLLFuncPtr = NULL;
		FString procName = "GetConnectionBusyStatus";
		DLLFuncPtr = (_GetConnectionBusyStatus)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			bool result = DLLFuncPtr(false);
			UnloadDLL(v_MySQLdllHandle);
			return result;
		}

		UnloadDLL(v_MySQLdllHandle);

	}

	return false;

}

FString UMySQLBPLibrary::GetErrorMessage()
{

	typedef const char*(*_GetErrorMessage)(bool res);

	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_GetErrorMessage DLLFuncPtr = NULL;
		FString procName = "GetErrorMessage";
		DLLFuncPtr = (_GetErrorMessage)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			const char* result = DLLFuncPtr(false);
			wchar_t* wcvalue = GetWCharfromChar(result);

			UnloadDLL(v_MySQLdllHandle);
			return FString(wcvalue);
		}
		UnloadDLL(v_MySQLdllHandle);

	}

	return "";
}


void UMySQLBPLibrary::SelectDataFromQuery(FString Query, EMysqlSuccessStatus &SuccessStatus, FString &ErrorMessage ,
	TArray<FMySQLDataTable> &ResultByColumn, TArray<FMySQLDataRow> &ResultByRow)
{

	char* q = GetCharfromFString(Query);
    typedef const char*(*_SelectDataFromQuery)(char* query);

	TArray<FString> Results;
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_SelectDataFromQuery DLLFuncPtr = NULL;
		FString procName = "SelectDataFromQuery";
		DLLFuncPtr = (_SelectDataFromQuery)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			FPlatformProcess::FreeDllHandle(v_MySQLdllHandle);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				SuccessStatus = EMysqlSuccessStatus::Success;
			else
				SuccessStatus = EMysqlSuccessStatus::Failed;
			
			GetSelectedTable(ResultByColumn, ResultByRow);
			
		}
		UnloadDLL(v_MySQLdllHandle);

	}


}

template <class DLLFunctionType>
DLLFunctionType GetDLLFunction(FString procname)
{
	
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		DLLFunctionType DLLFuncPtr = NULL;
		DLLFuncPtr = (DLLFunctionType)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procname);
		return DLLFuncPtr;
	}
	return NULL;
}

void UMySQLBPLibrary::GetSelectedTable(TArray<FMySQLDataTable>	&ResultByColumn, TArray<FMySQLDataRow> &ResultByRow)
{
	int rowcount = -1;
	int columncount = -1;

	typedef int(*_GetSelectedTableRowCount)(bool result);
	_GetSelectedTableRowCount DLLFuncPtrRow = GetDLLFunction<_GetSelectedTableRowCount>("GetSelectedTableRowCount");
	if (DLLFuncPtrRow != NULL)
	{
		rowcount = DLLFuncPtrRow(false);
	}

	typedef int(*_GetSelectedTableColumnCount)(bool result);
	_GetSelectedTableColumnCount DLLFuncPtrCol = GetDLLFunction<_GetSelectedTableColumnCount>("GetSelectedTableColumnCount");
	if (DLLFuncPtrCol != NULL)
	{
		columncount = DLLFuncPtrCol(false);
	}

	typedef const char*(*_GetSelectedTableColumnByIndex)(int index);
	_GetSelectedTableColumnByIndex DLLFuncPtrColName = GetDLLFunction<_GetSelectedTableColumnByIndex>("GetSelectedTableColumnByIndex");
	if (DLLFuncPtrColName != NULL)
	{

		FMySQLDataTable data;
		for (int i = 0; i < columncount; i++)
		{
			const char* cvalue = DLLFuncPtrColName(i);
			wchar_t* wcvalue = GetWCharfromChar(cvalue);
			FString value = FString(wcvalue);
			data.ColumnName = value;
			ResultByColumn.Add(data);

			delete[](wcvalue);
		}
	}

	//Row Iteration
	typedef const char*(*_GetSelectedTableValueByIndex)(int rowindex, int columnindex);
	_GetSelectedTableValueByIndex DLLFuncPtrRowValue = GetDLLFunction<_GetSelectedTableValueByIndex>("GetSelectedTableValueByIndex");
	if (DLLFuncPtrRowValue != NULL)
	{

		for (int i = 0; i < rowcount; i++)
		{
			TArray<FString> RowData;
			//Column Iteration
			for (int j = 0; j < columncount; j++)
			{
				const char* cvalue = DLLFuncPtrRowValue(i, j);
				wchar_t* wcvalue = GetWCharfromChar(cvalue);

				FString value = FString(wcvalue);
				ResultByColumn[j].ColumnData.Add(value);
				RowData.Add(value);

				delete[](wcvalue);

			}

			FMySQLDataRow Row;
			Row.RowData = RowData;
			ResultByRow.Add(Row);
		}
	}
}


EMySQLConnectionState UMySQLBPLibrary::CheckConnectionState(FString &ErrorMessage)
{

	typedef int(*_CheckConnectionState)(bool res);
	
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_CheckConnectionState DLLFuncPtr = NULL;
		FString procName = "CheckConnectionState";
		DLLFuncPtr = (_CheckConnectionState)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			int r = DLLFuncPtr(false);
			ErrorMessage = GetErrorMessage();
			switch (r)
			{
			case 0:
				return EMySQLConnectionState::Broken;
			case 1:
				return EMySQLConnectionState::Closed;
			case 2:
				return EMySQLConnectionState::Connecting;
			case 3:
				return EMySQLConnectionState::Executing;
			case 4:
				return EMySQLConnectionState::Fetching;
			case 5:
				return EMySQLConnectionState::Open;
			default:
				return EMySQLConnectionState::Broken;
			}
			FPlatformProcess::FreeDllHandle(v_MySQLdllHandle);
		}
	}

	return EMySQLConnectionState::Broken;

}

void UMySQLBPLibrary::UpdateDataFromQueryAsync(FString Query)
{
	char* q = GetCharfromFString(Query);

	typedef void(*_UpdateDataFromQueryAsync)(char* query);
	
	
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_UpdateDataFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "UpdateDataFromQueryAsync";
		DLLFuncPtr = (_UpdateDataFromQueryAsync)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
		}

		UnloadDLL(v_MySQLdllHandle);

	}


}

void UMySQLBPLibrary::SelectDataFromQueryAsync(FString Query)
{
	char* q = GetCharfromFString(Query);

	typedef void(*_SelectDataFromQueryAsync)(char* query);
	
	
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_SelectDataFromQueryAsync DLLFuncPtr = NULL;
		FString procName = "SelectDataFromQueryAsync";
		DLLFuncPtr = (_SelectDataFromQueryAsync)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
		}

		UnloadDLL(v_MySQLdllHandle);

	}


}



EMySQLQueryExecutionState UMySQLBPLibrary::CheckQueryExecutionState(FString &ErrorMessage)
{
	typedef int(*_CheckQueryExecutionState)(bool res);

	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_CheckQueryExecutionState DLLFuncPtr = NULL;
		FString procName = "CheckQueryExecutionState";
		DLLFuncPtr = (_CheckQueryExecutionState)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			int r = DLLFuncPtr(false);
			UnloadDLL(v_MySQLdllHandle);

			switch (r)
			{
			case 0:
				return EMySQLQueryExecutionState::Executing;
			case 1:
				return EMySQLQueryExecutionState::Success;
			case -1:
				ErrorMessage = GetErrorMessage();
				return EMySQLQueryExecutionState::Failed;
			}
		}

		UnloadDLL(v_MySQLdllHandle);

	}

	ErrorMessage = GetErrorMessage();
	return EMySQLQueryExecutionState::Failed;

}

wstring s2ws(const string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	wstring r(buf);
	delete[] buf;
	return r;
}




void UMySQLBPLibrary::UpdateDataFromQuery(FString Query, EMysqlSuccessStatus &SuccessStatus, FString &ErrorMessage)
{
	
	char* q = GetCharfromFString(Query);

	typedef void(*_UpdateDataFromQuery)(char* query1);

	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_UpdateDataFromQuery DLLFuncPtr = NULL;
		FString procName = "UpdateDataFromQuery";
		DLLFuncPtr = (_UpdateDataFromQuery)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q);
			ErrorMessage = GetErrorMessage();
			if (ErrorMessage.IsEmpty())
				SuccessStatus = EMysqlSuccessStatus::Success;
			else
				SuccessStatus = EMysqlSuccessStatus::Failed;

		}
		UnloadDLL(v_MySQLdllHandle);

	}

}

void UMySQLBPLibrary::CompressPNG(TArray<uint8> RawData, int32 Quality, TSharedPtr<IImageWrapper> MySQLImageWrapper)
{
	check(RawData.Num());

	//png_structp png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, this, nullptr, nullptr);
	//check(png_ptr);

}

void FlushImageRenderingCommands(bool bFlushDeferredDeletes)
{
	if (!GIsRHIInitialized)
	{
		return;
	}

	// Need to flush GT because render commands from threads other than GT are sent to
	// the main queue of GT when RT is disabled
	if (!GIsThreadedRendering
		&& !FTaskGraphInterface::Get().IsThreadProcessingTasks(ENamedThreads::GameThread)
		&& !FTaskGraphInterface::Get().IsThreadProcessingTasks(ENamedThreads::GameThread_Local))
	{
		FTaskGraphInterface::Get().ProcessThreadUntilIdle(ENamedThreads::GameThread);
		FTaskGraphInterface::Get().ProcessThreadUntilIdle(ENamedThreads::GameThread_Local);
	}

	ENQUEUE_RENDER_COMMAND(FlushPendingDeleteRHIResourcesCmd)(
		[bFlushDeferredDeletes](FRHICommandListImmediate& RHICmdList)
	{
		RHICmdList.ImmediateFlush(
			bFlushDeferredDeletes ?
			EImmediateFlushType::FlushRHIThreadFlushResourcesFlushDeferredDeletes :
			EImmediateFlushType::FlushRHIThreadFlushResources);
	});

	AdvanceFrameRenderPrerequisite();

	// Find the objects which may be cleaned up once the rendering thread command queue has been flushed.
	FPendingCleanupObjects* PendingCleanupObjects = GetPendingCleanupObjects();

	// Issue a fence command to the rendering thread and wait for it to complete.
	FRenderCommandFence Fence;
	Fence.BeginFence();
	Fence.Wait();

	// Delete the objects which were enqueued for deferred cleanup before the command queue flush.
	delete PendingCleanupObjects;
}

void GetTexturePixels(UTexture2D* Texture, TArray<FColor>& OutPixels)
{


	OutPixels.Reset();

	ENQUEUE_RENDER_COMMAND(FSaveMySQLImageResource)(
		[OutPixels, Texture](FRHICommandListImmediate& RHICmdList)
	{
		TArray<FColor> OutData = OutPixels;
		FTextureResource* TextureResource = Texture->Resource;
		FTexture2DRHIRef Texture2DRHIRef = TextureResource->TextureRHI->GetTexture2D();

		FIntRect Rect = FIntRect(0, 0, Texture->GetImportedSize().X, Texture->GetImportedSize().Y);
		FReadSurfaceDataFlags Flags = FReadSurfaceDataFlags(RCM_UNorm, CubeFace_MAX);
		
		RHICmdList.ReadSurfaceData(
			Texture2DRHIRef,
			Rect,
			OutData,
			Flags
		);
	});


	
	FlushImageRenderingCommands(false);
}


char* UMySQLBPLibrary::GetCharFromTextureData(UTexture2D *Texture, FString Path)
{
	FVector2D ImageSize = FVector2D(Texture->GetSurfaceWidth(), Texture->GetSurfaceHeight());
	char* imagebytes = new char[ImageSize.X * ImageSize.Y * 4];


	if (Texture->PlatformData->Mips.Num() > 0)
	{
		TextureCompressionSettings OldCompressionSettings = Texture->CompressionSettings;
#if WITH_EDITORONLY_DATA
		TextureMipGenSettings OldMipGenSettings = Texture->MipGenSettings;
#endif
		bool OldSRGB = Texture->SRGB;

		Texture->CompressionSettings = TextureCompressionSettings::TC_VectorDisplacementmap;
#if WITH_EDITORONLY_DATA
		Texture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
#endif	
		
		Texture->SRGB = false;
		Texture->UpdateResource();

		FTexture2DMipMap* Mip = &Texture->PlatformData->Mips[0];

		uint8* TextureData = (uint8*)Mip->BulkData.Lock(LOCK_READ_WRITE);
		
		//TArray<uint8> OutArray;
		//OutArray.InsertZeroed(0, ImageSize.X*ImageSize.Y*4);

		for (int i = 0; i < (ImageSize.X*ImageSize.Y); i+=4)
		{
			imagebytes[i] = TextureData[i];
			imagebytes[i + 1] = TextureData[i+ 1];
			imagebytes[i + 2] = TextureData[i + 2];
			imagebytes[i + 3] = TextureData[i + 3];

		}


		TArray<FColor> OutPixels;
		GetTexturePixels(Texture, OutPixels);


		//FFileHelper::SaveArrayToFile(OutArray, *Path);
		Texture->CompressionSettings = OldCompressionSettings;
#if WITH_EDITORONLY_DATA
		Texture->MipGenSettings = OldMipGenSettings;
#endif
		Texture->SRGB = OldSRGB;
		
		Mip->BulkData.Unlock();
		Texture->UpdateResource();


	}

	return imagebytes;
}


bool UMySQLBPLibrary::SaveTextureToPath(UTexture2D* Texture, const FString Path)
{

	if (Texture && FPaths::ValidatePath(Path))
	{

		FVector2D ImageSize = FVector2D(Texture->GetSurfaceWidth(), Texture->GetSurfaceHeight());

		char* imagebytes = GetCharFromTextureData(Texture, Path);
		if (imagebytes)
		{
			char* path = TCHAR_TO_ANSI(*Path);
      		return false;
		}

	}
	return false;
}

//This does not work in packaged build, hence this feature is commented out
//bool UMySQLBPLibrary::UpdateImageFromTextureAsync(FString Query, FString UpdateParameter, UTexture2D* Texture, 
//	FString &ErrorMessage)
//{
//	if (Texture)
//	{
//		FString TexturePath = FPaths::Combine(FPaths::ProjectDir(), TEXT("OutputImage.png"));
//		TexturePath = IFileManager::Get().ConvertToAbsolutePathForExternalAppForRead(*TexturePath);
//		bool IsTextureSaved = SaveTextureToPath(Texture, TexturePath);
//
//		if (IsTextureSaved)
//		{
//			UpdateImageFromPathAsync(Query, UpdateParameter, TexturePath);
//			return true;
//		}
//		else
//		{
//			ErrorMessage = "Unable to Save Texture.";
//		}
//	}
//	else
//	{
//		ErrorMessage = "Invalid Texture";
//	}
//
//	return false;
//	
//}


void UMySQLBPLibrary::UpdateImageFromPathAsync(FString Query, FString UpdateParameter, FString ImagePath)
{
	string query(TCHAR_TO_UTF8(*Query));
	char* q = _strdup(query.c_str());

	string param(TCHAR_TO_UTF8(*UpdateParameter));
	char* pm = _strdup(param.c_str());

	string path(TCHAR_TO_UTF8(*ImagePath));
	char* pt = _strdup(path.c_str());


	typedef bool(*_UpdateImageFromQuery)(char* query, char* param, char* path);
	
	TArray<FString> Results;
	if (LoadDLL(TEXT("SQL.dll"), v_MySQLdllHandle))
	{
		_UpdateImageFromQuery DLLFuncPtr = NULL;
		FString procName = "UpdateImageFromQueryAsync";
		DLLFuncPtr = (_UpdateImageFromQuery)FPlatformProcess::GetDllExport(v_MySQLdllHandle, *procName);
		if (DLLFuncPtr != NULL)
		{
			DLLFuncPtr(q, pm, pt);
			FPlatformProcess::FreeDllHandle(v_MySQLdllHandle);

		}
	}


}


UTexture2D* UMySQLBPLibrary::LoadTextureFromPath(const FString& Path)
{
	if (Path.IsEmpty()) return NULL;
	EImageFormat imagetype = EImageFormat::Invalid;

	if (Path.ToUpper().EndsWith(".PNG"))
	{
		imagetype = EImageFormat::PNG;
	}
	else if (Path.ToUpper().EndsWith(".JPEG") || Path.ToUpper().EndsWith(".JPG"))
	{
		imagetype = EImageFormat::JPEG;
	}
	else if (Path.ToUpper().EndsWith(".BMP"))
	{
		imagetype = EImageFormat::BMP;
	}

	IImageWrapperModule* ImageWrapperModule =
		FModuleManager::LoadModulePtr<IImageWrapperModule>(FName("ImageWrapper"));

	TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule->CreateImageWrapper(imagetype);
	TArray<uint8> RawFileData;
	if (FFileHelper::LoadFileToArray(RawFileData, *Path))
	{
		if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
		{
			const TArray<uint8>* UncompressedBGRA = NULL;
			if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, UncompressedBGRA))
			{
				UTexture2D* Image = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_B8G8R8A8);

				void* TextureData = Image->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
				FMemory::Memcpy(TextureData, UncompressedBGRA->GetData(), UncompressedBGRA->Num());
				Image->PlatformData->Mips[0].BulkData.Unlock();

				// Update the rendering resource from data.
				Image->UpdateResource();
				return Image;
			}

		}
	}
	return Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), NULL, *(Path)));
}


#endif

