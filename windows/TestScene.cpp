#include "TestScene.h"

void TestScene::BuildWorld(int world[][10], int x, int y)
{

	//��������

	for (int i = 0; i < x;i++) {
		for (int j = 0; j < y;j++) {
			if (world[i][j]==1) {
				cout << pixe_black;
			}
			if (world[i][j]==0)
			{
				if ((int)player->transform->x==i&&(int)player->transform->y==j) {
					cout << "W";//����������ʾ���
					continue;
				}
				cout <<pixe_white;
			}
		}
		cout << endl;//һ�н���
	}

	//for (int i = 0; i < world->length();i++) {				//��
	//	for (int j = 0; j < world[i].length(); j++) {		//��
	//		if ((int)player->transform->x==i&&(int)player->transform->y==j) {
	//			if (world[i].at(j)!='��') {
	//				cout << 'W';
	//			}
	//			continue;
	//		}
	//		cout << world[i].at(j);
	//	}
	//}
	
}

TestScene::TestScene()
{
	//cout << "����" << endl;
	
	/*world->append("��������������������������������������������������������������������\n");
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
	world->append("��������������������������������������������������������������������\n");*/
	
	if (player==nullptr) {
		player = new Player();
	}
}

TestScene::~TestScene()
{
}
