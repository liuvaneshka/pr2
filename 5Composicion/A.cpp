// INICIO Archivo A.cpp
#include "A.h"
#include <iostream>
using namespace std;
/*** Implementación ****/
a::a() { // Constructor: inicializa los atributos
Aa = 3;
cout << "* Constructor de la clase A * " << endl;
}
a::~a() {
cout << "* Destructor de la clase A * " << endl;
}
int a::ObtenerValor() { // retorna el dato miembro valor
return Aa; //return this->a;
}
void a::AsignarValor(int V) {
this->Aa = V; //asigna a = V;
}
void a::imprimir() { // imprime por consola los datos miembro A
cout << "a = " << Aa << endl;
cout << "b de A = ";
b.imprimir(); // método imprimir de la clase B.
}
// FIN de archivo A.cpp
