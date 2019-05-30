#ifndef ARCHIVOS_H_INCLUDED
#define ARCHIVOS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "archivos.c"

typedef struct
{
    char nombre[50];
    int legajo;
    int nota;
    int estado;
}Alumno;


#endif // ARCHIVOS_H_INCLUDED
