// INICIO archivo Principal.cpp
#include <iostream>
using namespace std;
#include "A.h"
void prueba() { // probar ejecución de los constructores ydestructores

a aa;
aa.AsignarValor(5);

cout << "Dentro de la funcion prueba" << endl;
}
int main()
{
cout << "Imprimir los tamaños de las clases" << endl;

cout << "sizeof(A) = " << sizeof(a) << endl;
cout << "sizeof(B) = " << sizeof(b) << endl;
prueba();
return 0;
}
// FIN archivo Principal.cpp
