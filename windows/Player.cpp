#include "Player.h"

void Player::PlayerControl()
{
	SDL_Event gameEvent;
	while (SDL_PollEvent(&gameEvent)) {
		switch (gameEvent.type)
		{
		case SDL_QUIT:
			cout << "�˳���Ϸ" << endl;
			SDL_Quit();
			break;
		case SDL_KEYDOWN:
			if (gameEvent.key.keysym.sym == SDLK_RIGHT) {
				cout << "����:D" << endl;
				SetScreenTransform(GetScreenTransform()->x + 10, GetScreenTransform()->y);
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
	return;
}

void Player::Move()
{
	//SetTransform((GetTransform()->x*(currentTime/1000%6)), (GetTransform()->y + 0));
	//rect.x = 256*(currentTime/1500);
	//x+=1��ʾƽ��һ�����ص�
	
	PlayerControl();//������ҿ���

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
