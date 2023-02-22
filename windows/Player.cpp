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

	SetTransform((GetTransform()->x + dx), (GetTransform()->y + dy));
	return true;
	
}

void Player::Move()
{
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
