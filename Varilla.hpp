#pragma once // Usado para no crear conflictos entre include similares.

#include <iostream> 
#include <fstream>
#include <vector>

using namespace std;

class Varilla { // Clase para la implementación de varillas de Las Torres de Hanoi.

    private: // Atributos privados de la clase.

        int numeroDiscosMaximo; // Atributo para determinar el número de discos que soporta la varilla.
        int numeroDiscosActual; // Atributo para determinar el número de discos que hay actualmente en la varilla.
        vector<int> vectorVarilla; // Vector que hará de varilla.

    public: // Métodos privados de la clase.

    	Varilla(void); // Constructor por defecto.
        Varilla(int numeroDiscos); // Constructor.
        ~Varilla(void); // Destructor.

        int getNumeroDiscosMaximo(); // Método getter del atributo numeroDiscosMaximo.
        void setNumeroDiscosMaximo(int numeroDiscosMaximo); // Método setter del atributo numeroDiscosMaximo.
        int getNumeroDiscosActual(); // Método getter del atributo numeroDiscosActual.
        void setNumeroDiscosActual(int numeroDiscosActual); // Método setter del atributo numeroDiscosActual.
        vector<int> getVectorVarilla(); // Método getter del atributo vectorVarilla.
        void setVectorVarilla(vector<int> vectorVarilla); // Método setter del atributo vectorVarilla.

};
