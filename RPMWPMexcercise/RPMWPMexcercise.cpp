using namespace std;
#include <Windows.h>
#include <iostream>
#include <cstdio>


int main()
{
	

	int intRead = 0;
	int ptrRead = 0;
	int ptrRead2 = 0;

	HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, 7092);
	if (hProcess == NULL) { // Failed to get a handle
		cout << "OpenProcess failed. GetLastError = " << dec << GetLastError() << endl;
		system("pause");
		return EXIT_FAILURE;
	}
	
	ReadProcessMemory(hProcess, (LPCVOID)0x009CF8E0, &intRead, sizeof(int), NULL); //intread
	
	ReadProcessMemory(hProcess, (LPCVOID)0x009CF828, &ptrRead, sizeof(int), NULL); //ptrread

	ReadProcessMemory(hProcess, (LPCVOID)0x9CF8E0, &ptrRead2, sizeof(int), NULL);


	cout << "intRead = " << dec << intRead << endl;
	cout << "ptrRead 1ST STEP = "  << hex << ptrRead << endl;
	cout << "ptrRead FINAL = " << dec << ptrRead2 << endl;

	CloseHandle(hProcess);





	cout << "Press enter to quit" << endl;

	std::getchar();
	
}

