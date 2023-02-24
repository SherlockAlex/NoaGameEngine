#include "Graphic.h"
#include "Application.h"

void DrawTexture(const char * filename,int width,int height,SDL_Rect * rect, SDL_Renderer* renderer)
{
	//加载图片
	SDL_Surface * surface = IMG_Load(filename);//读取图片

	if (!surface) {
		cout << "读取图片:" << filename << "-失败" << endl;
		return;
	}

	SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
	if (!texture) {
		cout << "创建图片:" << filename << "-失败" << endl;
		return;
	}

	SDL_Rect s_rect;

	s_rect.x = 0;
	s_rect.y = 0;
	s_rect.w = width;
	s_rect.h = height;

	SDL_RenderClear(renderer);

	SDL_RenderCopy(renderer, texture, &s_rect, rect);

	SDL_RenderPresent(renderer);//显示渲染

	SDL_FreeSurface(surface);
	SDL_DestroyTexture(texture);

	//显示完图片后内存释放
	//cout << "渲染图片: " << filename << "-成功" << endl;

}

void DrawSprite(Sprite* sprite)
{

	//这里要有优化，闪屏问题

	SDL_RenderClear(gameRenderer);

	SDL_RenderCopy(gameRenderer, sprite->texture, sprite->o_rect, sprite->d_rect);

	SDL_RenderPresent(gameRenderer);//显示渲染

}

void DrawScene(Sprite* sprites[], int count)
{
	SDL_RenderClear(gameRenderer);

	//创建一个缓存，计算机先根据图层，对图像进行合并

	for (int i = 0; i < count;i++)
	{
		SDL_RenderCopy(gameRenderer, sprites[i]->texture, sprites[i]->o_rect, sprites[i]->d_rect);
		//SDL_RenderCopyEx(gameRenderer, sprites[i]->texture, sprites[i]->o_rect, sprites[i]->d_rect,NULL,NULL,SDL_FLIP_NONE);
	}
	SDL_RenderPresent(gameRenderer);
	

}
