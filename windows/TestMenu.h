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

		//下面是一个绘制的例子
		//SDL_SetRenderDrawColor(renderer, 0, 255, 255, 255);
		//SDL_RenderDrawPoint(renderer, 10, 10);

		//surface = IMG_Load("Mario.png");//读取图片

		//场景的rect
		rect.x = 10;
		rect.y = 10;
		rect.w = 24;
		rect.h = 32;

		DrawTexture("Mario.png",192,256,&rect,renderer);

		//SDL_RenderClear(renderer);
		//SDL_RenderPresent(renderer);

		//SDL_Delay(5000);
		//Display();
	}

	void Update(NoaEvenet event) override
	{
		//SetButton();
		//主循环内容
		//Display();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

