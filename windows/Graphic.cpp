#include "Graphic.h"
#include "Application.h"

void DrawTexture(const char * filename,int width,int height,SDL_Rect * rect, SDL_Renderer* renderer)
{
	//º”‘ÿÕº∆¨
	SDL_Surface * surface = IMG_Load(filename);//∂¡»°Õº∆¨

	if (!surface) {
		cout << "∂¡»°Õº∆¨:" << filename << "- ß∞‹" << endl;
		return;
	}

	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	if (!texture) {
		cout << "¥¥Ω®Õº∆¨:" << filename << "- ß∞‹" << endl;
		return;
	}

	SDL_Rect s_rect;

	s_rect.x = 0;
	s_rect.y = 0;
	s_rect.w = width;
	s_rect.h = height;

	SDL_RenderClear(renderer);

	SDL_RenderCopy(renderer, texture, &s_rect, rect);

	SDL_RenderPresent(renderer);//œ‘ æ‰÷»æ

	//œ‘ æÕÍÕº∆¨∫Ûƒ⁄¥Ê Õ∑≈
	//cout << "‰÷»æÕº∆¨: " << filename << "-≥…π¶" << endl;

}

void DrawSprite(Sprite* sprite)
{

	SDL_RenderClear(gameRenderer);

	SDL_RenderCopy(gameRenderer, sprite->texture, sprite->o_rect, sprite->d_rect);

	SDL_RenderPresent(gameRenderer);//œ‘ æ‰÷»æ

}