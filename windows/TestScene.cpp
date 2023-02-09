#include "TestScene.h"

void TestScene::BuildWorld(int world[][MAXWIGHT], int x, int y)
{

	//��������,�������ҵľ�����ӣ�Ȼ����Ƴ���

	

	int background[10][10];

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y;j++) {
			background[i][j] = world[i][j];//01-1��00-0
		}
	}

	//��ʾ���λ�ã�����������е���ײ��⣬��һ���ֿ����ع�

	int px = (int)player->GetScreenTransform()->x;
	int py = (int)player->GetScreenTransform()->y;

	if (background[px][py]==0) {
		background[px][py] = 2;
		//�����������ײ��Ϣ
		player->coliderInfo[0] = (background[px - 1][py] == 1 ? true : false);
		player->coliderInfo[1] = (background[px][py-1] == 1 ? true : false);
		player->coliderInfo[2] = (background[px+1][py] == 1 ? true : false);
		player->coliderInfo[3] = (background[px][py+1] == 1 ? true : false);
	}
	

	//һ�������Ƕ��ͼ����ӵĽ��

	Draw(background, 10, 10);
	
}

TestScene::TestScene() {

	//sceneManager = manager;
	if (player == nullptr) {
		player = new Player();
	}

}

TestScene::~TestScene()
{
	delete this;
}
