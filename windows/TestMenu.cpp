#include "TestMenu.h"

TestMenu::~TestMenu() {
	delete this;
}

void TestMenu::Display() {
	//显示菜单
	switch (buttonIndex)
	{
	case 0:
		cout << endl;
		cout << endl;
		cout << "游戏大标题" << endl;
		cout << endl;
		cout << "--> 开始游戏" << endl;
		cout << "    继续游戏" << endl;
		break;
	case 1:
		cout << endl;
		cout << endl;
		cout << "游戏大标题" << endl;
		cout << endl;
		cout << "    开始游戏" << endl;
		cout << "--> 继续游戏" << endl;
		break;
	}
}

void TestMenu::SetButton() {
	switch (GetKeyCode())
	{
	case W:buttonIndex --;
		if (buttonIndex<0) {
			buttonIndex = 1;
		}
		break;
	case S:buttonIndex ++;
		if (buttonIndex>1) {
			buttonIndex = 0;
		}
		break;
	case Space:InvokeButtonEvent();
		break;
	}
}

void TestMenu::InvokeButtonEvent() {
	switch (buttonIndex)
	{
	case 0:
		//加载下一个场景
		sceneManager->LoadLevel(new TestScene(this->sceneManager));//传递场景管理器
		break;
	case 1:
		//cout << "继续游戏" << endl;
		break;
	}
}
