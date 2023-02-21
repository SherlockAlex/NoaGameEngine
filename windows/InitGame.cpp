#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "SceneManager.h"

const int width = 480;
const int height = 270;

const char* gameName = "NoaGameEngine";

void InitGame()
{

	//游戏初始化

//	SceneManager* sceneManager = new SceneManager();
//	{
//		//用户在这里面注册自己的场景
//		new TestMenu(sceneManager);
//		new TestScene(sceneManager);
//	}
//	sceneManager->Run();

	SDL_Init(SDL_INIT_EVERYTHING);//初始化
	SDL_Window* window = NULL;
	SDL_Surface* surface = NULL;
	SDL_Renderer* render = NULL;//创建渲染器

	window = SDL_CreateWindow(gameName,200,200,width,height,SDL_WINDOW_SHOWN);
	surface = SDL_GetWindowSurface(window);

	SceneManager* sceneManager = new SceneManager();
	{
		//用户在这里面注册自己的场景
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}
	//sceneManager->SetWindow(window);
	sceneManager->SetSurface(surface);
	sceneManager->Run();//将游戏窗口的控制权限交给sceneManager


}
