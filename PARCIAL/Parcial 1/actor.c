#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ACTORESMAX 5

#include "pelicula.h"
#include "actor.h"
#include "biblioteca.h"

void initActor(eActor listing[],int len)
{
    //int id[ACTORESMAX]={1,2,3,4,5};
    char nombreCompleto[ACTORESMAX][50]={"Julieta Roberto","Richar Darin",  "Nicole Kidman","Tita Merelo", "Natalia Oreiro"};
    char paisOrigen[ACTORESMAX][50]={"EEUU","Argentina","Australia","Uruguay"};

    int i;
    int id;
    for(i = 0 ; i < len ; i++)
    {
        id=0;
        listing[i].id =  id ++;
    }

    for(i=0;i<ACTORESMAX;i++)
    {
        strcpy(listing[i].nombreCompleto,nombreCompleto[i]);
        strcpy(listing[i].paisOrigen, paisOrigen[i]);
        listing[i].id = id;
        listing[i].isEmpty = OCUPADO;
    }
}

int existeActor(eActor listing[],int len)
{
    int i;
    int ret=0;
    for(i=0;i<len;i++)
    {
        if(listing[i].isEmpty == OCUPADO)
        {
            ret=1;
            break;
        }
    }
    return ret;
}

void printActor(eActor Actor)
{
    printf("%15s %15s %10d\n",Actor.nombreCompleto, Actor.paisOrigen, Actor.id);
}

int mostrarArrayActor(eActor listing[], int len)
{
    int flag=0;
    if(existeActor(listing,len))
    {
        int i;
        /*printf("\t#***************************************************************#\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#APELLIDO\tNOMBRE\t\tID\tSECTOR\t\tSALARIO #\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#***************************************************************#\n\n");*/

        printf("\n");/************/

        for(i=0; i<len; i++)
        {
            if(listing[i].isEmpty==OCUPADO)
            {
                printActor(listing[i]);
                flag=1;
            }
        }
    }
    /*else
    {
        if(flag==0)
        {
            printf("Aun NO se cargaron actores en el sistema!!\n");
        }
    }*/
}

void construirArrayActor(eActor listing[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        listing[i].isEmpty= LIBRE;
        strcpy(listing[i].nombreCompleto, "");
        strcpy(listing[i].paisOrigen, "");
        listing[i].id= 0;
    }
}

