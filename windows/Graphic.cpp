#include "Graphic.h"

string pixe_white = "��";
string pixe_black = " ";//�����ʾͼ���һ�����ص�
string pixe_player = "W";

void Draw(int texture[MAXHEIGHT][MAXWIGHT], int wight, int height)
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
			if (texture[i][j]==2) {
				cout << pixe_player;
			}
		}
		cout << endl;//һ�н���
	}
}
