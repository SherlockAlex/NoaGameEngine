#pragma once
#ifndef NOAGAMEENGIN_TESTMENU_H
#define NOAGAMEENGIN_TESTMENU_H

/*这个是一个测试场景，用来测试游戏引擎API用的*/

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
	Sprite* sprite=nullptr;

	Sprite* sprites[2];

	SDL_Rect orect;
	SDL_Rect drect;

	Player* player=nullptr;

public:						//定义成员属性
	int buttonIndex = 0;
	SceneManager * sceneManager = nullptr;

public:						//定义初始化函数
	TestMenu(SceneManager * _sceneManager);
	~TestMenu();



public:						//定义成员方法
	void InvokeButtonEvent();

public:
	void Start() override
	{

		cout << "当前场景:TestMenu" << endl;
		//surface = sceneManager->GetSurface();
		this->renderer = gameRenderer;
		if (!renderer) {
			cout << "渲染器加载失败" << endl;
			return;
		}
		player->OnStart();

	}

	void Update() override
	{
		//cout << "正在运行：TestMenu" << endl;
		DrawScene(sprites,2);
		player->OnUpdate();
		
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

