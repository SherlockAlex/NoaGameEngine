#include "Player.h"

bool Player::PlayerControl()
{
	//��������ƶ�

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
	//��ʾ��ҵ��ƶ�,������Ļ��������ʾ����ƶ�
	//����֪����ҿ��Ի�ķ�Χ
	//x:(1,24)
	//y:(1,49)
	//��ȡ��ҵ�ǰ����Ļλ��

	//���ȹ�궨λ�����λ�ã�Ȼ���ӡ�ַ�

	SetCursorPos(transform->x, transform->y);
	cout << "O";

	if (PlayerControl()) {

		//��������ƶ��Ĵ���
		SetCursorPos(transform->x, transform->y);
	}
	
	
}

Player::Player()
{
	
}

Player::~Player()
{
}