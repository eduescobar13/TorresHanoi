#include "TorresHanoi.hpp" // Incluimos el fichero TorresHanoi.hpp con las declaracion de nuestra clase.

TorresHanoi::TorresHanoi(void): // Constructor por defecto.
    numeroDiscos(0)
{}

TorresHanoi::TorresHanoi(int numeroDiscos): // Constructor.
    numeroDiscos(numeroDiscos),
{}

TorresHanoi::~TorresHanoi(void) { // Destructor.
	numeroDiscos = 0;
}

//----------------> MÉTODOS GETTER Y SETTER DE LA CLASE.

int TorresHanoi::getNumeroDiscos() { // Método getter del atributo numeroDiscos.
	return numeroDiscos;
}

void TorresHanoi::setNumeroDiscosMaximo(int numeroDiscos) { // Método setter del atributo numeroDiscos.
	this->numeroDiscos = numeroDiscos;
}