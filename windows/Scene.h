//�����࣬ÿ������������������
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"
#include "SDL2/SDL.h"

class Scene {
	//�涨ÿ��Scene��Ҫ��Scene Manager
protected:
	int id;
	SDL_Surface * surface = NULL;//��ȡ��ǰ��Ϸ�Ĵ��ڣ��Ա��ȡ���ƴ���
	SDL_Renderer* renderer = NULL;
public:
	
	void GameMain();
	int GetID();			//����ִ����ں���
	virtual void Start();	//��������ʵ��
	virtual void Update();	//��������ʵ��
};

#endif							// !NOAGAMEENGINE_SCENE_H



