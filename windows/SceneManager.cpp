//自定义库
#include "SceneManager.h"

#include "TestScene.h"
#include "TestMenu.h"

//这些东西是基类
SceneManager::SceneManager()
{
	//currentScene = new TestMenu(this);
	new TestMenu(this);
	new TestScene(this);
}

SceneManager::~SceneManager()
{
}

void SceneManager::Run()
{
	if (!canRun) {
		return;
	}
	if (this->currentScene!=nullptr) {
		//如果当前场景不为空，就直接执行场景的入口函数,当然，这个当前场景会在初始化的时候被创建
		this->currentScene->GameMain();//这个东西要放弃
	}
	else
	{
		cout << "当前游戏没有任何内容可以执行" << endl;
	}
	
}

void SceneManager::AddLevel(Scene* level)
{
	list.appendByIndex(level->GetID(), level);
	if (currentScene == nullptr) {
		currentScene = list.at(0);
	}
}

void SceneManager::LoadLevel(int index) {
	canRun = false;
	currentScene = list.at(index);
	canRun = true;
	system("cls");
	Run();//从新执行Run
}
