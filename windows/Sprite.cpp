#include "Sprite.h"
#include "Graphic.h"

Sprite::Sprite(const char* filename, int w, int h)
{
	//加载图片转化成Sprite格式
	surface = IMG_Load(filename);//读取图片
	if (!surface) {
		cout << "读取图片:" << filename << "-失败" << endl;
		//return;
	}

	if (this->o_rect==NULL) {

		SDL_Rect o;

		o.x = 0;
		o.y = 0;
		o.w = w;
		o.h = h;

		o_rect = &o;

	}

	if (this->d_rect == NULL) {

		SDL_Rect d;

		d.x = 0;
		d.y = 0;
		d.w = w;
		d.h = h;

		d_rect = &d;

	}

	texture = SDL_CreateTextureFromSurface(gameRenderer, surface);
	if (!texture) {
		cout << "创建图片:" << filename << "-失败" << endl;
		//return;
	}
}

Sprite::Sprite(const char* filename, SDL_Rect* o_rect, SDL_Rect* d_rect)
{
	//加载图片转化成Sprite格式
	surface = IMG_Load(filename);//读取图片
	if (!surface) {
		cout << "读取图片:" << filename << "-失败" << endl;
		//return;
	}

	this->o_rect = o_rect;

	this->d_rect = d_rect;

	texture = SDL_CreateTextureFromSurface(gameRenderer, surface);
	if (!texture) {
		cout << "创建图片:" << filename << "-失败" << endl;
		//return;
	}
}
