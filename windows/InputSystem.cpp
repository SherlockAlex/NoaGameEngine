#include "InputSystem.h"



char GetKeyCode() {
	return _getch();
}

bool GetKeyDown(KeyCode key) {
	{
		char input;
		input = _getch();
		if (input==key) {
			return true;
		}
		return false;
	}
	return false;
}
