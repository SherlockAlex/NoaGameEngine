//�����࣬ÿ������������������
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"
#include "GameSetting.h"
#include "Graphic.h"
#include "Assets.h"

class Scene {
	//�涨ÿ��Scene��Ҫ��Scene Manager
protected:
	int id;
	//��Ϸ��������Ⱦ��
	SDL_Renderer* renderer=NULL;
	//������rect
	SDL_Rect rect;

public:
	
	/*��Ϸ����������һ����Ϸ��������ڣ�����������ѡ��ͬ�ĳ��������ó�����뵽��Ӧ��������������ʵ�в�ͬ����������*/
	void GameMain();

	/*������ID��ÿ��������һ��*/
	int GetID();

	//�����ĳ�ʼ�����֣���update֮ǰ���ã���ҪΪ����update��׼����һ������ֻ����һ��
	virtual void Start();	//��������ʵ��

	/*����ʵ��Update��������Ҫÿʱÿ�̵���*/
	virtual void Update(NoaEvenet _event);	//��������ʵ��
	
};

#endif							// !NOAGAMEENGINE_SCENE_H



