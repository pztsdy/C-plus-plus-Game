#include <iostream>
#include <algorithm>
#include <cmath>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <Windows.h>
#include <vector>
#include <winnt.h>
#include <ios>
#include <fstream>

/*

	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(handle, BG_RED | ...);
*/

#define THE_MAX 21000000
#define TEXT_RED 4
#define TEXT_GREEN 2
#define TEXT_BLUE 1
#define TEXT_LIGHT 8
#define BG_RED 64
#define BG_GREEN 32
#define BG_BLUE 16
#define BG_LIGHT 128

#ifdef _WINDOWS_
#include <_mingw.h>
#define __winsystem__ true
#endif

#ifndef _WINDOWS_
#define __winsystem__ false
#endif

#ifndef __INC_HEADER_
#define __INC_HEADER_
#define RETURN_CHANGES_Inc 0x2418b9cc
#endif



void pause()
{
	system("pause");

	return;
}

void cls()
{
	if (__winsystem__)
	{
		system("cls");
	}
	else
	{
		system("clear");
	}

	return;
}

void clearcolor(HANDLE handle, bool ifCLS)
{
	SetConsoleTextAttribute(handle, TEXT_RED | TEXT_BLUE | TEXT_GREEN);
	system("color 07");
	if (ifCLS)
	{
		cls();
	}

	return;
}