#include "InputSystem.h"

KeyCode Key;

bool GetKeyDown(KeyCode key) {
	//if (_kbhit())
	{//EnterÔÚKey CodeÖĞÎª13
		char input;
		input = _getch();
		if (input==key) {
			return true;
		}
		return false;
	}
	return false;
}