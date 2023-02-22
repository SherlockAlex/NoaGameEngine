#include "Player.h"

bool Player::PlayerControl()
{
	//��������ƶ�

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

	//SetTransform((GetTransform()->x + dx), (GetTransform()->y + dy));
	return true;
	
}

void Player::Move()
{
	//SetTransform((GetTransform()->x*(currentTime/1000%6)), (GetTransform()->y + 0));
	//rect.x = 256*(currentTime/1500);
	//x+=1��ʾƽ��һ�����ص�
	
	SDL_Event gameEvent;
	while (SDL_PollEvent(&gameEvent)) {
		switch (gameEvent.type)
		{
		case SDL_QUIT:
			cout << "�˳���Ϸ" << endl;
			SDL_Quit();
			break;
		case SDL_KEYDOWN:
			if (gameEvent.key.keysym.sym==SDLK_RIGHT) {
				cout << "����:D" << endl;
				SetScreenTransform(GetScreenTransform()->x+10,GetScreenTransform()->y);
			}
			if (gameEvent.key.keysym.sym == SDLK_LEFT) {
				cout << "����:A" << endl;
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

	cout << "��ɫ�����ɹ�" << endl;
	//��ұ�����ʱ
	//transform->x = 3;
	//transform->y = 3;
}

Player::~Player()
{
}
