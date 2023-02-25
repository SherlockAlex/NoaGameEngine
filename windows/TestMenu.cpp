#include "TestMenu.h"

TestMenu::TestMenu(SceneManager * _sceneManager):Scene(0,_sceneManager) {
	

	orect.x = 0;
	orect.y = 0;
	orect.w = 1920;
	orect.h = 1080;

	drect.x = 0;
	drect.y = 0;
	drect.w = 1920;
	drect.h = 1080;

	sprite = new Sprite(MAP_IMG,&orect,&drect);


	

	if (player == nullptr) {
		player = new Player();
	}

	sprites[0] = sprite;
	sprites[1] = player->GetSprite();

	//DrawScene(sprites, 2);

	//DrawSprite(sprite);

}

TestMenu::~TestMenu(){
	delete this;
	SDL_FreeSurface(this->sprite->surface);
	SDL_DestroyTexture(this->sprite->texture);
}

void TestMenu::InvokeButtonEvent() {
	
}
