#include "Varilla.hpp" // Incluimos el fichero Varilla.hpp con las declaracion de nuestra clase.

Varilla::Varilla(void): // Constructor por defecto.
    numeroDiscosMaximo(0),
    numeroDiscosActual(0),
    vectorVarilla()
{}

Varilla::Varilla(int tamanoVarilla): // Constructor.
    numeroDiscosMaximo(tamanoVarilla),
    numeroDiscosActual(0), // Inicialmente no habrá disco en la varilla.
    vectorVarilla()
{
	vectorVarilla.resize(numeroDiscosMaximo); // Redimensionamos el vector.
}

Varilla::~Varilla(void) { // Destructor.
	vectorVarilla.clear(); // Vaciamos el vectorVarilla.
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

vector<int> Varilla::getVectorVarilla() { // Método getter del atributo vectorVarilla.
	return vectorVarilla;
}

void Varilla::setVectorVarilla(vector<int> vectorVarilla) { // Método setter del atributo vectorVarilla.
	this->vectorVarilla = vectorVarilla;
}

