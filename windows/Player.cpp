#include "Player.h"

bool Player::PlayerControl()
{
	//控制玩家移动

	float dx = 0;
	float dy = 0;

	switch (GetKeyCode())
	{
		case W:
			dy = 1;
			break;
		case S:
			dy = -1;
			break;
		case A:
			dx = -1;
			break;
		case D:
			dx = 1;
			break;
	}

	

	if (dx==0&&dy==0) {
		return false;
	}
	dx = dx * 1;
	dy = dy * 1;

	/*transform->x = transform->x + dx;
	transform->y = transform->y - dy;*/
	//考虑碰撞问题（检测上下左右的像素是否为空，为空才能更新，这个时候就要先获取碰撞信息）
	if (coliderInfo[0]) {
		//人物上端有碰撞，不能往上走
		if(dy>0)
			dy = 0;
	}
	if (coliderInfo[1]) {
		//人物左端有碰撞，不能往左走
		if(dx<0)
			dx = 0;
	}
	if (coliderInfo[2]) {
		//人物下端有碰撞，不能往下走
		if(dy<0)
			dy = 0;
	}
	if (coliderInfo[3]) {
		//人物右端有碰撞，不能往右走
		if(dx>0)
			dx = 0;
	}

	//SetTransform((GetTransform()->x + dx), (GetTransform()->y + dy));
	return true;
	
}

void Player::Move()
{
	//SetTransform((GetTransform()->x*(currentTime/1000%6)), (GetTransform()->y + 0));
	//rect.x = 256*(currentTime/1500);
	//x+=1表示平移一个像素点
	
	SDL_Event gameEvent;
	while (SDL_PollEvent(&gameEvent)) {
		switch (gameEvent.type)
		{
		case SDL_QUIT:
			cout << "退出游戏" << endl;
			SDL_Quit();
			break;
		case SDL_KEYDOWN:
			if (gameEvent.key.keysym.sym==SDLK_RIGHT) {
				cout << "按键:D" << endl;
				SetScreenTransform(GetScreenTransform()->x+10,GetScreenTransform()->y);
			}
			if (gameEvent.key.keysym.sym == SDLK_LEFT) {
				cout << "按键:A" << endl;
				SetScreenTransform(GetScreenTransform()->x - 10, GetScreenTransform()->y);
			}
			break;
		default:
			break;
		}
	}

	rect.x = (int)(GetScreenTransform()->x);
	rect.y = (int)(GetScreenTransform()->y);
	return;
	
}

Player::Player()
{
	
	fileName = "Mario.png";
	w = 192;
	h = 256;

	rect.x = 10;
	rect.y = 10;
	rect.w = 48;
	rect.h = 64;

	cout << "角色创建成功" << endl;
	//玩家被创建时
	//transform->x = 3;
	//transform->y = 3;
}

Player::~Player()
{
}
