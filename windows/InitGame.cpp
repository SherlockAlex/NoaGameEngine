#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "GameScene.h"
/*窗口大小*/
const int width = 960;
const int height = 480;

const char* gameName = "NoaGameEngine";

SDL_Window* gameWindow = NULL;
SDL_Renderer * gameRenderer = NULL;
bool run = true;

int Game()
{

	//初始化图形化窗口，为游戏进行准备

	if (SDL_Init(SDL_INIT_EVERYTHING)) {
		cout << "Game init failed" << endl;
		return -1;
	}
	run = true;
	gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_SHOWN);
	if (!gameWindow) {
		cout << "Create game window failed" << endl;
		return -1;
	}
	//gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_FULLSCREEN);//全屏显示;
	gameRenderer= SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_PRESENTVSYNC);//渲染器采用硬件加速;

	if (!gameRenderer) {
		cout << "Create renderer failed" << endl;
		return -1;
	}

	//关于游戏的内容
	SceneManager * sceneManager = new SceneManager();
	
	LoadScenes(sceneManager);

	sceneManager->Run();//将游戏窗口的控制权限交给sceneManager

	cout << "start to free game resource" << endl;
	//释放内存资源
	
	SDL_DestroyRenderer(gameRenderer);
	SDL_DestroyWindow(gameWindow);
	SDL_Quit();

	cout << "free game resource complect" << endl;

	return 0;

}
