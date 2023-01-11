#ifndef _NOAGAMEENGINE_GAMEMENU_H
#define _NOAGAMEENGINE_GAMEMENU_H

//定义关于游戏开始菜单的类，是一个例子
#include <iostream>

//用户自定义库
#include "InputSystem.h"
//#include "Game.h"
#include "Scene.h"
#include "stdlib.h"

//定义按下按键的宏
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 

using namespace std;

class MainMenu :public Game{
public:
    MainMenu();
    ~MainMenu();
public:                    //公有方法
    void Input();          //输入
    void Display();        //显示
    void GameMain() override;
    /*void GameMain() override {
        Display();
        Input();
    }*/

private:
    void Enter(int index);

public:                     //公共属性
    int buttonIndex=0;
    //Scene* sceneManager=nullptr;
    Game* nextScene;       //下一个场景
};

#endif