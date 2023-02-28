#include "Player.h"
#include "Application.h"
#include "InputSystem.h"
#include "NoaMath.h"
#include "Physics.h"


void Player::PlayerControl()
{
	/*人物的行为事件*/
	//SetScreenTransform(GetScreenTransform()->x, GetScreenTransform()->y + 9.8*0.02*(currentTime/1000));
	
	switch (gameEvent->key.keysym.sym)
	{
	case SDLK_RIGHT:
		transform->x = Lerp(transform->x, (transform->x + 100));
		break;
	case SDLK_LEFT:
		//transform->x = transform->x - 9;
		transform->x = Lerp(transform->x, (transform->x - 100));
		break;
	case SDLK_ESCAPE:
		run = false;
		SDL_Quit();
		break;
	case SDLK_d:
		transform->x = Lerp(transform->x, (transform->x + 100));
		break;
	case SDLK_a:
		transform->x = Lerp(transform->x, (transform->x - 100));
		break;
	case SDLK_UP:
		cout << "Jump" << endl;
		break;
	}
}

int p_start;

int f_start = 0;		//从下下落开始，到下落结束所花的时间

void Player::Move()
{
	p_start = SDL_GetTicks();

	rect.x = transform->x;
	
	ApplyGrivaty(&transform->y, (transform->y < 400));
	rect.y = transform->y;

	/*if ((SDL_GetTicks() - p_start)<2) {
		SDL_Delay(2-SDL_GetTicks()+p_start);
		return;
	}*/

	
}

Player::Player()
{
	
	SetScreenTransform(20, 200);

	fileName = PLAYER_IMG;		//加载玩家图片
	w = 192;
	h = 256;

	//让x，y指向transform的x和y
	rect.x = transform->x;
	rect.y = transform->y;
	rect.w = 48;
	rect.h = 64;

	orect.x = 0;
	orect.y = 0;
	orect.w = w;
	orect.h = h;

	sprite = new Sprite(fileName,&orect,&rect);
	AddPlayerKeyboardEvent(&(Player::PlayerControl),this, 0);
	

	cout << "Init player successfuly" << endl;
}

Player::~Player()
{
	SDL_FreeSurface(sprite->surface);
	SDL_DestroyTexture(sprite->texture);
}
