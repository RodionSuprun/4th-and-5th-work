#include"stdafx.h"
#include<windows.h>
#include<conio.h>
#include<iostream>
#include<cstdlib>
int main() 
{
STARTUPINFO si; 
PROCESS_INFORMATION piApp; 
ZeroMemory(&si, sizeof(STARTUPINFO));   
si.cb = sizeof(STARTUPINFO); 
//создаем новый консольный процесс
if(!CreateProcess(L"C:\\createProcess.exe", NULL, NULL, NULL, FALSE, CREATE_NEW_CONSOLE, NULL, NULL, &si, &piApp))   
{     
_cputs("The old process is not created.\n");    
_cputs("Check a RODION  process.\n");     
_cputs("Press any key to finish.\n");     
_getch(); 
return 0;   
}   
_cputs("The new process is created.\n"); 
//ждем завершения созданного процесса
WaitForSingleObject(piApp.hProcess, INFINITE);
//закрываем дескрипторы этого процесса в текущем процессе
CloseHandle(piApp.hThread);   
CloseHandle(piApp.hProcess);   
system("pause"); 
return 0;
}
