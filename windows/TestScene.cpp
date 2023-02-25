#include "TestScene.h"

TestScene::TestScene(SceneManager* sceneManager):Scene(1, sceneManager,0) {

	//this->sceneManager->AddLevel(this);
	//sceneManager = manager;
	if (player == nullptr) {
		player = new Player();
	}

}

TestScene::~TestScene()
{
	delete this;
	SDL_FreeSurface(this->sprite->surface);
	SDL_DestroyTexture(this->sprite->texture);
}
