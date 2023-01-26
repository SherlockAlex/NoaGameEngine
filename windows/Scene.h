//布景类，每个场景都是他的子类
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"
#include "SceneManager.h"

class Scene {
	//规定每个Scene都要有Scene Manager


public:
	SceneManager* sceneManager = nullptr;

public:

public:
	void GameMain();			//场景执行入口函数

	virtual void Start()=0;		//在子类中实现
	virtual void Update()=0;	//在子类中实现


};

#endif							// !NOAGAMEENGINE_SCENE_H



