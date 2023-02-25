objs=Application.h Application.cpp Assets.cpp Assets.h GameObject.cpp GameObject.h GameSetting.cpp GameSetting.h Graphic.h Graphic.cpp InitGame.cpp InitGame.h InputSystem.h InputSystem.cpp main.cpp NoaMath.h NoaMath.cpp Physics.cpp Physics.h Player.h Player.cpp GameScene.h Scene.cpp SceneList.cpp SceneManager.cpp Sprite.h Sprite.cpp TestMenu.h TestMenu.cpp TestScene.h TestScene.cpp Animation.h Animation.cpp

CXX=g++

INCDIRS+=/usr/include/SDL2#导入头文件

LIBDIRS+=/usr/lib#导入库文件

CFLAGS=-lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -lSDL2_net -lstdc++

BUILD_DIR=./game-build

GAME_FILE=/game

install:$(objs)
	$(CXX) $(objs) -I$(INCDIRS) -L$(LIBDIRS) $(CFLAGS) -o $(BUILD_DIR)$(GAME_FILE)
	cp Mario.png $(BUILD_DIR)
	cp Map.png $(BUILD_DIR)

env-linux:
	sudo apt-get install libsdl2-dev libsdl2-net-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev

clean:
	rm -rf $(BUILD_DIR)$(GAME_FILE)

run:
	$(BUILD_DIR)$(GAME_FILE)
