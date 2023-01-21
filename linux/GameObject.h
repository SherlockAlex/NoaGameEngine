#ifndef NOAGAMEENGINE_GAMEOBJECT_H
#define NOAGAMEENGINE_GAMEOBJECT_H

#include "NoaMath.h"

class GameObject
{
public:
	Vector2 * transform=new Vector2(0,0);		//默认位置

	
	float bx = 0;				//缓存上一帧坐标
	float by = 0;

public:

	GameObject();
	~GameObject();

	//下面两个方法会执行

	virtual void OnStart() = 0;
	virtual void OnUpdate() = 0;

};

#endif

