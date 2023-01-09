#include "GameMenu.h"

MainMenu::MainMenu() {
    //初始化
    buttonIndex = 0;
}

MainMenu::~MainMenu() {

}

void MainMenu::GameMain()
{
    //主要的方法体
    
    Display();
    Input();
}

void MainMenu::Display() {
    
    switch (buttonIndex) {
        //游戏菜单界面设计
        case 0:
            //system("cls");
            cout << "--> " << "[开始游戏]" << endl;
            cout << "    " << "[退出游戏]" << endl;
            break;
        case 1:
            //system("cls");
            cout << "    " << "[开始游戏]" << endl;
            cout << "--> " << "[退出游戏]" << endl;
            break;
    }
}

void MainMenu::Input() {
    //这边是获取按键是否按下
    //如果按下一次w/s键，对应的箭头就移动
    if (GetKeyDown('w'))
    {
        buttonIndex++;
        if (buttonIndex >1) {
            buttonIndex = 0;
        }
    }
    if (GetKeyDown('s'))
    {
        buttonIndex--;
        if (buttonIndex < 0) {
            buttonIndex = 1;
        }
    }
    if (GetKeyDown(' ')) {
        //如果按下的了空格，表示进入当前按键，然后卸载这个场景，加载下一个场景
    }
}
