//�����࣬ÿ������������������
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"
#include "GameSetting.h"
#include "Graphic.h"
//#include "SDL2/SDL.h"

class Scene {
	//�涨ÿ��Scene��Ҫ��Scene Manager
protected:
	int id;
	//��Ϸ��������Ⱦ��
	SDL_Renderer* renderer=NULL;
	//������rect
	SDL_Rect rect;

public:
	
	void GameMain();
	int GetID();			//����ִ����ں���
	virtual void Start();	//��������ʵ��
	virtual void Update(NoaEvenet _event);	//��������ʵ��
	
};

#endif							// !NOAGAMEENGINE_SCENE_H



