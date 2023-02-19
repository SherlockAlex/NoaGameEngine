#include "Graphic.h"
#include "Application.h"

string pixe_white = "█";
string pixe_black = " ";//这个表示图像的一个像素点
string pixe_player = "W";

void Draw(int texture[MAXHEIGHT][MAXWIGHT], int wight, int height)
{
	//绘制图片函数
	//SetPoint();
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
		cout << endl;//一行结束
	}
}
