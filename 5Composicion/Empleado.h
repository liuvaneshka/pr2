#ifndef EMPLEADO
#define EMPLEADO

// incluye la definición de la clase Fecha de fecha.h
#include "fecha.h"
class Empleado {
private:
char nombres[ 25 ];
char apellidos[ 25 ];
const Fecha fechaNacimiento; // composición: objeto miembro
const Fecha fechaContratacion; // composición: objeto miembro
public:
Empleado(
const char *, const char *, const Fecha &, const Fecha & );
void imprime() const;
~Empleado(); // destructor
}; // fin de la clase Empleado

#endif
