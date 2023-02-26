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
	SDL_RenderCopyF(gameRenderer, sprite->texture, sprite->o_rect, sprite->d_rect);
	SDL_RenderPresent(gameRenderer);//显示渲染

}

int start;

//当跳出来的时候绘制前一帧的画面
void DrawScene(Sprite* sprites[])
{
	start = SDL_GetTicks();
	for (int i = 0; sprites[i]!=nullptr ;i++)
	{
		//SDL_RenderCopy(gameRenderer, sprites[0]->texture, sprites[0]->o_rect, sprites[0]->d_rect);
		SDL_RenderCopyF(gameRenderer, sprites[i]->texture, sprites[i]->o_rect, sprites[i]->d_rect);
		if (SDL_GetTicks()-start>0) {
			//SDL_RenderPresent(gameRenderer);
			return;
		}
	}
	SDL_RenderPresent(gameRenderer);
}
