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

	/*transform->x = transform->x + dx;
	transform->y = transform->y - dy;*/
	//������ײ���⣨����������ҵ������Ƿ�Ϊ�գ�Ϊ�ղ��ܸ��£����ʱ���Ҫ�Ȼ�ȡ��ײ��Ϣ��
	if (coliderInfo[0]) {
		//�����϶�����ײ������������
		if(dy>0)
			dy = 0;
	}
	if (coliderInfo[1]) {
		//�����������ײ������������
		if(dx<0)
			dx = 0;
	}
	if (coliderInfo[2]) {
		//�����¶�����ײ������������
		if(dy<0)
			dy = 0;
	}
	if (coliderInfo[3]) {
		//�����Ҷ�����ײ������������
		if(dx>0)
			dx = 0;
	}

	SetTransform((GetTransform()->x + dx), (GetTransform()->y + dy));
	return true;
	
}

void Player::Move()
{
	if (PlayerControl()) {

	}
	
	
}

Player::Player()
{
	//��ұ�����ʱ
	//transform->x = 3;
	//transform->y = 3;
}

Player::~Player()
{
}
