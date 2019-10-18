//Created by Kele

#include "personaje.h"



personaje::personaje(Texture *tex, int y) {
	spt.setTexture(*tex);
	ancho = tex->getSize().x;
	alto = tex->getSize().y;
	
	this->y = y;
	
	velY = 0;
}
void Auto::subir() {
	y += -5;
}

void Auto::bajar() {
	y += 5;
}


void Auto::dibujar(RenderWindow *w) {
	spt.setPosition(y);
	w->draw(sflappy);
}

