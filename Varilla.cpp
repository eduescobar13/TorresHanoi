#include "Varilla.hpp" // Incluimos el fichero Varilla.hpp con las declaracion de nuestra clase.

Varilla::Varilla(void): // Constructor por defecto.
    numeroDiscosMaximo(0),
    numeroDiscosActual(0),
    pilaVarilla()
{}

Varilla::Varilla(int tamanoVarilla): // Constructor.
    numeroDiscosMaximo(tamanoVarilla),
    numeroDiscosActual(), // Inicialmente no habrá disco en la varilla.
    pilaVarilla()
{}

Varilla::~Varilla(void) { // Destructor.
	destruirVarilla();
}

void Varilla::destruirVarilla() { // Método para eliminar las varillas. Simulación de destructor permitiendo acceso.
	numeroDiscosMaximo = 0;
	numeroDiscosActual = 0;
}

//----------------> MÉTODOS GETTER Y SETTER DE LA CLASE.

int Varilla::getNumeroDiscosMaximo() { // Método getter del atributo numeroDiscosMaximo.
	return numeroDiscosMaximo;
}

void Varilla::setNumeroDiscosMaximo(int numeroDiscosMaximo) { // Método setter del atributo numeroDiscosMaximo.
	this->numeroDiscosMaximo = numeroDiscosMaximo;
}

int Varilla::getNumeroDiscosActual() { // Método getter del atributo numeroDiscosActual.
	return numeroDiscosActual;
}

void Varilla::setNumeroDiscosActual(int numeroDiscosActual) { // Método setter del atributo numeroDiscosActual.
	this->numeroDiscosActual = numeroDiscosActual;
}

stack<int> Varilla::getPilaVarilla() { // Método getter del atributo pilaVarilla.
	return pilaVarilla;
}

void Varilla::setPilaVarilla(stack<int> pilaVarilla) { // Método setter del atributo pilaVarilla.
	this->pilaVarilla = pilaVarilla;
}

