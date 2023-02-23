#include "TestMenu.h"

TestMenu::TestMenu(SceneManager * _sceneManager) {
	sceneManager = _sceneManager;
	id = 0;

	orect.x = 0;
	orect.y = 0;
	orect.w = 1920;
	orect.h = 1080;

	drect.x = 0;
	drect.y = 0;
	drect.w = 1920;
	drect.h = 1080;

	sprite = new Sprite(MAP_IMG,&orect,&drect);


	sceneManager->AddLevel(this);

	if (player == nullptr) {
		player = new Player();
	}

	sprites[0] = sprite;
	sprites[1] = player->GetSprite();

	DrawScene(sprites, 2);

	//DrawSprite(sprite);

}

TestMenu::~TestMenu() {
	delete this;
	SDL_FreeSurface(this->sprite->surface);
	SDL_DestroyTexture(this->sprite->texture);
}

void TestMenu::InvokeButtonEvent() {
	switch (buttonIndex)
	{
	case 0:
		//加载下一个场景
		sceneManager->LoadLevel(1);//传递场景管理器
		break;
	case 1:
		//cout << "继续游戏" << endl;
		break;
	}
}
