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
	//他是一个初始化菜单


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
		surface = sceneManager->GetSurface();
		renderer = sceneManager->GetRenderer();

		//下面是一个绘制的例子
		SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
		SDL_Delay(5000);
		//Display();
	}

	void Update() override
	{
		//SetButton();
		//主循环内容
		//Display();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

