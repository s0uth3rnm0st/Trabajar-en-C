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
    int anioEstreno; /**1894 - 2025*/
    //char genero[50];    /**<----   NECESITA UNA ESTRUCTURA */
    int idActor;
    int idGenero;
    int isEmpty;

}ePelicula;

ePelicula getPelicula();

int getCodigo(char mensaje[], int *input);

void getGenero(char mensaje[],int *input[]);

void getActor(char mensaje[],int *input[]);

int dameLugarLibre(ePelicula listing[], int len);

int addPelicula(ePelicula listing[], int len);

void initPelicula(ePelicula listing[],int len);

int existePelicula(ePelicula listing[],int len);

void printPelicula(ePelicula laPelicula);

int mostrarArrayPelicula(ePelicula listing[], int len);

void construirArrayPelicula(ePelicula listado[], int tam);

//void mostrarPeliculaConActor(ePelicula peliculaListado[], eActor actorListado[], int tamPelicula, int tamActor);
//NO RECONOCE A eActor, FUNCION SIN PROTOTIPO
