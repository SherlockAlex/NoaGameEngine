#pragma once


#ifndef NOAGAMEENGINE_TESTSCENE_H
#define NOAGAMEENGINE_TESTSCENE_H

//系统库
#include <iostream>
//自定义库
#include "Graphic.h"
#include "Scene.h"
#include "Player.h"
#include "SceneManager.h"

using namespace std;

class TestScene :public Scene
{
	//测试场景

private:

	GameObject* player = nullptr;//主角

public:
	SceneManager* sceneManager = nullptr;


public:
	TestScene(SceneManager* sceneManager);
	~TestScene();

public:
	void Start() override
	{
		//场景初始化
		//surface = sceneManager->GetSurface();
		this->renderer = gameRenderer;
		player->OnStart();
	}

	void Update(NoaEvenet event) override
	{
		cout << "HP:" << "100" << endl;
		cout << endl << "Position:" << player->GetTransform()->x << "," << player->GetTransform()->y;
		player->OnUpdate();
		
		
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H


