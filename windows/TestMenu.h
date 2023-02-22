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
	//他是一个初始化菜单
private:
	Player* player=nullptr;

public:						//定义成员属性
	int buttonIndex = 0;
	SceneManager * sceneManager = nullptr;

public:						//定义初始化函数
	TestMenu(SceneManager * _sceneManager);
	~TestMenu();



public:						//定义成员方法
	void Display();
	void SetButton();
	void InvokeButtonEvent();

public:
	void Start() override
	{

		//surface = sceneManager->GetSurface();
		this->renderer = gameRenderer;
		player->OnStart();
		

		//rect.x = 10;
		//rect.y = 10;
		//rect.w = 24;
		//rect.h = 32;

		//DrawTexture("Mario.png",192,256,&rect,renderer);

	}

	void Update(NoaEvenet event) override
	{
		//player->OnUpdate();
		//SetButton();
		//主循环内容
		//Display();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

