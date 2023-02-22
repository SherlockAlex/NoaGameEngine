#pragma once
#ifndef NOAGAMEENGIN_TESTMENU_H
#define NOAGAMEENGIN_TESTMENU_H

#include <iostream>

#include "Scene.h"
#include "SceneManager.h"
#include "InputSystem.h"
#include "TestScene.h"
#include "Graphic.h"

using namespace std;

class TestMenu:public Scene
{
	//����һ����ʼ���˵�
private:
	Player* player=nullptr;

public:						//�����Ա����
	int buttonIndex = 0;
	SceneManager * sceneManager = nullptr;

public:						//�����ʼ������
	TestMenu(SceneManager * _sceneManager);
	~TestMenu();



public:						//�����Ա����
	void Display();
	void SetButton();
	void InvokeButtonEvent();

public:
	void Start() override
	{

		cout << "��ǰ����:TestMenu" << endl;
		//surface = sceneManager->GetSurface();
		this->renderer = gameRenderer;
		if (!renderer) {
			cout << "��Ⱦ������ʧ��" << endl;
			return;
		}
		player->OnStart();
		

		//rect.x = 10;
		//rect.y = 10;
		//rect.w = 24;
		//rect.h = 32;

		//DrawTexture("Mario.png",192,256,&rect,renderer);

	}

	void Update(NoaEvenet event) override
	{
		//cout << "����������Ϸ..." << endl;
		player->OnUpdate();
		//SetButton();
		//��ѭ������
		//Display();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

