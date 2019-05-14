#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    char genero[50];//[50]={"ACCION","COMEDIA","TERROR","OTRO"}
    int id;
    int isEmpty;
}eGenero;
