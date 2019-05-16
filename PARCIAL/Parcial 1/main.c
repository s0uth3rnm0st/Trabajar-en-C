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
    //mostrarArrayPelicula(peliculaListado,TPELICULA);


    construirArrayActor(actorListado,TACTOR);
    initActor(actorListado,TACTOR);
    //sortActor(actorListado,TACTOR);
    //mostrarArrayActor(actorListado,TACTOR);

    construirArrayGenero(generoListado,TGENERO);
    initGenero(generoListado,TGENERO);
    //sortGenero(generoListado,TGENERO);
    //mostrarArrayGenero(generoListado,TGENERO);
/*
    printf("\n|======|======|============|==========|=========|=======================|");
    printf("\n|CODIGO|  ID  |   TITULO   | ESTRENO  | GENERO  |         ACTOR         |");
    printf("\n|======|======|============|==========|=========|=======================|");
    mostrarPeliculaConActor(peliculaListado,actorListado,TPELICULA,TACTOR);
    printf("\n|======|======|============|==========|=========|=======================|");
*/
    while(exit==1)
    {
        printf("\n1.ALTA\n2.BAJA\n3.MODIFICAR\n4.MOSTRAR\n5.LISTAR\n6.SALIR\n\n");
        while(!pedirOpcionMenu("Ingrese el numero de la opcion: ",opcionChar))
        {
            system("cls");
            printf("1.ALTA\n2.BAJA\n3.MODIFICAR\n4.MOSTRAR\n5.LISTAR\n6.SALIR\n\n");
            printf("OPCION INCORRECTA!! debe ser un numero.\n");
        }

        opcion=atoi(opcionChar);

        switch(opcion)
        {
            case 1:
                addPelicula(peliculaListado,TPELICULA);
                break;

            case 2:
                deletePelicula(peliculaListado,TPELICULA);
                break;

            case 3:
                editPelicula(peliculaListado, TPELICULA);
                break;

            case 4:
                //sortPelicula(peliculaListado, TPELICULA);
                //arrayInformation(employeeListing, T);

                mostrarArrayPelicula(peliculaListado,TPELICULA);
                break;

            case 5:
                sortAnio(peliculaListado,TPELICULA);
                printf("\n|==============================|");
                printf("\n| PELICULAS ORDENADAS POR ANIO |");
                printf("\n|==============================|\n");
                mostrarArrayPeliculaConsigna(peliculaListado,TPELICULA);

                sortPaisOrigen(actorListado,TACTOR);
                printf("\n|==============================|");
                printf("\n|  ACTORES ORDENADOS POR PAIS  |");
                printf("\n|==============================|\n");
                mostrarArrayActor(actorListado,TACTOR);

                printf("\n|============================================|");
                printf("\n|  PELICULAS ORDENADAS POR NOMBRE ASCENDENTE |");
                printf("\n|============================================|\n");
                ordenarPeliculasPorIdYCritetrio(peliculaListado,TPELICULA,-1);
                mostrarArrayPeliculaConsigna(peliculaListado,TPELICULA);

                printf("\n|============================================|");
                printf("\n| PELICULAS ORDENADAS POR NOMBRE DESCENDENTE |");
                printf("\n|============================================|\n");
                ordenarPeliculasPorIdYCritetrio(peliculaListado,TPELICULA,1);
                mostrarArrayPeliculaConsigna(peliculaListado,TPELICULA);

                printf("\n|============================================|");
                printf("\n|        PELICULAS CON GENERO Y ACTOR        |");
                printf("\n|============================================|\n");
                printf(" PELICULA\t\tACTOR\t\t\tGENERO\n");
                printf("-------------------------------------------------------\n");
                mostrarPeliculaConGeneroYActor(peliculaListado,actorListado,generoListado,TPELICULA,TACTOR,TGENERO);
                printf("\n\n");

                printf("\n|===============================================|");
                printf("\n|PELICULAS CUYO ACTORES PRINCIPALES SEAN DE EEUU|");
                printf("\n|===============================================|\n");
                mostrarPeliculaPaisActorEEUU(peliculaListado,actorListado,TPELICULA,TACTOR);
                printf("\n\n");
                //MaxVistas(peliculaListado,TPELICULA);
                break;

            case 6:
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
