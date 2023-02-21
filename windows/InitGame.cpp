#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "SceneManager.h"

void InitGame()
{
	SceneManager* sceneManager = new SceneManager();
	{
		//用户在这里面注册自己的场景
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}
	sceneManager->Run();
}
