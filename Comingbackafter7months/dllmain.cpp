#include <windows.h>
#include <iostream>
#include "offsets.h"
using namespace std;



BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(hModule);		
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)mainHack, NULL, NULL, NULL);	
	}
	else if (dwReason == DLL_PROCESS_DETACH) {

	}
	return TRUE;
}

void mainHack()
{
	AllocConsole();
	FILE* f;
	freopen_s(&f, "CONOUT$", "w", stdout);
	
	bool shiInjected = true;

	while (true) {
		Sleep(1);
		*health = 200;
		*armour = 200;
		*rifleAmmo = 100;
		*pistolAmmo = 100;

	}

	if (shiInjected = true) {

		Sleep(250);

		std::cout << "ASSAULTCUBE TRAINER BY 13X" << endl;
		std::cout << "Health modified!" << endl;
		std::cout << "Armour modified! " << endl;
		std::cout << "Rifle Ammo modified!" << endl;
		std::cout << "Pistol Ammo modified!" << endl;

	}

 


}
