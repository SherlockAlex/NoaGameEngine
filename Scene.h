//布景类，每个场景都是他的子类
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"

class Scene {
	//有一个对象链表

public:
	void GameMain();			//场景执行入口函数

	virtual void Start()=0;		//在子类中实现
	virtual void Update()=0;	//在子类中实现


};

#endif							// !NOAGAMEENGINE_SCENE_H



