//this file is a test program, please DO NOT run this file.
#include <bits/stdc++.h>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
#include "..\head\public_header.hpp"
using namespace std;
string text[9999] = {};
int main(){
	freopen("changes_string.txt", "r", stdin); int i=0;
	while(cin >> text[i]){i++;}
	fclose(stdin);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, TEXT_BLUE | TEXT_GREEN | TEXT_LIGHT);
	for(int i=0;i<9999;i++){
		if(text[i] == ""){
			break;
		}
		for(int j=0;j<text[i].size();j++){
			cout << text[i][j];
			Sleep(60);
		}
		cout << endl;
	}
	clearcolor(handle, true, true);

	system("pause");
	
	return 0;
}
