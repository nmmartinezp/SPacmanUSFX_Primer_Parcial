#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>

#include <SDL.h>
#include <SDL_image.h>
#include <windows.h>

#include "Pacman.h"
#include "Pacman2.h"
#include "Fantasma.h"
#include "Bomberman.h"
#include "Fruta.h"
#include "Moneda.h"
#include "Texture.h"
#include "MapGenerator.h"
#include "TileGraph.h"
#include "TextureManager.h"

using namespace std;


//Screen dimension constants
const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

class GameManager
{
private:
    bool juego_en_ejecucion;
    int time_creator;

    //The window we'll be rendering to
    SDL_Window* gWindow;

    //The window renderer
    SDL_Renderer* gRenderer;
   
    vector<GameObject*> actoresJuego;
    MapGenerator* generadorNivelJuego;
    TextureManager* textureManager;
public:
    GameManager();
    int onExecute();
    bool onInit();
    void onEvent(SDL_Event* Event);
    void onLoop();
    void onRender();
    void onCleanup();
};

    