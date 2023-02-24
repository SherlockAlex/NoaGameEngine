#include "Player.h"
#include "Application.h"
#include "InputSystem.h"
#include "NoaMath.h"

void Player::PlayerControl()
{
	/*人物的行为事件*/
	//SetScreenTransform(GetScreenTransform()->x, GetScreenTransform()->y + 9.8*0.02*(currentTime/1000));
	
	while (SDL_PollEvent(gameEvent)) {
		switch (gameEvent->type)
		{
		case SDLK_ESCAPE:
		case SDL_QUIT:
			SDL_Quit();
			run = false;
			break;
		case SDL_KEYDOWN:
			switch (gameEvent->key.keysym.sym)
			{
			case SDLK_RIGHT:
				transform->x = Lerp(transform->x, (transform->x + 20));
				break;
			case SDLK_LEFT:
				//transform->x = transform->x - 9;
				transform->x = Lerp(transform->x, (transform->x - 20));
				break;
			case SDLK_ESCAPE:
				run = false;
				SDL_Quit();
				break;
			case SDLK_d:
				transform->x = Lerp(transform->x, (transform->x + 10));
				break;
			case SDLK_a:
				transform->x = Lerp(transform->x, (transform->x - 10));
				break;
			default:
				break;
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
	PlayerControl();

	rect.x = (int)round(transform->x);
	rect.y = (int)round(transform->y);
	return;
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

	cout << "角色创建成功" << endl;
}

Player::~Player()
{
	SDL_FreeSurface(sprite->surface);
	SDL_DestroyTexture(sprite->texture);
}
