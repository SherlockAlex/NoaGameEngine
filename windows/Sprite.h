#ifndef NOAGAMEENGINE_SPRITE_H
#define NOAGAMEENGINE_SPRITE_H

#include "SDL2/SDL.h"

class Sprite
{
public:
	/*图片名*/
	//const char* fileName;
	SDL_Surface* surface = NULL;
	SDL_Texture* texture = NULL;

	//文件原始的rect
	SDL_Rect * o_rect=NULL;
	
	//文件显示的rect
	SDL_Rect * d_rect=NULL;

public:
	//Sprite();

	//创建Sprite文件，并且要指定大小和位置
	Sprite(const char * filename,int w,int h);

	Sprite(const char* filename, SDL_Rect* o_rect, SDL_Rect * d_rect);

};

#endif
