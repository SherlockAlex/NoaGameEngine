#pragma once
#ifndef _NOAGAMEENGINE_SCENE_H
#define _NOAGAMEENGINE_SCENE_H

//�û��Զ����
#include "Game.h"

class Scene
{
public:
	Scene();
	~Scene();

public:
	void Run();//ִ��currentGame��GameMain()

public:
	Game* currentGame;

private:

};

Scene::Scene()
{
}

Scene::~Scene()
{
}

#endif // !_NOAGAMEENGINE_SCENE_H


