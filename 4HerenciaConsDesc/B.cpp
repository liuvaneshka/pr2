// INICIO Archivo B.cpp
#include "B.h"
#include <iostream>
using namespace std;
/*** Implementación de los métodos******/
b::b() { // Constructor: inicializa los atributos
Bb = 6;
cout << "* Constructor de la clase B * " << endl;
}
b::~b() {
cout << "* Destructor de la clase B * " << endl;
}
int b::ObtenerValor() { // retorna el dato miembro b
return 	Bb; //return this->b;
}
void b::AsignarValor(int V) {
this->Bb = V; //asigna b = V;
}
void b::imprimir() { // imprime por consola el dato miembro b
cout << "b = " << Bb << endl;
}
// FIN archivo B.cpp
