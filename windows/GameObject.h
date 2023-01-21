#ifndef NOAGAMEENGINE_GAMEOBJECT_H
#define NOAGAMEENGINE_GAMEOBJECT_H

#include "NoaMath.h"

class GameObject
{
public:
	Vector2 * transform=nullptr;//Ĭ��λ��

	
	float bx = 0;				//������һ֡����
	float by = 0;

public:

	GameObject();
	~GameObject();

	//��������������ִ��

	virtual void OnStart() = 0;
	virtual void OnUpdate() = 0;

};

#endif

