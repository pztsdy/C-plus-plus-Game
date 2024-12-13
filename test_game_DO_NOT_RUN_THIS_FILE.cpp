#include <bits/stdc++.h>
#include <conio.h>
#include <Windows.h>
#include <iomanip>
using namespace std;
void clearcolor(){
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 1| 2 | 4);
}
string text[100] = {
"ERROR! Your PC is had some wrong! Can you fix it?\n",
"I know, you can't! Becuse you are a SB."
};
int main(){
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 8 | 1 | 2 | 4 | 32);
	for(int i=0;i<text[0].size();i++){
		cout << text[0][i];
		Sleep(60);
	}
	system("pause");
	for(int i=0;i<text[1].size();i++){
		cout << text[1][i];
		Sleep(60);
	}
	
	clearcolor();
	
	return 0;
}
