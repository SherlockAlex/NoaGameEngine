//系统库
#include <iostream>

//自定义库
#include "SceneManager.h"

using namespace std;

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::Run()
{
	if (this->currentScene!=nullptr) {
		//如果当前场景不为空，就直接执行场景的入口函数,当然，这个当前场景会在初始化的时候被创建
		this->currentScene->GameMain();
	}
	else
	{
		cout << "当前游戏没有任何内容可以执行" << endl;
	}
	
}
