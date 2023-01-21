#include "Player.h"

bool Player::PlayerControl()
{
	//控制玩家移动

	float dx = 0;
	float dy = 0;

	switch (GetKeyCode())
	{
		case W:
			dy=1.0f;
			break;
		case S:
			dy = -1.0f;
			break;
		case A:
			dx = -1.0f;
			break;
		case D:
			dx = 1.0f;
			break;
	}

	

	if (dx==0&&dy==0) {
		return false;
	}

	transform->x = transform->x + dx;
	if (transform->x>47) {
		transform->x = 47;
	}
	else
	{
		if (transform->x < 1) {
			transform->x = 1;
		}
	}
	transform->y = transform->y - dy;

	if (transform->y > 24) {
		transform->y = 24;
	}
	else
	{
		if (transform->y < 2) {
			transform->y = 2;
		}
	}

	

	return true;
	
}

void Player::Move()
{
	//显示玩家的移动,利用屏幕坐标来显示玩家移动
	//首先知道玩家可以活动的范围
	//x:(1,24)
	//y:(1,49)
	//获取玩家当前的屏幕位置

	//首先光标定位到玩家位置，然后打印字符

	SetCursorPos(transform->x, transform->y);
	cout << "O";

	if (PlayerControl()) {

		//玩家正在移动的代码
		SetCursorPos(transform->x, transform->y);
	}
	
	
}

Player::Player()
{
	
}

Player::~Player()
{
}
