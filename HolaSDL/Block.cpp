#include "Texture.h"
#include "Block.h"

using namespace std;

Block::Block(double posx, double posy, double wi, double he, int fila, int columna, int colour, Texture* textura) : 
	ArkanoidObject(posx, posy, wi, he, textura) {
	fil = fila;
	col = columna;
	color = colour;
}

void Block::render() {
	SDL_Rect rect = getRect();

	texture->renderFrame(rect, (color-1)/texture->getNumCols(), (color-1)%texture->getNumCols(), 0);
}