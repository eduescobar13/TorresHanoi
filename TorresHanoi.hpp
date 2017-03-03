#pragma once // Usado para no crear conflictos entre include similares.

#include <iostream> 
#include <fstream>

using namespace std;

class TorresHanoi { // Clase para la implementación del juego Las Torres de Hanoi.

    private: // Atributos privados de la clase.

        int numeroDiscos; // Atributo para almacenar el número de discos pasado por el usuario.

    public: // Métodos privados de la clase.

    	TorresHanoi(void); // Constructor por defecto.
        TorresHanoi(int numeroDiscos); // Constructor.
        ~TorresHanoi(void); // Destructor.

        int getNumeroDiscos(); // Método getter del atributo numeroDiscos.
        void setNumeroDiscos(int numeroDiscos); // Método setter del atributo numeroDiscos.

};