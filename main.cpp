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
#include <string>
#include <ctime>

#include "TorresHanoi.hpp"

using namespace std;

int main(int argc, char *argv[]) { 

	system ("clear");

	// DECLARACIÓN DE LOS OBJETOS.
	TorresHanoi *torresHanoi;
	clock_t tiempoEjecucion;

	// DECLARACIÓN DE VARIABLES.
	string numeroDiscosString = argv[1];
	int numeroDiscos = atoi(numeroDiscosString.c_str()); 
	char debugChar = *argv[2]; // Obtenemos el valor del debug.
	int debug = debugChar - '0'; // Convertimos dicho valor a un entero.
	int movimientos;
  	int valor;

	cout << "  ___|PRÁCTICA 2: DISEÑO Y ANÁLISIS DE ALGORITMOS|___" << endl;
	cout << "------------------- TORRES DE HANOI -------------------" << endl;

	torresHanoi = new TorresHanoi(numeroDiscos);
	cout << "--------------- ESTADO INICIAL ---------------" << endl;
	cout << "VARILLA IZQUIERDA: " << torresHanoi->getVarillaIzquierda()->getPilaVarilla().size() << endl;
	cout << "VARILLA CENTRAL: " << torresHanoi->getVarillaCentral()->getPilaVarilla().size() << endl;
	cout << "VARILLA DERECHA: " << torresHanoi->getVarillaDerecha()->getPilaVarilla().size() << endl;
	tiempoEjecucion = clock(); // Inicializamos el objeto tiempoEjecucion.
  	tiempoEjecucion = clock() - tiempoEjecucion;
	movimientos = torresHanoi->resolverProblema(debug);
	cout << "--------------- ESTADO FINAL ---------------" << endl;
	cout << "VARILLA IZQUIERDA: " << torresHanoi->getVarillaIzquierda()->getPilaVarilla().size() << endl;
	cout << "VARILLA CENTRAL: " << torresHanoi->getVarillaCentral()->getPilaVarilla().size() << endl;
	cout << "VARILLA DERECHA: " << torresHanoi->getVarillaDerecha()->getPilaVarilla().size() << endl;
	cout << "NUMERO DE MOVIMIENTOS REALIZADOS: " << movimientos << endl;
  	printf ("DURACIÓN DE LA EJECUCIÓN: %fs\n", ((float)tiempoEjecucion) / CLOCKS_PER_SEC);

	return(0); 
}