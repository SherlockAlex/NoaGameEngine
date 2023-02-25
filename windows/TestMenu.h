#pragma once
#ifndef NOAGAMEENGIN_TESTMENU_H
#define NOAGAMEENGIN_TESTMENU_H

/*�����һ�����Գ���������������Ϸ����API�õ�*/

#include <iostream>

#include "GameScene.h"
#include "InputSystem.h"
#include "TestScene.h"
#include "Graphic.h"

using namespace std;

class TestMenu:public Scene
{
	//����һ����ʼ���˵�
private:
	Player* player=nullptr;

public:						//�����ʼ������
	TestMenu(SceneManager* _sceneManager);
	~TestMenu();


public:						//�����Ա����
	void InvokeButtonEvent();

public:
	void Start() override
	{
		
		cout << "runing scene:TestMenu" << endl;
		//surface = sceneManager->GetSurface();
		this->renderer = gameRenderer;
		player->OnStart();

	}
	

	void Update() override
	{
		player->OnUpdate();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

