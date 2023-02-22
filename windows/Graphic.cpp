#include "Graphic.h"
#include "Application.h"

string pixe_white = "��";
string pixe_black = " ";//�����ʾͼ���һ�����ص�
string pixe_player = "@";

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

	cout << "��ȾͼƬ: " << filename << "-�ɹ�" << endl;

}

void Draw(int texture[MAXHEIGHT][MAXWIGHT], int wight, int height)
{
	//����ͼƬ����
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
		cout << endl;//һ�н���
	}
}
