#ifndef NOAGAMEENGINE_GAMESCENE_H
#define NOAGAMEENGINE_GAMESCENE_H

//ϵͳ��(����ģ���ͷ�ļ������໥����)
#include <iostream>

#include "Application.h"
#include "GameSetting.h"
#include "Graphic.h"
#include "Assets.h"

#define MAXSIZE 1000

using namespace std;

class Scene;
class SceneManager;

typedef struct sceneList {
	Scene* items[MAXSIZE] = { nullptr };;

	sceneList();

	int count;//���ص�����ֵԪ�صĸ���

	void append(Scene* item);

	//void appendByIndex(int index,Scene * item);

	void removeAt(int index);

	void sortList();

	void remove(Scene* item);

	bool contain(Scene* item);

	Scene* at(int index);//����

};

class Scene {
	//�涨ÿ��Scene��Ҫ��Scene Manager
protected:
	int id;
	//��Ϸ��������Ⱦ��
	SDL_Renderer* renderer = NULL;
	//������rect
	SDL_Rect rect;

	Sprite* sprite = nullptr;

	/*һ������������Ⱦ1000��ͼ��*/
	Sprite* sprites[MAXSIZE];

	/*������sprites������*/
	int spritesCount;

	SDL_Rect orect;
	SDL_Rect drect;

public:						//�����Ա����
	SceneManager* sceneManager = nullptr;

public:

	/*��Ϸ����������һ����Ϸ��������ڣ�����������ѡ��ͬ�ĳ��������ó�����뵽��Ӧ��������������ʵ�в�ͬ����������*/
	void GameMain();

	/*������ID��ÿ��������һ��*/
	int GetID();

	//�����ĳ�ʼ�����֣���update֮ǰ���ã���ҪΪ����update��׼����һ������ֻ����һ��
	virtual void Start()=0;	//��������ʵ��

	/*����ʵ��Update��������Ҫÿʱÿ�̵���*/
	virtual void Update()=0;	//��������ʵ��

	Scene();
	Scene(int id, SceneManager* _sceneManager);
	~Scene();

};

class SceneManager
{
	//��������һ���б�������ų���
public:
	sceneList list;
	bool canRun = true;
	Scene* currentScene = nullptr;				//��ǰ����

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
	void AddLevel(Scene* level);
	void LoadLevel(int index);							//�л�����
};

#endif // !NOAGAMEENGINE_GAMESCENE_H
