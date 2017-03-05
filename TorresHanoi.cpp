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
	// Inicialización de las varillas pasando el número introducido por el usuario como valor máximo. 
	varillaIzquierda = new Varilla(numeroDiscos, numeroDiscos); // Sólo la varilla izquierda tendrá todos los discos.
	varillaCentral   = new Varilla(numeroDiscos, 0);
	varillaDerecha   = new Varilla(numeroDiscos, 0);
}

TorresHanoi::~TorresHanoi(void) { // Destructor.
	numeroDiscos = 0;
	varillaIzquierda->destruirVarilla();
	varillaCentral->destruirVarilla();
	varillaDerecha->destruirVarilla();
}

void TorresHanoi::moverDisco(Varilla *varillaInicial, Varilla *varillaFinal) { // Método para mover un disco de una varilla a otra.
	varillaFinal->insertarDisco(varillaInicial->extraerDisco());
}

void TorresHanoi::resolverProblema(int debug) { // Método principal que resuelve el problema de Las Torres de Hanoi.
	if (getVarillaIzquierda()->getPilaVarilla().size() == 1) {
		moverDisco(getVarillaIzquierda(), getVarillaDerecha());
	}
	else {
		moverDisco(getVarillaIzquierda(), getVarillaCentral());
	}
}

//----------------> MÉTODOS GETTER Y SETTER DE LA CLASE.

int TorresHanoi::getNumeroDiscos() { // Método getter del atributo numeroDiscos.
	return numeroDiscos;
}

void TorresHanoi::setNumeroDiscos(int numeroDiscos) { // Método setter del atributo numeroDiscos.
	this->numeroDiscos = numeroDiscos;
}

Varilla* TorresHanoi::getVarillaIzquierda() { // Método getter del atributo varillaIzquierda.
	return varillaIzquierda;
}

void TorresHanoi::setVarillaIzquierda(Varilla varillaIzquierda) { // Método setter del atributo Izquierda.
	this->varillaIzquierda = &varillaIzquierda;
}

Varilla* TorresHanoi::getVarillaCentral() { // Método getter del atributo varillaCentral.
	return varillaCentral;
}

void TorresHanoi::setVarillaCentral(Varilla varillaCentral) { // Método setter del atributo varillaCentral.
	this->varillaCentral = &varillaCentral;
}
        
Varilla* TorresHanoi::getVarillaDerecha() { // Método getter del atributo varillaDerecha.
	return varillaDerecha;
}
        
void TorresHanoi::setVarillaDerecha(Varilla varillaDerecha) { // Método setter del atributo varillaDerecha.
	this->varillaDerecha = &varillaDerecha;
}
