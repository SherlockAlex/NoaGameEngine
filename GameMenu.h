#ifndef _NOAGAMEENGINE_GAMEMENU_H
#define _NOAGAMEENGINE_GAMEMENU_H

//���������Ϸ��ʼ�˵�����
#include <iostream>

//�û��Զ����
#include "InputSystem.h"
#include "Game.h"

//���尴�°����ĺ�
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 

using namespace std;

class MainMenu :public Game{
public:
    MainMenu();
    ~MainMenu();
public://��������
    void GameMain();//�˵�����ʾ
    void Input();
    void Display();

public://��������
    int buttonIndex=0;
};

#endif