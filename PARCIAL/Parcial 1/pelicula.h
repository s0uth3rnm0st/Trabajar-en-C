#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    int codigoPelicula;
    char titulo[50];
    char fechaEstreno[8];
    char genero[50];    /**<----   NECESITA UNA ESTRUCTURA */
    int idActor;
    int isEmpty;

}ePelicula;

ePelicula getPelicula();

int dameLugarLibre(ePelicula listing[], int len);

int addPelicula(ePelicula listing[], int len);

void initPelicula(ePelicula listing[],int len);

int existePelicula(ePelicula listing[],int len);

void printPelicula(ePelicula laPelicula);

int mostrarArrayPelicula(ePelicula listing[], int len);

void construirArrayPelicula(ePelicula listado[], int tam);
