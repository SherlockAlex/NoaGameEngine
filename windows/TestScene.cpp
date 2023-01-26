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

	//��������ҵĻ���򣬼����ҵ���ײ

	int px = (int)player->transform->x;
	int py = (int)player->transform->y;

	/*��취ʵ������ͼ��֮�����ײ���
	��򵥵ķ�ʽ�ǣ��������������ȶ�transform��⣬���transform�������򲻷��ؼ�����������ͷ��ؼ�����
	*/

	if (background[px][py]==0) {
		background[px][py] = 2;
	}

	//һ�������Ƕ��ͼ����ӵĽ��

	Draw(background, 10, 10);

	
	
	
}

TestScene::TestScene()
{
	
	if (player==nullptr) {
		player = new Player();
	}
}

TestScene::~TestScene()
{
}
