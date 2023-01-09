#pragma once
#ifndef _NOAGAMEENGINE_SCENE_H
#define _NOAGAMEENGINE_SCENE_H

//用户自定义库
#include "Game.h"

class Scene
{
public:
	Scene();
	~Scene();

public:
	void Run();//执行currentGame的GameMain()

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


