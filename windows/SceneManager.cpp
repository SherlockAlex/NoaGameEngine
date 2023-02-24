//自定义库
#include "GameScene.h"

//这些东西是基类
SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::Run()
{
	//运行游戏
	if (!canRun) {
		return;
	}
	if (this->currentScene==nullptr) {
		//如果当前场景不为空，就直接执行场景的入口函数,当然，这个当前场景会在初始化的时候被创建
		cout << "There is noting to run" << endl;
	}
	this->currentScene->GameMain();//这个东西要放弃
	
}

void SceneManager::AddLevel(Scene* level)
{
	list.append(level);
	if (currentScene == nullptr) {
		currentScene = list.at(0);
	}
}

void SceneManager::LoadLevel(int index) {

	cout << "正在加载场景: " << index << endl;
	canRun = false;
	currentScene = list.at(index);
	canRun = true;
	cout << "场景: " << index << "加载完成" << endl;
	Run();//从新执行Run
}
