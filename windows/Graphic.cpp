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

	SDL_FreeSurface(surface);
	SDL_DestroyTexture(texture);

	//��ʾ��ͼƬ���ڴ��ͷ�
	//cout << "��ȾͼƬ: " << filename << "-�ɹ�" << endl;

}

void DrawSprite(Sprite* sprite)
{

	//����Ҫ���Ż�����������

	SDL_RenderClear(gameRenderer);
	SDL_RenderCopyF(gameRenderer, sprite->texture, sprite->o_rect, sprite->d_rect);
	SDL_RenderPresent(gameRenderer);//��ʾ��Ⱦ

}

int start;

//����������ʱ�����ǰһ֡�Ļ���
void DrawScene(Sprite* sprites[])
{
	start = SDL_GetTicks();
	for (int i = 0; sprites[i]!=nullptr ;i++)
	{
		//SDL_RenderCopy(gameRenderer, sprites[0]->texture, sprites[0]->o_rect, sprites[0]->d_rect);
		SDL_RenderCopyF(gameRenderer, sprites[i]->texture, sprites[i]->o_rect, sprites[i]->d_rect);
	}
	SDL_RenderPresent(gameRenderer);
}
