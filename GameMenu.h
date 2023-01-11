#ifndef _NOAGAMEENGINE_GAMEMENU_H
#define _NOAGAMEENGINE_GAMEMENU_H

//���������Ϸ��ʼ�˵�����
#include <iostream>

//�û��Զ����
#include "InputSystem.h"
//#include "Game.h"
#include "Scene.h"
#include "stdlib.h"

//���尴�°����ĺ�
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 

using namespace std;

class MainMenu :public Game{
public:
    MainMenu();
    ~MainMenu();
public:                    //���з���
    void Input();          //����
    void Display();        //��ʾ
    void GameMain() override;
    /*void GameMain() override {
        Display();
        Input();
    }*/

private:
    void Enter(int index);

public:                     //��������
    int buttonIndex=0;
    //Scene* sceneManager=nullptr;
    Game* nextScene;       //��һ������
};

#endif