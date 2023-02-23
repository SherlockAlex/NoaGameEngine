#ifndef NOAGAMEENGINE_SCENEMANAGER
#define NOAGAMEENGINE_SCENEMANAGER

//系统库(两个模块的头文件不能相互引用)
#include <iostream>
//#include "SDL2/SDL.h"

//自定义库
#include "Scene.h"
#include "SceneList.h"

using namespace std;

/*管理场景与场景类之间的切换事件*/
class SceneManager
{
//这里面有一个列表，用来存放场景
public:
	sceneList list;
	bool canRun = true;
	Scene * currentScene=nullptr;				//当前场景

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
	void AddLevel(Scene * level);
	void LoadLevel(int index);							//切换场景
};



#endif											// !NOAGAMEENGINE_SCENEMANAGER


