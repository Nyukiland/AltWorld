#include "AltWorld.h"
#include "Modules/ModuleManager.h"

void FAltWorldModule::StartupModule()
{
	FString ShaderDir =  FPaths::Combine(FPaths::ProjectDir(), "Shaders");
	if(FPaths::DirectoryExists(ShaderDir))
	{
		AddShaderSourceDirectoryMapping(TEXT("/Shaders"), ShaderDir);
	}
}

void FAltWorldModule::ShutdownModule()
{
}
IMPLEMENT_PRIMARY_GAME_MODULE(FAltWorldModule, AltWorld, "AltWorld" );
