//自定义库
#include "SceneManager.h"

int main() 
{
	SceneManager* sceneManager = new SceneManager();
	sceneManager->Run();

	return 0;//把程序控制权交出去
}