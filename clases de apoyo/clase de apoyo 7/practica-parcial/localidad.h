#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1


typedef struct
{
    int id;
    char nombreLocalidad[50];
    int isEmpty;

}eLocalidad;

void initLocalidad(eLocalidad listing[],int len);

int existeLocalidad(eLocalidad listing[],int len);

void printLocalidad(eLocalidad Localidad);

int mostrarArrayLocalidad(eLocalidad listing[], int len);

void construirArrayLocalidad(eLocalidad listing[], int len);

void sortLocalidades(eLocalidad listing[], int len);
