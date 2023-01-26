#include "TestMenu.h"

TestMenu::TestMenu(SceneManager * _sceneManager) {
	sceneManager = _sceneManager;
}

TestMenu::~TestMenu() {
	delete this;
}

void TestMenu::Display() {
	//��ʾ�˵�
	switch (buttonIndex)
	{
	case 0:
		cout << endl;
		cout << endl;
		cout << "��Ϸ�����" << endl;
		cout << endl;
		cout << "--> ��ʼ��Ϸ" << endl;
		cout << "    ������Ϸ" << endl;
		break;
	case 1:
		cout << endl;
		cout << endl;
		cout << "��Ϸ�����" << endl;
		cout << endl;
		cout << "    ��ʼ��Ϸ" << endl;
		cout << "--> ������Ϸ" << endl;
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
		//������һ������
		sceneManager->LoadLevel(new TestScene());//���ݳ���������
		break;
	case 1:
		//cout << "������Ϸ" << endl;
		break;
	}
}
