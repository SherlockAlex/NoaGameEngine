//�����࣬ÿ������������������
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"
#include "SceneManager.h"

class Scene {
	//�涨ÿ��Scene��Ҫ��Scene Manager


public:
	SceneManager* sceneManager = nullptr;

public:

public:
	void GameMain();			//����ִ����ں���

	virtual void Start()=0;		//��������ʵ��
	virtual void Update()=0;	//��������ʵ��


};

#endif							// !NOAGAMEENGINE_SCENE_H



