#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "SceneManager.h"

const int width = 960;
const int height = 480;

const char* gameName = "NoaGameEngine";

SDL_Window* gameWindow = NULL;
SDL_Renderer * gameRenderer = NULL;

void InitGame()
{

	SDL_Init(SDL_INIT_EVERYTHING);//初始化

	gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_SHOWN);//全屏显示;

	gameRenderer= SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);//渲染器采用硬件加速;
	SceneManager* sceneManager = new SceneManager();
	{
		//用户在这里面注册自己的场景
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}


	sceneManager->Run();//将游戏窗口的控制权限交给sceneManager

}
