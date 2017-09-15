#include "stdafx.h"
#include <iostream>	// библиотека для реализации ввода/вывода
#include <process.h>	// библиотека для работы со потоками и процессами
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{
  int i;
  _cputs("I am created.");
  _cputs("\nMy name is: ");
  _cputs(argv[0]);
  for (i = 1; i < argc; ++i)
    _cprintf ("\n My %d parameter =  %s", i, argv[i]);
    _cputs("\nPress any key to finish.\n");
_getch();
system("pause");
return 0;
}
