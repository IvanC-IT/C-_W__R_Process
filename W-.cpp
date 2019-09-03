#include <iostream>
#include <Windows.h>
using namespace std;

void myfunc1()
{
	//char* s = new char[80];
	//char* test = 0;
	//__asm
	//{
	//	//mov ebx, s; 
	//	//mov byte ptr[ebx], 'A'
	//	//mov byte ptr[ebx + 1], 'L'
	//	//mov byte ptr[ebx + 2], 'o'
	//	//mov byte ptr[ebx + 3], 'o'
	//	//mov byte ptr[ebx + 4], 'L'
	//	//mov byte ptr[ebx + 5], 0; //
	//	//mov  DWORD PTR[test], ebx
	//	
	//}

	//printf(test);
	//
}

int main()// 

{
	int ReadTest = 0;

	

	DWORD BaseAddress = 0x400000;
	DWORD ProcessID;

	int choice;
	HWND hWnd = FindWindowA(NULL, ("..process name #without# .exe..."));
	GetWindowThreadProcessId(hWnd, &ProcessID);
	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessID);
	if (hWnd == NULL)
	{

		cout << "Process not connected.\n Start the process..." << endl;
		cin.get(); // wait
		return 0;
	}

	else

	{
		
		cout << "Process  connected.\n" << "ProcessID: " << ProcessID << "\n" << endl;
		printf("BaseAddress : %x\n", BaseAddress);
		//myfunc1();
		
		//Test
		/*ReadProcessMemory(pHandle, (PBYTE*)0x????????, &ReadTest, sizeof(int), 0);
		printf("ReadTest 0x????????: %x\n", ReadTest);*/
		//printf("BaseAddress : %x\n", BaseAddress);

		//Test
		/*ReadProcessMemory(pHandle, (PBYTE*)0x????????, &ReadTest, sizeof(int), 0);
		printf("ReadTest 0x????????: %x\n", ReadTest);*/

	}
	
	return 0;

}
