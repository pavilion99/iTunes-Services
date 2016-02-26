// iTunes Services.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	system("@echo off");
	system("net start \"Apple Mobile Device\"");
	system("net start \"Bonjour Service\"");
	system("pause>nul");
	return 0;
}

