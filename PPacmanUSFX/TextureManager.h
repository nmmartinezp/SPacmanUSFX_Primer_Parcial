#pragma once
#include<map>
#include "Texture.h"
using namespace std;

class TextureManager
{
private:
	map<string, Texture*> mapTexturas;

	const string pathPacman = "Resources/PacMan.bmp";
	const string pathFantasma1 = "Resources/Blinky.bmp";
	const string pathFantasma2 = "Resources/Clyde.bmp";
	const string pathFantasma3 = "Resources/Inkey.bmp";
	const string pathFantasma4 = "Resources/Pinky.bmp";
	const string pathFruta = "Resources/Frutas.png";
	const string pathMoneda = "Resources/Monedas02.jpg";
	const string pathSuperMoneda = "Resources/Monedas03.jpg";
	const string pathPared = "Resources/wall.bmp";

	Texture* pacmanTexture;
	Texture* fantasma1Texture;
	Texture* fantasma2Texture;
	Texture* fantasma3Texture;
	Texture* fantasma4Texture;
	Texture* frutaTexture;
	Texture* monedaTexture;
	Texture* superMonedaTexture;
	Texture* paredTexture;
public:
	TextureManager();
	~TextureManager();

	Texture* getTexture(string _key) { return mapTexturas[_key]; }
	void addTexture(string _key, Texture* _texture);
	void free();


};

