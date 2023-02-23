#include "Player.h"
#include "Application.h"
#include "InputSystem.h"

void Player::PlayerControl()
{
	//SetScreenTransform(GetScreenTransform()->x, GetScreenTransform()->y + 9.8*0.02*(currentTime/1000));

	SDL_Event gameEvent;
	while (SDL_PollEvent(&gameEvent)) {
		switch (gameEvent.type)
		{
		case SDL_QUIT:
			cout << "退出游戏" << endl;
			SDL_Quit();
			run = false;
			break;
		case SDL_KEYDOWN:
			if (gameEvent.key.keysym.sym == SDLK_RIGHT) {
				cout << "按键:->" << endl;
				SetScreenTransform(GetScreenTransform()->x + 12, GetScreenTransform()->y);
			}
			if (gameEvent.key.keysym.sym == SDLK_LEFT) {
				cout << "按键:<-" << endl;
				SetScreenTransform(GetScreenTransform()->x - 12, GetScreenTransform()->y);
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
	
	PlayerControl();			//调用玩家控制

	rect.x = (int)(GetScreenTransform()->x);
	rect.y = (int)(GetScreenTransform()->y);
	return;
	
}

Player::Player()
{
	
	fileName = PLAYER_IMG;		//加载玩家图片
	w = 192;
	h = 256;

	rect.x = 10;
	rect.y = 10;
	rect.w = 48;
	rect.h = 64;

	orect.x = 0;
	orect.y = 0;
	orect.w = w;
	orect.h = h;

	sprite = new Sprite(fileName,&orect,&rect);

	cout << "角色创建成功" << endl;
}

Player::~Player()
{
	SDL_FreeSurface(sprite->surface);
	SDL_DestroyTexture(sprite->texture);
}
