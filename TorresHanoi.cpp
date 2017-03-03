#include "TorresHanoi.hpp" // Incluimos el fichero TorresHanoi.hpp con las declaracion de nuestra clase.

TorresHanoi::TorresHanoi(void): // Constructor por defecto.
    numeroDiscos(0),
    varillaIzquierda(),
    varillaCentral(),
    varillaDerecha()
{}

TorresHanoi::TorresHanoi(int numeroDiscos): // Constructor.
    numeroDiscos(numeroDiscos),
    varillaIzquierda(),
    varillaCentral(),
    varillaDerecha()
{
	varillaIzquierda = new Varilla(numeroDiscos); // Inicialización de las varillas pasando el número introducido por el usuario.
	varillaCentral   = new Varilla(numeroDiscos);
	varillaDerecha   = new Varilla(numeroDiscos);
}

TorresHanoi::~TorresHanoi(void) { // Destructor.
	numeroDiscos = 0;
	varillaIzquierda->destruirVarilla();
	varillaCentral->destruirVarilla();
	varillaDerecha->destruirVarilla();
}

void TorresHanoi::resolverProblema(int debug) {
	
}

//----------------> MÉTODOS GETTER Y SETTER DE LA CLASE.

int TorresHanoi::getNumeroDiscos() { // Método getter del atributo numeroDiscos.
	return numeroDiscos;
}

void TorresHanoi::setNumeroDiscos(int numeroDiscos) { // Método setter del atributo numeroDiscos.
	this->numeroDiscos = numeroDiscos;
}