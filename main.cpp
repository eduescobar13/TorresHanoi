//|-----------------------------------------------------------------------|
//| Autor       : EDUARDO ESCOBAR ALBERTO                                 |
//| Versión     : 07/03/2017                                              |
//| Comentarios : Diseño y Análisis de Algoritmos                         |
//|               Escuela Superior de Ingeniería y Tecnología             |
//|               Universidad de La Laguna                                |  
//|                                                                       |
//| Compilación : g++ -g main.cpp -o TorresHanoi                          |                                                         
//|-----------------------------------------------------------------------|

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) { 

	system ("clear");

	// DECLARACIÓN DE LOS OBJETOS.
	TorresHanoi *torresHanoi;

	// DECLARACIÓN DE VARIABLES.
	char numeroDiscosChar = *argv[1];
	int numeroDiscos = numeroDiscosChar - '0';
	char debugChar = *argv[2]; // Obtenemos el valor del debug.
	int debug = debugChar - '0'; // Convertimos dicho valor a un entero.

	cout << "  ___|PRÁCTICA 2: DISEÑO Y ANÁLISIS DE ALGORITMOS|___" << endl;
	cout << "------------------- TORRES DE HANOI -------------------" << endl;

	torresHanoi = new TorresHanoi(numeroDiscos);

	return(0); 
}