#include "InputSystem.h"

char GetKeyCode() {
	return _getch();
}

bool GetKeyDown(KeyCode key) {
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

//�¼���switch