#include "InputSystem.h"

bool GetKeyDown(char key) {
	//if (_kbhit())
	{//Enter��Key Code��Ϊ13
		char input;
		input = _getch();
		if (input==key) {
			return true;
		}
		return false;
	}
	return false;
}