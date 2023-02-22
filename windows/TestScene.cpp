#include "TestScene.h"

TestScene::TestScene(SceneManager* sceneManager) {

	this->sceneManager = sceneManager;
	id = 1;//����id
	this->sceneManager->AddLevel(this);
	//sceneManager = manager;
	if (player == nullptr) {
		player = new Player();
	}

}

TestScene::~TestScene()
{
	delete this;
}
