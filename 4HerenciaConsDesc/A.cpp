// INICIO Archivo A.cpp
#include "A.h"
#include <iostream>
using namespace std;
/*** Implementación ****/
a::a() { // Constructor: inicializa los atributos
Aa = 3;
for (int i=0; i < 5; i++) Bb[i] = 0;
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
void a::imprimir() { // imprime por consola el dato miembro a
cout << "a = " << Aa << endl;
cout << "b[0] de A = " << Bb[0] << endl;
cout << "b = " << b::Bb << endl;
b::imprimir(); 
// imprime por consola el dato miembro b
// heredado de la clase B
}
// FIN de archivo A.cpp
