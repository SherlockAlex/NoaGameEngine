#pragma once
#ifndef NOAGAMEENGIN_TESTMENU_H
#define NOAGAMEENGIN_TESTMENU_H

#include <iostream>

#include "Scene.h"
#include "SceneManager.h"
#include "InputSystem.h"
#include "TestScene.h"

using namespace std;

class TestMenu:public Scene
{
	//����һ����ʼ���˵�


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
		surface = sceneManager->GetSurface();
		renderer = sceneManager->GetRenderer();

		//������һ�����Ƶ�����
		//SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
		//SDL_RenderDrawPoint(renderer, 10, 10);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_Delay(5000);
		//Display();
	}

	void Update() override
	{
		//SetButton();
		//��ѭ������
		//Display();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

