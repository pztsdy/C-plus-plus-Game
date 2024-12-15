#include "head/public_header.hpp"
using namespace std;
int main(){
	system("color 1f");
    printf("请选择一个你想要玩的游戏(Please choise a game you want to play)\n(a/b):");
    char choise; scanf("%c", &choise);
    switch(choise){
        case 'a':
            system("g++.exe ./source/gm.cpp -o ./source/gm.exe");
            system("start ./source/gm.exe");
            break;
        case 'b':
            //printf("ERROR!");
            //Sleep(1200);
            //system("exit"); 
            //return 0;
            system("g++.exe ./source/wg.cpp -o ./sorce/wg.exe");
            system("start ./source/wg.cpp");
            break;
        default:
            printf("选择错误(Choise wrong)!");
            break;
    }

    return 0;
}
