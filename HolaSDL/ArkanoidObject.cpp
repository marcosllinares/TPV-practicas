#include "ArkanoidObject.h"

ArkanoidObject::ArkanoidObject(int posx, int posy, double w, double h, Texture* textura) :
	GameObject(), texture(textura), pos(posx, posy), width(w), height(h) {}


SDL_Rect ArkanoidObject::getRect() {
	SDL_Rect rect;
	rect.x = pos.getX();
	rect.y = pos.getY();
	rect.w = width;
	rect.h = height;
	return rect;
}

double ArkanoidObject::getX() { return pos.getX(); }
double ArkanoidObject::getY() { return pos.getY(); }
double ArkanoidObject::getW() { return width; }
double ArkanoidObject::getH() { return height; }

