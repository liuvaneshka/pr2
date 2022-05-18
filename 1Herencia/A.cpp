// INICIO Archivo A.cpp
#include "A.h"
#include <iostream>
using namespace std;
/*** Implementación ****/
a::a() { // Constructor: inicializa los atributos
Aa = 3;
}
a::~a() {
}
int a::ObtenerValor() { // retorna el dato miembro valor
return Aa; //return this->a;
}
void a::AsignarValor(int V) {
this->Aa = V; //asigna a = V;
}
void a::imprimir() { // imprime por consola el dato miembro a
cout << "a = " << Aa << endl;
b::imprimir(); // imprime por consola el dato miembro b
// heredado de la clase B
}
// FIN de archivo A.cpp
