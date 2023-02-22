#include "TestMenu.h"

TestMenu::TestMenu(SceneManager * _sceneManager) {
	sceneManager = _sceneManager;
	id = 0;
	sceneManager->AddLevel(this);

	if (player == nullptr) {
		player = new Player();
	}

}

TestMenu::~TestMenu() {
	delete this;
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
