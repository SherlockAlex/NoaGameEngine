#ifndef NOAGAMEENGINE_SPRITE_H
#define NOAGAMEENGINE_SPRITE_H

#include "SDL2/SDL.h"

//һ����������
class Sprite
{
public:
	/*ͼƬ��*/
	//const char* fileName;
	SDL_Surface* surface = NULL;
	SDL_Texture* texture = NULL;
	//�ļ�ԭʼ��rect
	SDL_Rect * o_rect=NULL;
	//�ļ���ʾ��rect
	SDL_Rect * d_rect=NULL;

public:
	//Sprite();
	//����Sprite�ļ�������Ҫָ����С��λ��
	Sprite(const char * filename,int w,int h);

	Sprite(const char* filename, SDL_Rect* o_rect, SDL_Rect * d_rect);

};


/*���ھ��������*/
typedef struct SpriteList {
	Sprite* sprites;
	int count;
	void Append(Sprite * sprites);

};


#endif
