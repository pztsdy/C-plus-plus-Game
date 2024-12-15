#include <string.h>
#include "../head/public_header.hpp"
using namespace std;

HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

string username, usernametxt;
int coin, people, jd;
bool isNew;

bool SAVE()
{
    freopen("userdata.tmp", "w", stdout);
    // coin >> people >> jd;
    cout << username << ' ' << coin << ' ' << people << ' ' << jd;
    fstream fin("userdata.tmp");
    fclose(stdout);
    if (fin)
        return 1;

    return 0;
}

void myinfo()
{
    cout << "\n你的名字：" << username << ".\n";
    cout << "你的金币：" << coin << ".\n";
    cout << "你的进度：";
    if (jd == 0)
        cout << "地球。\n";
    else if (jd == 1)
        cout << "太空。 \n";
    else if (jd == 2)
        cout << "到达月球。 \n";
    else
        cout << "建设月球基地。 \n";

    return;
}

int menu();

void problem(int xz)
{
    switch (xz)
    {
    case 1:
        myinfo();
        problem(menu());
        break;
    case 2:
        //
        break;
    case 3:
        //
        break;
    case 4:
        cout << "作者：Piaoztsdy, 版权：(c)Yunduo Studio 2022-2024";
        problem(menu());
        break;
    case 5:
        bool isCanSave = SAVE();
        if (isCanSave)
            cout << "保存成功！";
        else
        {
            cout << "保存失败！";
            SetConsoleTextAttribute(handle, TEXT_LIGHT | TEXT_RED);
            cerr << "Save faild!";
            colorclear(handle);
            problem(menu());
        }
        return;
    }
}

int menu()
{
    cout << "\n伍月计划\n";
    cout << "[1] 我的信息  [2] 签到任务  [3] 主线任务  [4] 关于作者  [5]保存并退出";
    cout << "\n请选择：";
    int xzz;
    cin >> xzz;

    return xzz;
}

void Icon(int iconid)
{
    if (iconid == 1)
    {
        // ICON MayMoon Plan ICON
        cout << "\n";
        cout << "           _ \n";
        cout << "          | \\\n";
        cout << "          |_/ \n";
        cout << "          |\n";
        cout << "       /-------\\ \n";
        cout << "      /         \\_\\\n";
        cout << "    /|   o       _/\n";
        cout << "   | |        __/| \n";
        cout << "    \\-\\------/u  / \n";
        cout << "       \\_______/ \n";
        cout << "\n";
        cout << "     伍  月  计  划\n";
        return;
    }
    if (iconid == 2)
    {
        cout << " _________ \n";
        cout << "|  LOGIN  |   欢迎来到伍月计划\n";
        cout << "| ------- |     现在请您登录\n";
        cout << "|  _____  |    如果您没有账号\n";
        cout << "|_________|  那么欢迎您注册一个！\n";
        return;
    }
    if (iconid == 3)
    {
        cout << "   UPGRADE! 升级！\n";
        cout << "   ______________ \n";
        cout << "  |    恭喜你    |     升级后\n";
        cout << "  |——————————————| 你将到达下一个\n";
        cout << "  |  你成功升级  |     进度，\n";
        cout << "  | ..''''''''.. |   祝你好运！\n";
        cout << "  |______________| 伍月计划 - TMMP\n";
        return;
    }
}

int main()
{
    system("title 伍月计划^ ^-^ The^ MayMoon^ Plan");
    MessageBox(NULL, TEXT("请不要使用中文或者字母、符号输入（输入名字时除外），否则将会导致游戏崩溃！"), TEXT("警告"), MB_ICONWARNING | MB_OK); // C++ 11+
    cout << "伍月计划 - The MayMoon Plan.";
    Icon(1);
    cout << "\n";
    Icon(2);
    cout << "用户名：";
    cin >> username;
    fstream fin("userdata.tmp");
    isNew = true;
    if (fin)
    {
        freopen("userdata.tmp", "r", stdin);
        cin >> usernametxt;
        if (usernametxt == username)
        {
            cout << "您好，" << usernametxt << "！\n";
            cout << "\n登入成功！";
            cin >> coin >> people >> jd;
            isNew = false;
        }
        else
        {
            isNew = true;
        }
        fclose(stdin);
    }
    if (isNew)
    {
        cout << "用户" << username << "，您好！检测到您是新用户，正在保存您的初始数据！";
        coin = people = jd = 0;
    }
    Sleep(2200);
    cls();
    if (isNew)
    {
        SetConsoleTextAttribute(handle, BG_LIGHT | BG_RED | BG_GREEN | BG_BLUE);
        Icon(1);
        cout << endl
             << endl
             << "现在，玩家" << username << "，我将为您介绍游戏玩法。\n";
        pause();
        cout << "伍月计划是一个探月模拟游戏。\n";
        pause();
        cout << "在这个游戏中，您需要收集资源，制造火箭与发射场，直面困难，勇往无前！\n";
        pause();
        cout << "在太空中，你可能会遇到各种困难， \n";
        pause();
        cout << "当你战胜困难，到达月球时，你需要建造基地，并且维护它的发展与繁荣！\n";
        pause();
        cout << "记住——你肩负着使命！\n";
        pause();
        cout << "从现在开始吧！祝你好运！\n";
        pause();
        cout << "伍月计划 - The MayMoon Plan\n\n\n\n";
        pause();
        clearcolor(handle, true, true);
        cls();
    }
    // 伍月
    problem(menu());

    return 0;
}