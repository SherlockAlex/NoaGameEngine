#include "Graphic.h"
#include "Application.h"

string pixe_white = "█";
string pixe_black = " ";//这个表示图像的一个像素点
string pixe_player = "@";

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

	cout << "渲染图片: " << filename << "-成功" << endl;

}

void Draw(int texture[MAXHEIGHT][MAXWIGHT], int wight, int height)
{
	//绘制图片函数
	//SetPoint();
	//SetPixel();
	for (int i = 0; i < wight; i++) {
		for (int j = 0; j < height; j++) {
			if (texture[i][j] == 1) {
				cout << pixe_white;
				//DrawPixel(RGB(255,255,255),i,j);
			}
			if (texture[i][j] == 0)
			{
				cout << pixe_black;
				//DrawPixel(RGB(0, 0, 0), i, j);
			}
			if (texture[i][j]==2) {
				cout << pixe_player;
				//DrawPixel(RGB(128, 128, 128), i, j);
			}
		}
		cout << endl;//一行结束
	}
}
