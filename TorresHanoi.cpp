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
	varillaIzquierda = new Varilla("VARILLA IZQUIERDA", numeroDiscos, numeroDiscos); // Sólo la varilla izquierda tendrá todos los discos.
	varillaCentral   = new Varilla("VARILLA CENTRAL", numeroDiscos, 0);
	varillaDerecha   = new Varilla("VARILLA DERECHA", numeroDiscos, 0);
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

int TorresHanoi::resolverProblema(int debug) { // Método de acceso al método principal de resolución evitando la llamada con excesivos parámetros desde el main.
	int variableRetorno = 0;
	hanoiRecursivo(this->getNumeroDiscos(), this->getVarillaIzquierda(), this->getVarillaCentral(), this->getVarillaDerecha(), debug, variableRetorno);
	return variableRetorno;
}

void TorresHanoi::hanoiRecursivo(int numeroDiscos, Varilla *varillaInicial, Varilla *varillaAuxiliar, Varilla *varillaFinal, int debug, int &numeroMovimientos) { // Método principal que resuelve el problema de Las Torres de Hanoi.
	if (numeroDiscos == 1) {
		if (debug == 1) {
			cout << "--------------- SIGUIENTE PASO ---------------" << endl;
			cout << "VARILLA IZQUIERDA: " << varillaInicial->getPilaVarilla().size() << " discos" << endl;
			cout << "VARILLA CENTRAL: " << varillaAuxiliar->getPilaVarilla().size() << " discos" << endl;
			cout << "VARILLA DERECHA: " << varillaFinal->getPilaVarilla().size() << " discos" << endl;
			cout << "Pulse ENTER para continuar ";
			getchar();
		}	
		moverDisco(varillaInicial, varillaFinal);
		numeroMovimientos++;
	}
	else {
		hanoiRecursivo((numeroDiscos - 1), varillaInicial, varillaFinal, varillaAuxiliar, debug, numeroMovimientos);
		if (debug == 1) {
			cout << "--------------- SIGUIENTE PASO ---------------" << endl;
			cout << "VARILLA IZQUIERDA: " << varillaInicial->getPilaVarilla().size() << " discos" << endl;
			cout << "VARILLA CENTRAL: " << varillaAuxiliar->getPilaVarilla().size() << " discos" << endl;
			cout << "VARILLA DERECHA: " << varillaFinal->getPilaVarilla().size() << " discos" << endl;
			cout << "Pulse ENTER para continuar ";
			getchar();
        }
		moverDisco(varillaInicial, varillaFinal);
		numeroMovimientos++;
        hanoiRecursivo((numeroDiscos - 1), varillaAuxiliar, varillaInicial, varillaFinal, debug, numeroMovimientos);
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
