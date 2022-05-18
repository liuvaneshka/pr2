// INICIO archivo Principal.cpp
#include <iostream>
using namespace std;
#include "A.h"
int main()
{
a AA,objA;
b BB,objB;
cout << "Imprimir los tamaños de las clases" << endl;
cout << "sizeof(A) = " << sizeof(AA) << endl;
cout << "sizeof(B) = " << sizeof(BB) << endl;
// Declaración de 2 objetos, uno de cada clase
cout << "Se instancias Objetos de la Clase A y B" << endl;

objA.AsignarValor(55);
objB.AsignarValor(112);
cout << "Valor del dato miembro luego de la asignación = " <<
endl;
cout << "A = " << objA.ObtenerValor() << " B = " <<
objB.ObtenerValor() << endl;
cout << "Función Imprimir Clase A, objeto objA: " << endl;
objA.imprimir();
cout << "Función Imprimir Clase B, objeto objB: " << endl;
objB.imprimir();
cout << "Tamaño del objeto A = " << sizeof(objA) << endl << "Tamaño del objeto B = " << sizeof(objB) << endl;
cout << "Función Imprimir Clase B, sobre el objeto objA: " <<endl;
objA.b::imprimir();

return 0;
}
// FIN archivo Principal.cpp
