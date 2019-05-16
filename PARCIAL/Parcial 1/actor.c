#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ACTORESMAX 5
#include "genero.h"
#include "pelicula.h"
#include "actor.h"
#include "biblioteca.h"

void initActor(eActor listing[],int len)
{
    //int id[ACTORESMAX]={1,2,3,4,5};
    char nombreCompleto[ACTORESMAX][50]={"Julieta Roberto","Richar Darin","Nicole Kidman","Tita Merelo", "Natalia Oreiro"};
    char paisOrigen[ACTORESMAX][50]={"EEUU  ","Argentina","Australia","Argentina","Uruguay"};

    int i;
    for(i = 0 ; i < len ; i++)
    {
        listing[i].id = i+1 ;
    }

    for(i=0;i<ACTORESMAX;i++)
    {
        strcpy(listing[i].nombreCompleto,nombreCompleto[i]);
        strcpy(listing[i].paisOrigen, paisOrigen[i]);
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
    printf(" %s \t\t%15s, id: %d\n",Actor.paisOrigen, Actor.nombreCompleto, Actor.id);
}

int mostrarArrayActor(eActor listing[], int len)
{
    int flag=0;
    if(existeActor(listing,len))
    {
        int i;

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

void sortPaisOrigen(eActor listing[], int len)
{
    eActor aux;
    //int auxEntero;
    int i,j;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].paisOrigen>listing[j].paisOrigen)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(strcmpi(listing[i].paisOrigen,listing[j].paisOrigen)==1)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }
}


