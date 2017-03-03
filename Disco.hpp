#pragma once // Usado para no crear conflictos entre include similares.

#include <iostream> 
#include <fstream>

using namespace std;

class Disco { // Clase para la implementación de discos de Las Torres de Hanoi.

    private: // Atributos privados de la clase.

        int radio; // Atributo para determinar el radio de los discos.

    public: // Métodos privados de la clase.

    	Disco(void); // Constructor por defecto.
        Disco(int radio); // Constructor.
        ~Disco(void); // Destructor.

        int getRadio(); // Método getter del atributo radio.
        void setRadio(int radio); // Método setter del atributo radio.
};