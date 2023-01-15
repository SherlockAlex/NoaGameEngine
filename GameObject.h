#ifndef NOAGAMEENGINE_GAMEOBJECT_H
#define NOAGAMEENGINE_GAMEOBJECT_H

#include "NoaMath.h"

class GameObject
{
public:
	Vector2 * transform=nullptr;//默认位置

public:

	GameObject();
	~GameObject();

	//下面两个方法会执行

	virtual void OnStart() = 0;
	virtual void OnUpdate() = 0;

};

#endif

