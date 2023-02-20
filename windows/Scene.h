//布景类，每个场景都是他的子类
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"

class Scene {
	//规定每个Scene都要有Scene Manager
protected:
	int id;
public:
	void GameMain();
	int GetID();			//场景执行入口函数
	virtual void Start();	//在子类中实现
	virtual void Update();	//在子类中实现
};

#endif							// !NOAGAMEENGINE_SCENE_H



