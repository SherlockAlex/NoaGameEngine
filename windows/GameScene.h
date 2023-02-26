#ifndef NOAGAMEENGINE_GAMESCENE_H
#define NOAGAMEENGINE_GAMESCENE_H

//系统库(两个模块的头文件不能相互引用)
#include <iostream>

#include "Graphic.h"
#include "Assets.h"

#define MAXSIZE 1000

using namespace std;

class Scene;
class SceneManager;

typedef struct sceneList {
	Scene* items[MAXSIZE] = { nullptr };;

	sceneList();

	int count;//返回的是数值元素的个数

	void append(Scene* item);

	//void appendByIndex(int index,Scene * item);

	void removeAt(int index);

	void sortList();

	void remove(Scene* item);

	bool contain(Scene* item);

	Scene* at(int index);//查找

};

class Scene {
	//规定每个Scene都要有Scene Manager
protected:
	int id;
	//游戏场景的渲染器
	SDL_Renderer* renderer = NULL;
	//场景的rect
	SDL_Rect rect;

	Sprite* sprite = nullptr;

	/*一个场景可以渲染1000张图像*/
	Sprite* sprites[MAXSIZE];

	/*场景中sprites的数量*/
	int spritesCount;

	SDL_Rect orect;
	SDL_FRect drect;

public:						//定义成员属性
	SceneManager* sceneManager = nullptr;

public:

	/*游戏的主函数，一个游戏场景的入口，场景管理器选择不同的场景，并让程序进入到对应场景的主函数，实行不同场景的内容*/
	void GameMain();

	/*场景的ID，每个场景独一份*/
	int GetID();

	//场景的初始化部分，在update之前调用，主要为进入update做准备，一个程序只调用一次
	virtual void Start()=0;	//在子类中实现

	/*子类实现Update方法，需要每时每刻调用*/
	virtual void Update()=0;	//在子类中实现

	Scene();
	Scene(int id, SceneManager* _sceneManager);
	~Scene();

};

class SceneManager
{
	//这里面有一个列表，用来存放场景
public:
	sceneList list;
	bool canRun = true;
	Scene* currentScene = nullptr;				//当前场景

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
	void AddLevel(Scene* level);
	void LoadLevel(int index);							//切换场景
};

#endif // !NOAGAMEENGINE_GAMESCENE_H
