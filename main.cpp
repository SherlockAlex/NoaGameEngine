//系统库
#include <iostream>
#include<windows.h>
//自定义库
#include "GameMenu.h"
#include "Screen.h"

using namespace std;

int main(void)
{
    MainMenu mainMenu;
    while (true)
    //for(int i=0;i<100;i++)
    {
        //游戏的主要运行部分

        GotoXY(0, 0);//刷新屏幕
        
        //这个场景是暂时的
        cout << "Name of New Game" << endl;
        mainMenu.GameMain();
    }

    return 0;
}