#include <windows.h>
#include <iostream>
#include "offsets.h"
using namespace std;

bool healthon = true; bool ammoon = true; bool nadeon = true;

void mainHack()
{
	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);



	std::cout << "13X SEXY ASSAULT CUBE HACK" << std::endl;
	std::cout << "Unlimited Health: F1" << std::endl;
	std::cout << "Unlimited Ammo: F2" << std::endl;
	std::cout << "Unlimited Nades: F3" << std::endl;
	std::cout << "No recoil: F4" << std::endl;

	bool consoleActive = true; bool health = true;

	while (true)
	{
		Sleep(10);
		if (GetAsyncKeyState(VK_F4) & 1)
		{

		}
	}

}

void godMode()
{
	
		while (true)
		{	
			Sleep(10);
			if (GetAsyncKeyState(VK_F1) & 1)
			{
				Sleep(20);
				while (healthon)
				{
					*healthaddy = 1337;
				}
			}
		}

}

void infAmmo()
{
	
		while (true)
		{	
			Sleep(10);
			if (GetAsyncKeyState(VK_F2) & 1)
			{
				Sleep(20);
				while (ammoon)
				{
					*rifleAmmo = 1337;
					*pistolAmmo = 1337;
				}
			}
		}

}

void infNade()
{

	while (true)
	{
		Sleep(10);
		if (GetAsyncKeyState(VK_F3) & 1)
		{
			Sleep(20);
			while (true)
			{
				*infnade = 1337;
			}
		}
	}

}

BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(hModule);		
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)mainHack, NULL, NULL, NULL);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)godMode, NULL, NULL, NULL);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)infAmmo, NULL, NULL, NULL);
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)infNade, NULL, NULL, NULL);
	}
	else if (dwReason == DLL_PROCESS_DETACH) {

	}
	return TRUE;
}


