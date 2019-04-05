#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 5 //no es una constante, es como un "buscar y reemplazar", no tiene expacio de memoria


int const LARGO = 10;//no es lo mismo que define, la var ocupa lugar en memoria

int main()
{

    int miArray[TAM];
    int indice;

    cargarArray(miArray, TAM);
    mostrarArray(miArray, TAM); //TAM pasa a tam
    indice = buscarValor(miArray, TAM, 5);

    if(indice!=-1)
    {
        printf("\nel indice es %d: ", indice);
    }
    else
    {
        printf("\nvalor inexistente");
    }


    return 0;
}


