#include "Player.h"

bool Player::PlayerControl()
{
	//¿ØÖÆÍæ¼ÒÒÆ¶¯

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
	if (PlayerControl()) {

	}
	
	
}

Player::Player()
{
	
}

Player::~Player()
{
}
