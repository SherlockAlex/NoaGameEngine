#include "Player.h"

bool Player::PlayerControl()
{
	//控制玩家移动

	float dx = 0;
	float dy = 0;

	switch (GetKeyCode())
	{
		case W:
			dx=-1.0f;
			break;
		case S:
			dx = 1.0f;
			break;
		case A:
			dy = 1.0f;
			break;
		case D:
			dy = -1.0f;
			break;
	}

	

	if (dx==0&&dy==0) {
		return false;
	}

	transform->x = transform->x + dx;
	transform->y = transform->y - dy;
	return true;
	
}

void Player::Move()
{

	//SetCursorPos(transform->x, transform->y);
	//cout << this->image;

	if (PlayerControl()) {

		//玩家正在移动的代码
		//SetCursorPos(transform->x, transform->y);
	}
	
	
}

Player::Player()
{
	
}

Player::~Player()
{
}
