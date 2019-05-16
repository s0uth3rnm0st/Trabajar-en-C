#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    char nombreCompleto[50];
    char paisOrigen[50];
    int isEmpty;

}eActor;



void initActor(eActor listing[],int len);

int existeActor(eActor listing[],int len);

void printActor(eActor Actor);

int mostrarArrayActor(eActor listing[], int len);

void construirArrayActor(eActor listing[], int len);

void sortPaisOrigen(eActor listing[], int len);
