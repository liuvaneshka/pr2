/* Para correr este programa debe ejecutar el
* siguiente comando:
*
* ./BesparteA
*
*/
// INICIO archivo Principal.cpp
#include <iostream>
using namespace std;
#include "A.h"
void prueba() { // probar ejecución de los constructores ydestructores
a A;
A.AsignarValor(5);
cout << "Dentro de la funciçon prueba" << endl;
}
int main()
{
cout << "Imprimir los tamaños de las clases" << endl;
cout << "sizeof(A) = " << sizeof(a) << endl;
cout << "sizeof(B) = " << sizeof(b) << endl;
prueba(); // prueba de llamadas a los constructores
cout << endl << "Se instancias Objetos de la Clase A y B" <<endl;
a objA;
b objB;
objA.AsignarValor(44);
objB.AsignarValor(100);
cout << "Valor del dato miembro luego de la asignación = " <<
endl;
cout << "A = " << objA.ObtenerValor() << " B = " <<
objB.ObtenerValor() << endl;
cout << "Función Imprimir Clase A, objeto objA: " << endl;
objA.imprimir();
cout << "Función Imprimir Clase B, objeto objB: " << endl;
objB.imprimir();
return 0;
}
// FIN archivo Principal.cpp
