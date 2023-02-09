#include "TestScene.h"

void TestScene::BuildWorld(int world[][MAXWIGHT], int x, int y)
{

	//构建世界,世界和玩家的矩阵相加，然后绘制出来

	

	int background[10][10];

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y;j++) {
			background[i][j] = world[i][j];//01-1，00-0
		}
	}

	//显示玩家位置，检测对物体进行的碰撞检测，这一部分可以重构

	int px = (int)player->GetScreenTransform()->x;
	int py = (int)player->GetScreenTransform()->y;

	if (background[px][py]==0) {
		background[px][py] = 2;
		//更行人物的碰撞信息
		player->coliderInfo[0] = (background[px - 1][py] == 1 ? true : false);
		player->coliderInfo[1] = (background[px][py-1] == 1 ? true : false);
		player->coliderInfo[2] = (background[px+1][py] == 1 ? true : false);
		player->coliderInfo[3] = (background[px][py+1] == 1 ? true : false);
	}
	

	//一个场景是多个图像相加的结果

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
