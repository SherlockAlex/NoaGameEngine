#include "Application.h"
#include "GameSetting.h"
#include "SDL2/SDL.h"

void Quit(){
    run=false;
    SDL_Quit();
}