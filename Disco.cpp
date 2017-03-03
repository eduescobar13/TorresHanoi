#include "Disco.hpp" // Incluimos el fichero Disco.hpp con las declaracion de nuestra clase.

Disco::Disco(void): // Constructor por defecto.
    radio(0)
{}

Disco::Disco(int radio): // Constructor.
    radio(radio)
{}

Disco::~Disco(void) { // Destructor.
	radio = 0;
}

//----------------> MÉTODOS GETTER Y SETTER DE LA CLASE.

int Disco::getRadio() { // Método getter del atributo radio.
	return radio;
}

void Disco::setRadio(int radio) { // Método setter del atributo radio.
	this->radio = radio;
}