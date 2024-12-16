// this file is a test program, please DO NOT run this file.
#include <bits/stdc++.h>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include "..\head\public_header.hpp"
using namespace std;
string text[9999] = {};
int main()
{
	freopen("changes_string.txt", "r", stdin);
	int ia = 0;
	for (ia = 0; ia < 9999; ia += 3)
	{
		getline(cin, text[ia]);
		string test, test1;
		if (!getline(cin, test) || !getline(cin, test1))
		{
			break;
		}
		text[ia + 1] = test;
		text[ia + 2] = test1;
	}
	fclose(stdin);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, TEXT_BLUE | TEXT_GREEN | TEXT_LIGHT);
	for (int i = 0; i < ia-2; i++)
	{
		for (int j = 0; j < text[i].size(); j++)
		{
			cout << text[i][j];
			Sleep(30);
		}
		cout << endl;
		Sleep(30);
	}
	clearcolor(handle, false, false);

	Sleep(1200);
	system("pause");

	return 0;
}
