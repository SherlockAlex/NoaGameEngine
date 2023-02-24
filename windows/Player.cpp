#include "Player.h"
#include "Application.h"
#include "InputSystem.h"

void Player::PlayerControl()
{
	//SetScreenTransform(GetScreenTransform()->x, GetScreenTransform()->y + 9.8*0.02*(currentTime/1000));

	while (SDL_PollEvent(gameEvent)) {
		switch (gameEvent->type)
		{

		case SDL_QUIT:
			SDL_Quit();
			run = false;
			break;
		
		case SDL_KEYDOWN:
			switch (gameEvent->key.keysym.sym)
			{
			case SDLK_RIGHT:
				transform->x = transform->x + 9;
				break;
			case SDLK_LEFT:
				transform->x = transform->x - 9;
				break;
			case SDLK_ESCAPE:
				run = false;
				SDL_Quit();
				break;
			case SDLK_d:
				transform->x = transform->x + 9;
				break;
			case SDLK_a:
				transform->x = transform->x - 9;
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
	//SetTransform((GetTransform()->x*(currentTime/1000%6)), (GetTransform()->y + 0));
	//rect.x = 256*(currentTime/1500);
	//x+=1��ʾƽ��һ�����ص�
	
	PlayerControl();			//������ҿ���

	rect.x = (int)transform->x;
	rect.y = (int)(transform->y);
	return;
	
}

Player::Player()
{
	
	fileName = PLAYER_IMG;		//�������ͼƬ
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

	cout << "��ɫ�����ɹ�" << endl;
}

Player::~Player()
{
	SDL_FreeSurface(sprite->surface);
	SDL_DestroyTexture(sprite->texture);
}
