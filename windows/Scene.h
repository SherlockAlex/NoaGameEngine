//�����࣬ÿ������������������
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"

class Scene {
	//�涨ÿ��Scene��Ҫ��Scene Manager
protected:
	int id;
public:
	void GameMain();
	int GetID();			//����ִ����ں���
	virtual void Start();	//��������ʵ��
	virtual void Update();	//��������ʵ��
};

#endif							// !NOAGAMEENGINE_SCENE_H



