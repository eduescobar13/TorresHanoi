#pragma once // Usado para no crear conflictos entre include similares.

#include <iostream> 
#include <fstream>

#include "Varilla.hpp"

using namespace std;

class TorresHanoi { // Clase para la implementación del juego Las Torres de Hanoi.

    private: // Atributos privados de la clase.

        int numeroDiscos; // Atributo para almacenar el número de discos pasado por el usuario.
        Varilla *varillaIzquierda; // Atributos de la clase Varilla. 3 varillas fijas para cualquier número de discos.
        Varilla *varillaCentral;
        Varilla *varillaDerecha;

    public: // Métodos privados de la clase.

    	TorresHanoi(void); // Constructor por defecto.
        TorresHanoi(int numeroDiscos); // Constructor.
        ~TorresHanoi(void); // Destructor.

        void moverDisco(Varilla *varillaInicial, Varilla *varillaFinal); // Método para mover un disco de una varilla a otra.
		int resolverProblema(int debug); // Método de acceso al método principal de resolución evitando la llamada con excesivos parámetros desde el main.
		void hanoiRecursivo(int numeroDiscos, Varilla *varillaInicial, Varilla *varillaAuxiliar, Varilla *varillaFinal, int debug, int &numeroMovimientos); // Método principal que resuelve el problema de Las Torres de Hanoi.

        int getNumeroDiscos(); // Método getter del atributo numeroDiscos.
        void setNumeroDiscos(int numeroDiscos); // Método setter del atributo numeroDiscos.
        Varilla* getVarillaIzquierda(); // Método getter del atributo varillaIzquierda.
        void setVarillaIzquierda(Varilla varillaIzquierda); // Método setter del atributo Izquierda.
        Varilla* getVarillaCentral(); // Método getter del atributo varillaCentral.
        void setVarillaCentral(Varilla varillaCentral); // Método setter del atributo varillaCentral.
        Varilla* getVarillaDerecha(); // Método getter del atributo varillaDerecha.
        void setVarillaDerecha(Varilla varillaDerecha); // Método setter del atributo varillaDerecha.

};