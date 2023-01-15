#pragma once

#ifndef NOAGAMEENGINE_SCENEMANAGER
#define NOAGAMEENGINE_SCENEMANAGER

#include "Scene.h"

class SceneManager
{
//这里面有一个列表，用来存放场景
public:
	Scene* currentScene = nullptr;//当前场景

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
};

#endif // !NOAGAMEENGINE_SCENEMANAGER


