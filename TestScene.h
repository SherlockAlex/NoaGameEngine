#pragma once


#ifndef NOAGAMEENGINE_TESTSCENE_H
#define NOAGAMEENGINE_TESTSCENE_H

//系统库
#include <iostream>
//自定义库
#include "Scene.h"
#include "Player.h"

using namespace std;

class TestScene :public Scene
{
	//测试场景

private:
	char world[25][50];
	GameObject* player = nullptr;//主角
	//char player = '我';//主角

private:
	void BuildWorld(char world[][50]);

public:
	TestScene();
	~TestScene();

public:
	void Start() override
	{
		//场景初始化
		BuildWorld(world);
		player->OnStart();
	}

	void Update() override
	{
		player->OnUpdate();
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H


