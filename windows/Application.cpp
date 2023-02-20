#include "Application.h"

void FreshScreen() {
	COORD pos = { 0,0 };							//������Ļ���꣨0��0����ʼ
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}

void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}

void SetCursorPos(float x, float y)
{
	//ͨ�����������ù��λ��
	COORD coord;
	coord.X = (int)x;
	coord.Y = (int)y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	
}

//�Զ����������ɫ����
void SetColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void DrawPixel(COLORREF color,int x,int y) {

	//COLORREF color=RGB(255,255,255);

	//COLORREF colorRef = color;

	//hWnd = CreateWindow(TITLE_NAME, TITLE_NAME, WS_OVERLAPPEDWINDOW, 0, 0, WIN_WIDTH, WIN_HEIGHT, NULL, NULL, hInstance, NULL);

	HWND console = GetConsoleWindow();//�õ�Ҫ���ƵĴ���

	HDC hdc = GetDC(console);

	SetPixel(hdc, x, y, color);//��������
}

void ResetConsole()
{
	//���ÿ���̨
	HideCursor();
	FreshScreen();
}

void Quit()
{
	//�رճ���
	exit(0);
}

void DelaySecond()
{
}

