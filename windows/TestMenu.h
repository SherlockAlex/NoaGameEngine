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
	Sprite* sprite=nullptr;

	Sprite* sprites[2];

	SDL_Rect orect;
	SDL_Rect drect;

	Player* player=nullptr;

public:						//�����Ա����
	int buttonIndex = 0;
	SceneManager * sceneManager = nullptr;

public:						//�����ʼ������
	TestMenu(SceneManager * _sceneManager);
	~TestMenu();



public:						//�����Ա����
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

	}

	void Update(NoaEvenet event) override
	{
		DrawScene(sprites,2);
		player->OnUpdate();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

