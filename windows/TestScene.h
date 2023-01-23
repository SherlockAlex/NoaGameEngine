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
	string world[10];
	GameObject* player = nullptr;//主角
	//char player = '我';//主角

private:
	void BuildWorld(string world[]);

public:
	TestScene();
	~TestScene();

public:
	void Start() override
	{
		//场景初始化
		
		player->OnStart();
	}

	void Update() override
	{
		//显示UI信息
		cout << "HP:" << "100" << endl;
		BuildWorld(world);
		player->OnUpdate();
		
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H


