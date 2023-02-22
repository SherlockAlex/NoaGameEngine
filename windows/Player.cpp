#include "Player.h"

void Player::PlayerControl()
{
	SDL_Event gameEvent;
	while (SDL_PollEvent(&gameEvent)) {
		switch (gameEvent.type)
		{
		case SDL_QUIT:
			cout << "退出游戏" << endl;
			SDL_Quit();
			break;
		case SDL_KEYDOWN:
			if (gameEvent.key.keysym.sym == SDLK_RIGHT) {
				cout << "按键:D" << endl;
				SetScreenTransform(GetScreenTransform()->x + 10, GetScreenTransform()->y);
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
	return;
}

void Player::Move()
{
	//SetTransform((GetTransform()->x*(currentTime/1000%6)), (GetTransform()->y + 0));
	//rect.x = 256*(currentTime/1500);
	//x+=1表示平移一个像素点
	
	PlayerControl();//调用玩家控制

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
