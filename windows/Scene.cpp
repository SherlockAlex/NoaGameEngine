#include "Scene.h"

unsigned int currentTime = 0;
float deltaTime = 0;

void Scene::GameMain() {
	//在这里面执行所有物件的操作

	int oldTime = 0;
	this->Start();
	while (run)
	{

		SDL_Event _event;

		currentTime = SDL_GetTicks();
		deltaTime = (currentTime - oldTime)/1000.0;
		oldTime = currentTime;
		cout << "DeltaTime= " << deltaTime << endl;
		//事件循环
		//绘制场景信息
		//ResetConsole();		//刷新屏幕
		while (SDL_PollEvent(&_event)) {
			switch (_event.type)
			{
			case SDL_QUIT:
				
				cout << "Quit Game"<<endl;
				SDL_Quit();
				run = false;
				break;
			default:
				
				break;
			}
		}
		//主循环内容
		this->Update(&_event);
	}

}

int Scene::GetID()
{
	return id;
}

void Scene::Start() {
	//执行在场景被加载时开始执行时执行
	//this->renderer = gameRenderer;
}

void Scene::Update(NoaEvenet _event) {
	//函数实时被调用的
}
