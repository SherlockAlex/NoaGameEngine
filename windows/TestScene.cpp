#include "TestScene.h"

void TestScene::BuildWorld(int world[][10], int x, int y)
{

	//构建世界

	for (int i = 0; i < x;i++) {
		for (int j = 0; j < y;j++) {
			if (world[i][j]==1) {
				cout << pixe_black;
			}
			if (world[i][j]==0)
			{
				if ((int)player->transform->x==i&&(int)player->transform->y==j) {
					cout << "W";//在这里面显示玩家
					continue;
				}
				cout <<pixe_white;
			}
		}
		cout << endl;//一行结束
	}

	//for (int i = 0; i < world->length();i++) {				//行
	//	for (int j = 0; j < world[i].length(); j++) {		//列
	//		if ((int)player->transform->x==i&&(int)player->transform->y==j) {
	//			if (world[i].at(j)!='█') {
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
	//cout << "██" << endl;
	
	/*world->append("██████████████████████████████████\n");
	world->append("██                              ██\n");
	world->append("██     ██████████████         ████\n");
	world->append("███        ███████████████████████\n");
	world->append("████             █████████████████\n");
	world->append("██                          ██████\n");
	world->append("██        █████████             ██\n");
	world->append("██                              ██\n");
	world->append("██                              ██\n");
	world->append("██        █████████   █████     ██\n");
	world->append("██                              ██\n");
	world->append("██████████████████████████████████\n");*/
	
	if (player==nullptr) {
		player = new Player();
	}
}

TestScene::~TestScene()
{
}
