#include "TestScene.h"

void TestScene::BuildWorld(string world[])
{

	//��������
	

	for (int i = 0; i < world->length();i++) {
		cout << world[i] << endl;						//��ӡ����
		
	}
	cout << endl;
	
}

TestScene::TestScene()
{
	//cout << "����" << endl;
	world->append("��������������������������������������������������������������������\n");
	world->append("����                              ����\n");
	world->append("����     ����������������������������         ��������\n");
	world->append("������        ����������������������������������������������\n");
	world->append("��������             ����������������������������������\n");
	world->append("����                          ������������\n");
	world->append("����        ������������������             ����\n");
	world->append("����                              ����\n");
	world->append("����                              ����\n");
	world->append("����        ������������������   ����������     ����\n");
	world->append("����                              ����\n");
	world->append("��������������������������������������������������������������������\n");
	if (player==nullptr) {
		player = new Player();
	}
}

TestScene::~TestScene()
{
}
