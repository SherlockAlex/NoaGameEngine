objs=Application.h Application.cpp Assets.cpp Assets.h GameObject.cpp GameObject.h GameSetting.cpp GameSetting.h Graphic.h Graphic.cpp InitGame.cpp InitGame.h InputSystem.h InputSystem.cpp main.cpp NoaMath.h NoaMath.cpp Physics.cpp Physics.h Player.h Player.cpp Scene.h Scene.cpp SceneList.h SceneList.cpp SceneManager.h SceneManager.cpp Sprite.h Sprite.cpp TestMenu.h TestMenu.cpp TestScene.h TestScene.cpp

CXX=g++

INCDIRS+=/usr/include/SDL2

LIBDIRS+=/usr/lib

#CFLAGS=-I/usr/include/SDL2 -L/usr/lib -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -lSDL2_net -lstdc++

CFLAGS=-lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -lSDL2_net -lstdc++

GAME_NAME=game

install:$(objs)
	g++ $(objs) -I$(INCDIRS) -L$(LIBDIRS) $(CFLAGS) -o game-build/$(GAME_NAME)

env-linux:
	sudo apt-get install libsdl2-dev libsdl2-net-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev

clean:
	game
