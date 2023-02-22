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
		//������һ������
		sceneManager->LoadLevel(1);//���ݳ���������
		break;
	case 1:
		//cout << "������Ϸ" << endl;
		break;
	}
}
