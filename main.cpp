#include "head/public_header.hpp"
using namespace std;
int main(){
	system("color 1f");
    printf("��ѡ��һ������Ҫ�����Ϸ(Please choise a game you want to play)\n(a/b):");
    char choise; scanf("%c", &choise);
    switch(choise){
        case 'a':
            system("g++.exe ./sorce/gm.cpp -o ./sorce/gm.exe");
            system("start ./sorce/gm.exe");
            break;
        case 'b':
            printf("ERROR!");
            Sleep(1200);
            system("exit"); 
            return 0;
            //system("g++.exe ./sorce/wg.cpp -o ./sorce/wg.exe");
            //system("start ./sorce/wg.cpp");
            break;
        default:
            printf("ѡ�����(Choise wrong)!");
            break;
    }

    return 0;
}
