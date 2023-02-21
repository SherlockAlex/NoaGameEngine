#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "SceneManager.h"

void InitGame()
{
	SceneManager* sceneManager = new SceneManager();
	{
		//�û���������ע���Լ��ĳ���
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}
	sceneManager->Run();
}
