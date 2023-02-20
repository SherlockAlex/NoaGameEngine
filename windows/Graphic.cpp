#include "Graphic.h"
#include "Application.h"

string pixe_white = "█";
string pixe_black = " ";//这个表示图像的一个像素点
string pixe_player = "W";

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
