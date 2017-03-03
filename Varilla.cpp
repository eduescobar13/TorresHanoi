#include "Varilla.hpp" // Incluimos el fichero Varilla.hpp con las declaracion de nuestra clase.

Varilla::Varilla(void): // Constructor por defecto.
    numeroDiscosMaximo(0),
    numeroDiscosActual(0),
    pilaVarilla()
{}

Varilla::Varilla(int tamanoVarilla, int numeroDiscosInicial): // Constructor.
    numeroDiscosMaximo(tamanoVarilla),
    numeroDiscosActual(numeroDiscosInicial), // Inicialmente lo ponemos al número de discos pasado por parámetro.
    pilaVarilla()
{
	Disco *disco;
	for (int i = (numeroDiscosInicial - 1); i >= 0; i--) {
		disco = new Disco(i); // Creamos un nuevo disco con el radio dado por i (nos aseguramos que se introduzcan con radios diferentes).
		insertarDisco(disco);
	} 
}

Varilla::~Varilla(void) { // Destructor.
	destruirVarilla();
}

void Varilla::destruirVarilla() { // Método para eliminar las varillas. Simulación de destructor permitiendo acceso.
	numeroDiscosMaximo = 0;
	numeroDiscosActual = 0;
}

void Varilla::insertarDisco(Disco *discoInsertar) { // Método para insertar un disco en la varilla.
	if (getPilaVarilla().size() == getNumeroDiscosMaximo()) {
		cout << "OPERACIÓN NO PERMITIDA ¡PONER EXCEPCION!" << endl;
	}
	else {
		pilaVarilla.push(*discoInsertar);
	}
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

stack<Disco> Varilla::getPilaVarilla() { // Método getter del atributo pilaVarilla.
	return pilaVarilla;
}

void Varilla::setPilaVarilla(stack<Disco> pilaVarilla) { // Método setter del atributo pilaVarilla.
	this->pilaVarilla = pilaVarilla;
}

