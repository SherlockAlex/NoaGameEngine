#pragma once

#ifndef NOAGAMEENGINE_SCENEMANAGER
#define NOAGAMEENGINE_SCENEMANAGER

//系统库
#include <iostream>

//自定义库
#include "Scene.h"

using namespace std;

class SceneManager
{
//这里面有一个列表，用来存放场景
public:
	bool canRun = true;
	Scene* currentScene = nullptr;				//当前场景

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
	void LoadLevel(Scene * nextScene);							//切换场景
};



#endif											// !NOAGAMEENGINE_SCENEMANAGER


