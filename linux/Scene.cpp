#include "Scene.h"

void Scene::GameMain() {
	//在这里面执行所有物件的操作

	this->Start();
	while (1)
	{
		ResetConsole();		//刷新屏幕
		this->Update();
	}
}

void Scene::Start() {
	//执行在场景被加载时开始执行时执行
}

void Scene::Update() {
	//函数实时被调用的
}
