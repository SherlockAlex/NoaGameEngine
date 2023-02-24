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
		float frameStart = SDL_GetTicks();
		//cout << "�������У�TestMenu" << endl;
		DrawScene(sprites,2);
		//
		player->OnUpdate();
		//
		//����ȥ���Ž�ɫ�Ķ���
		if ((SDL_GetTicks()-frameStart)<16) {
			SDL_Delay(16-(SDL_GetTicks() - frameStart));
		}
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

