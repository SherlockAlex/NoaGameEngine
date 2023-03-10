#ifndef NOAGAMEENGINE_SPRITE_H
#define NOAGAMEENGINE_SPRITE_H

#include "SDL2/SDL.h"

//一个精灵类型
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
	SDL_FRect * d_rect=NULL;

public:
	//Sprite();
	//创建Sprite文件，并且要指定大小和位置
	Sprite(const char * filename,int w,int h);

	Sprite(const char* filename, SDL_Rect* o_rect, SDL_FRect * d_rect);

};


/*关于精灵的数组*/
typedef struct SpriteList {
	Sprite* sprites;
	int count;
	void Append(Sprite * sprites);

};


#endif
