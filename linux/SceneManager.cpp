//�Զ����
#include "SceneManager.h"
#include "TestScene.h"

SceneManager::SceneManager()
{
	currentScene = new TestScene();
}

SceneManager::~SceneManager()
{
}

void SceneManager::Run()
{
	if (this->currentScene!=nullptr) {
		
		this->currentScene->GameMain();
	}
	else
	{
		cout << "No scene to run the game!" << endl;
	}
	
}
