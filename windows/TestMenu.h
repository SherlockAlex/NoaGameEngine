#pragma once
#ifndef NOAGAMEENGIN_TESTMENU_H
#define NOAGAMEENGIN_TESTMENU_H

/*这个是一个测试场景，用来测试游戏引擎API用的*/

#include <iostream>

#include "GameScene.h"
#include "InputSystem.h"
#include "TestScene.h"
#include "Graphic.h"

using namespace std;

class TestMenu:public Scene
{
	//他是一个初始化菜单
private:
	Player* player=nullptr;

public:						//定义初始化函数
	TestMenu(SceneManager* _sceneManager);
	~TestMenu();


public:						//定义成员方法
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
		//cout << "正在运行：TestMenu" << endl;
		
		//
		player->OnUpdate();
		//
		//这里去播放角色的动画
		if ((SDL_GetTicks()-frameStart)<16) {
			SDL_Delay(16-(SDL_GetTicks() - frameStart));
		}
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H

