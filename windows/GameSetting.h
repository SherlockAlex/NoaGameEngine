#ifndef NOAGAMEENGINE_GAMESETTING_H
#define NOAGAMEENGINE_GAMESETTING_H
//������Ϸ��һЩ������������

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

#include "GameScene.h"

typedef SDL_Event * NoaEvent;

//��Ϸ�Ƿ�������
extern bool run;

//��Ϸ�����������ʱ��
extern int startTime;
extern const char* gameName;
extern unsigned int frameStart;
extern float deltaTime;

/*
* �����Ϸ����Ҫ��������
* ��������Ҫ��GameSetting.cpp��LoadScenes()����������Լ���Ϸ�Ĺؿ�
* �����������Game()��������ڳ����е���
* �������������Ϊ���Զ�����Ϸ�������б�ֻҪ����Ϸ�ĳ������ͱ���Ҫ�ڿ����׶�������б�ע���Լ�����ʹ�õ��ĳ���
*/
extern void LoadScenes(SceneManager * sceneManager);

#endif

