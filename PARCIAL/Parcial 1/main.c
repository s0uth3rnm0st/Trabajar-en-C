#include <stdio.h>
#include <stdlib.h>
#define T 10
#include "pelicula.h"
#include "actor.h"
#include "biblioteca.h"

int main()
{
    int opcion;
    char opcionChar[50];
    int exit=1;

    ePelicula peliculaListado[T];
    eActor actorListado[T];

    construirArrayPelicula(peliculaListado,T);
    initPelicula(peliculaListado,T);
    mostrarArrayPelicula(peliculaListado,T);


    construirArrayActor(actorListado,T);
    initActor(actorListado,T);
    mostrarArrayActor(actorListado,T);

    addPelicula(peliculaListado,T);

    mostrarArrayPelicula(peliculaListado,T);

    return 0;
}
