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

void InitGame()
{

	//初始化图形化窗口，为游戏进行准备
	SDL_Init(SDL_INIT_EVERYTHING);//初始化
	run = true;
	gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_SHOWN);//全屏显示;
	gameRenderer= SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);//渲染器采用硬件加速;


	//关于游戏的内容
	SceneManager* sceneManager = new SceneManager();
	{
		//用户在这里面注册自己的场景
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}

	sceneManager->Run();//将游戏窗口的控制权限交给sceneManager

	//释放内存资源
	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

	cout << "释放游戏资源" << endl;

	return;

}
