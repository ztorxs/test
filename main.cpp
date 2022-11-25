#include <iostream>
#include "windows.h"

using funHello = void (*)();
int main()
{
	auto hDll = LoadLibrary("hello_world.dll");
	if (hDll != NULL) { 
		funHello pHello = (funHello)GetProcAddress(hDll, "Hello");
		if(pHello)
			pHello();
	}
	getchar();
	return 0;
};