#include "Sprite.h"
#include "Graphic.h"

Sprite::Sprite(const char* filename, int w, int h)
{
	//����ͼƬת����Sprite��ʽ
	surface = IMG_Load(filename);//��ȡͼƬ
	if (!surface) {
		cout << "��ȡͼƬ:" << filename << "-ʧ��" << endl;
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
		cout << "����ͼƬ:" << filename << "-ʧ��" << endl;
		//return;
	}
}

Sprite::Sprite(const char* filename, SDL_Rect* o_rect, SDL_Rect* d_rect)
{
	//����ͼƬת����Sprite��ʽ
	surface = IMG_Load(filename);//��ȡͼƬ
	if (!surface) {
		cout << "��ȡͼƬ:" << filename << "-ʧ��" << endl;
		//return;
	}

	this->o_rect = o_rect;

	this->d_rect = d_rect;

	texture = SDL_CreateTextureFromSurface(gameRenderer, surface);
	if (!texture) {
		cout << "����ͼƬ:" << filename << "-ʧ��" << endl;
		//return;
	}
}

void SpriteList::Append(Sprite* sprites)
{
	//���ͼƬ��������
}
