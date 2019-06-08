#include <stdio.h>
#include <string.h>
#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

typedef struct
{
    int legajo;
    char nombre[50];
    float sueldo;
}eEmployee;

eEmployee* nuevoEmpleado(); //constructor por defecto
eEmployee* nuevoEmpleadoParametros(int, char*, float);
void mostrarEmpleado(eEmployee*);
eEmployee* getEmployee();
int setLegajo(eEmployee*,int);
int getLegajo(eEmployee*);//devuelve el tipo de dato asociado con el campo
int setNombre(eEmployee*,char*);
int getNombre(eEmployee* pEmpleado);
int setSueldo(eEmployee*,float);
int getSueldo(eEmployee*);
void employee_free(eEmployee * this);

#endif // EMPLEADO_H_INCLUDED
