#include "Graphic.h"
#include "Application.h"

string pixe_white = "��";
string pixe_black = " ";//�����ʾͼ���һ�����ص�
string pixe_player = "W";

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
