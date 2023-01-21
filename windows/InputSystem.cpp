#include "InputSystem.h"

int _getch(){
  struct termio tm old_tm;
  int ch;
  if(tcgetattr(STDIN_FILENO,&tm)<0){
    return -1;
  }
  old_tm=tm;
  cfmakeraw(&tm);
  
  if(tcsetattr(STDIN_FILENO,TCSANOW,&tm)<0){
    return -1;
  }
  
  ch = getchar();
  
  if(tcsetattr(STDIN_FILENO,TCSANOW,&old_tm)<0){
    return -1;
  }
  
  return ch;
  
}

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
