#ifndef A
#define A
// INICIO Archivo A.h
#include "B.h"
/*** Declaración de la Clase derivada A que hereda de B ****/
class a : public b{
private:
int Aa;
int Bb [5];
public:
a();
~a();
int ObtenerValor();
void AsignarValor(int);
void imprimir();
};
// FIN de archivo A.h
#endif
