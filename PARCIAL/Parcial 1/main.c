#include <stdio.h>
#include <stdlib.h>
#define TPELICULA 10
#define TACTOR 5
#define TGENERO 4

#include "genero.h"
#include "pelicula.h"
#include "actor.h"
#include "biblioteca.h"

int main()
{
    int opcion;
    char opcionChar[50];
    int exit=1;

    ePelicula peliculaListado[TPELICULA];
    eActor actorListado[TACTOR];
    eGenero generoListado[TGENERO];

    construirArrayPelicula(peliculaListado,TPELICULA);
    initPelicula(peliculaListado,TPELICULA);
    mostrarArrayPelicula(peliculaListado,TPELICULA);


    construirArrayActor(actorListado,TACTOR);
    initActor(actorListado,TACTOR);
    //sortActor(actorListado,TACTOR);
    mostrarArrayActor(actorListado,TACTOR);

    construirArrayGenero(generoListado,TGENERO);
    initGenero(generoListado,TGENERO);
    //sortGenero(generoListado,TGENERO);
    mostrarArrayGenero(generoListado,TGENERO);

    printf("\n|======|======|============|==========|=========|=======================|");
    printf("\n|CODIGO|  ID  |   TITULO   | ESTRENO  | GENERO  |         ACTOR         |");
    printf("\n|======|======|============|==========|=========|=======================|");
    mostrarPeliculaConActor(peliculaListado,actorListado,TPELICULA,TACTOR);
    printf("\n|======|======|============|==========|=========|=======================|");

    while(exit==1)
    {
        printf("\n1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\n5.SALIR\n\n");
        while(!pedirOpcionMenu("Ingrese el numero de la opcion: ",opcionChar))
        {
            system("cls");
            printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.Mostrar\n5.SALIR\n\n");
            printf("OPCION INCORRECTA!! debe ser un numero.\n");
        }

        opcion=atoi(opcionChar);

        switch(opcion)
        {
            case 1:
                //addEmployee(employeeListing, T);
                addPelicula(peliculaListado,TPELICULA);
                break;

            case 2:
                //deleteEmployee(employeeListing, T);
                break;

            case 3:
                //editEmployee(employeeListing, T);
                break;

            case 4:
                /*sortEmployees(employeeListing, T);
                mostrarArray(employeeListing, T);
                arrayInformation(employeeListing, T);*/

                mostrarArrayPelicula(peliculaListado,TPELICULA);
                break;

            case 5:
                exit = 0;
                break;

            default:
                printf("Opcion incorrecta, reingrese...\n");
                break;
        }
        system("pause");
        system("cls");
    }

    return 0;
}
