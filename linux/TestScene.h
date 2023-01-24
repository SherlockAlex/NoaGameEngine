#pragma once


#ifndef NOAGAMEENGINE_TESTSCENE_H
#define NOAGAMEENGINE_TESTSCENE_H

//System
#include <iostream>
//
#include "Scene.h"
#include "Player.h"
#include "Graphic.h"

using namespace std;

class TestScene :public Scene
{

private:
	string * world=new string[14];
	GameObject * player = nullptr;

private:
	void BuildWorld(string * world);

public:
	TestScene();
	~TestScene();

public:
	void Start() override
	{

		player->OnStart();
	}

	void Update() override
	{
		
		cout << "HP:" << "100" << endl;
		BuildWorld(world);
		player->OnUpdate();
		
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H


