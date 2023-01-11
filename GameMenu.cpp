#include "GameMenu.h"

//这个是实现简单菜单的例子

MainMenu::MainMenu() {
    //初始化
    buttonIndex = 0;
}

MainMenu::~MainMenu() {
    //在卸载当前场景的时候，把下一个场景的资源交给管理器
}

void MainMenu::GameMain() {
        //主要的方法体
        Display();
        Input();
}

void MainMenu::Display() {
    
    switch (buttonIndex) {
            //游戏菜单界面设计
        case 0:
            //system("cls");
            cout << "Name of New Game" << endl;
            cout << "--> " << "[开始游戏]" << endl;
            cout << "    " << "[退出游戏]" << endl;
            break;
        case 1:
            //system("cls");
            cout << "Name of New Game" << endl;
            cout << "    " << "[开始游戏]" << endl;
            cout << "--> " << "[退出游戏]" << endl;
            break;
    }
}

void MainMenu::Input() {
    //这边是获取按键是否按下
    //如果按下一次w/s键，对应的箭头就移动
    switch (GetKeyCode()) {
        //按键选择
        case W:
            buttonIndex++;
            if (buttonIndex >1) {
                buttonIndex = 0;
            }
            break;
        case S:
            buttonIndex--;
            if (buttonIndex < 0) {
                buttonIndex = 1;
            }
            break;
        case Space:
            //实现当前功能，执行一个函数叫Enter()
            cout << "Enter:" << buttonIndex << endl;
            Enter(buttonIndex);                     //0是加载下一个，1是退出游戏
            break;
    }

}

void MainMenu::Enter(int index) {
    switch (index)
    {
    case 0:
        cout << "执行事件:" << "加载场景";
        //按键事件名
        break;
    case 1:
        cout << "执行事件:" << "退出游戏";
        exit(100);                       //终止程序执行
        break;
    }
}