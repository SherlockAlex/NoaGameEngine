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
	int world[MAXHEIGHT][MAXWIGHT] = {
		{1,1,1,1,1,1,1,1,1,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,1,1,1,1,0,0,0,0,1 },
		{1,1,1,1,1,0,0,0,0,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,0,0,0,0,0,1,1,1,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,1,1,1,1,1,1,1,1,1 },
	};//载入图片信息


	GameObject* player = nullptr;//主角

public:
	SceneManager* sceneManager = nullptr;

private:
	void BuildWorld(int world[][MAXWIGHT], int x, int y);


public:
	TestScene(SceneManager* sceneManager);
	~TestScene();

public:
	void Start() override
	{
		//场景初始化
		player->OnStart();
	}

	void Update() override
	{
		cout << "HP:" << "100" << endl;
		BuildWorld(world, 10, 10);
		cout << endl << "Position:" << player->GetTransform()->x << "," << player->GetTransform()->y;
		player->OnUpdate();
		
		
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H


