#ifndef A
#define A
// INICIO Archivo A.h
#include "B.h"
/*** Declaración de la Clase derivada A que hereda de B ****/
class a : protected b{
private:
int Aa;
public:
a();
~a();
int ObtenerValor();
void AsignarValor(int);
void imprimir();
};
// FIN de archivo A.h
#endif
