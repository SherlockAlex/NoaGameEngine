//ϵͳ��
#include <iostream>
#include<windows.h>
//�Զ����
#include "GameMenu.h"
#include "Screen.h"

using namespace std;

int main(void)
{
    MainMenu mainMenu;
    while (true)
    //for(int i=0;i<100;i++)
    {
        //��Ϸ����Ҫ���в���

        GotoXY(0, 0);//ˢ����Ļ
        
        //�����������ʱ��
        cout << "Name of New Game" << endl;
        mainMenu.GameMain();
    }

    return 0;
}