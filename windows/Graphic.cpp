#include "Graphic.h"
#include "Application.h"

void DrawTexture(const char * filename,int width,int height,SDL_Rect * rect, SDL_Renderer* renderer)
{
	//����ͼƬ
	SDL_Surface * surface = IMG_Load(filename);//��ȡͼƬ

	if (!surface) {
		cout << "��ȡͼƬ:" << filename << "-ʧ��" << endl;
		return;
	}

	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	if (!texture) {
		cout << "����ͼƬ:" << filename << "-ʧ��" << endl;
		return;
	}

	SDL_Rect s_rect;

	s_rect.x = 0;
	s_rect.y = 0;
	s_rect.w = width;
	s_rect.h = height;

	SDL_RenderClear(renderer);

	SDL_RenderCopy(renderer, texture, &s_rect, rect);

	SDL_RenderPresent(renderer);//��ʾ��Ⱦ

	//��ʾ��ͼƬ���ڴ��ͷ�
	//cout << "��ȾͼƬ: " << filename << "-�ɹ�" << endl;

}

void DrawSprite(Sprite* sprite)
{

	//����Ҫ���Ż�����������

	SDL_RenderClear(gameRenderer);

	SDL_RenderCopy(gameRenderer, sprite->texture, sprite->o_rect, sprite->d_rect);

	SDL_RenderPresent(gameRenderer);//��ʾ��Ⱦ

}

void DrawScene(Sprite* sprites[], int count)
{
	SDL_RenderClear(gameRenderer);

	//����һ�����棬������ȸ���ͼ�㣬��ͼ����кϲ�

	for (int i = 0; i < count;i++)
	{
		
		SDL_RenderCopy(gameRenderer, sprites[i]->texture, sprites[i]->o_rect, sprites[i]->d_rect);
		
		//SDL_RenderCopyEx(gameRenderer, sprites[i]->texture, sprites[i]->o_rect, sprites[i]->d_rect,NULL,NULL,SDL_FLIP_NONE);
	}
	SDL_RenderPresent(gameRenderer);
	

}
