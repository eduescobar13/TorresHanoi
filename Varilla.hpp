#pragma once // Usado para no crear conflictos entre include similares.

#include <iostream> 
#include <fstream>
#include <stack>

#include "Disco.hpp"

using namespace std;

class Varilla { // Clase para la implementación de varillas de Las Torres de Hanoi.

    private: // Atributos privados de la clase.

        int numeroDiscosMaximo; // Atributo para determinar el número de discos que soporta la varilla.
        int numeroDiscosActual; // Atributo para determinar el número de discos que hay actualmente en la varilla.
        stack<Disco> pilaVarilla; // Pila para implementar la varilla. Formada por objetos de la clase Disco.

    public: // Métodos privados de la clase.

    	Varilla(void); // Constructor por defecto.
        Varilla(int tamanoVarilla, int numeroDiscosInicial); // Constructor.
        ~Varilla(void); // Destructor.

        void destruirVarilla(); // Método para eliminar las varillas. Simulación de destructor permitiendo acceso.
        void insertarDisco(Disco *discoInsertar); // Método para insertar un disco en la varilla.
        Disco* extraerDisco(); // Método para extraer un disco de la varilla.

        int getNumeroDiscosMaximo(); // Método getter del atributo numeroDiscosMaximo.
        void setNumeroDiscosMaximo(int numeroDiscosMaximo); // Método setter del atributo numeroDiscosMaximo.
        int getNumeroDiscosActual(); // Método getter del atributo numeroDiscosActual.
        void setNumeroDiscosActual(int numeroDiscosActual); // Método setter del atributo numeroDiscosActual.
        stack<Disco> getPilaVarilla(); // Método getter del atributo vectorVarilla.
        void setPilaVarilla(stack<Disco> pilaVarilla); // Método setter del atributo vectorVarilla.

};
