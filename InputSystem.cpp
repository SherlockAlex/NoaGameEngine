#include "InputSystem.h"

char GetKeyCode() {
	return _getch();
}

bool GetKeyDown(KeyCode key) {
	//if (_kbhit())
	{//Enter在Key Code中为13
		char input;
		input = _getch();
		if (input==key) {
			return true;
		}
		return false;
	}
	return false;
}

//事件用switch