#ifndef _NOAGAMEENGINE_GAMEMENU_H
#define _NOAGAMEENGINE_GAMEMENU_H

//定义关于游戏开始菜单的类
#include <iostream>

//用户自定义库
#include "InputSystem.h"
#include "Game.h"

//定义按下按键的宏
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 

using namespace std;

class MainMenu :public Game{
public:
    MainMenu();
    ~MainMenu();
public://公共方法
    void GameMain();//菜单的显示
    void Input();
    void Display();

public://公共属性
    int buttonIndex=0;
};

#endif