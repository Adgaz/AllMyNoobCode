#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    std::cout << "Press enter to print! " << endl;

    int varInt = 123456;
    string varString = "DefaultString";
    char arrChar[128] = "Long char array right there ->";
    int* ptr2int(&varInt);
    int** ptr2ptr(&ptr2int);
    int*** ptr2ptr2(&ptr2ptr);

    do { 
        
        Sleep(250);

        if (GetAsyncKeyState(VK_RETURN) & 1) {


            std::cout << "Process ID: " << GetCurrentProcessId() << endl;
            std::cout << "varInt (0x" << &varInt << ") = " << varInt << endl;
            std::cout << "varString (0x" << &varString << ") = " << varString << endl;
            std::cout << "arrChar (0x" << &arrChar << ") = " << arrChar << endl;
            std::cout << "ptr2int (0x" << &ptr2int << ") = " << "0x" << *ptr2int << endl;
            std::cout << "ptr2ptr (0x" << &ptr2ptr << ") = " << "0x" << *ptr2ptr << endl;
            std::cout << "ptr2ptr2 (0x" << &ptr2ptr2 << ") = " << "0x" << *ptr2ptr2 << endl;
            std::cout << "Press enter to print again!" << endl;
            std::cout << "-----------------------------------------------------" << endl;


        }

    } while (true);


   
    
}
