#include "Graphic.h"

string pixe_white = "��";
string pixe_black = " ";//�����ʾͼ���һ�����ص�

void Draw(int texture[MAXHWIGHT][MAXHEIGHT], int wight, int height)
{

	for (int i = 0; i < wight; i++) {
		for (int j = 0; j < height; j++) {
			if (texture[i][j] == 1) {
				cout << pixe_white;
			}
			if (texture[i][j] == 0)
			{
				cout << pixe_black;
			}
		}
		cout << endl;//һ�н���
	}
}
