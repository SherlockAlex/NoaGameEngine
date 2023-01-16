#include "Player.h"

bool Player::PlayerControl()
{
	//控制玩家移动
	

	ResetConsole();

	float dx = 0;
	float dy = 0;

	switch (GetKeyCode())
	{
		case W:
			dy=1.1f;
			break;
		case S:
			dy = -1.1f;
			break;
		case A:
			dx = -1.1f;
			break;
		case D:
			dx = 1.1f;
			break;
	}

	bx = transform->x;
	by = transform->y;

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

	if (transform->y > 23) {
		transform->y = 23;
	}
	else
	{
		if (transform->y < 1) {
			transform->y = 1;
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
	cout << "我";



	if (PlayerControl()) {

		//想办法清掉上一帧的字符
		SetCursorPos(bx, by);
		cout << " ";
		//PlayerControl();
		SetCursorPos(transform->x, transform->y);
		cout << "我";
	}

}

Player::Player()
{
	
}

Player::~Player()
{
}
