#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GENEROSMAX 4

#include "pelicula.h"
#include "actor.h"
#include "genero.h"
#include "biblioteca.h"

void initGenero(eGenero listing[],int len)
{
    //int id[ACTORESMAX]={1,2,3,4,5};
    char genero[GENEROSMAX][50]={"ACCION","TERROR","COMEDIA","OTRO"};

    int i;
    for(i = 0 ; i < len ; i++)
    {
        listing[i].id = i+1 ;
    }

    for(i=0;i<GENEROSMAX;i++)
    {
        strcpy(listing[i].genero,genero[i]);
        listing[i].isEmpty = OCUPADO;
    }
}

int existeGenero(eGenero listing[],int len)
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

void printGenero(eGenero genero)
{
    printf("%15s %15d\n",genero.genero, genero.id);
}

int mostrarArrayGenero(eGenero listing[], int len)
{
    int flag=0;
    if(existeGenero(listing,len))
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
                printGenero(listing[i]);
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

void construirArrayGenero(eGenero listing[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        listing[i].isEmpty= LIBRE;
        strcpy(listing[i].genero, "");
        listing[i].id= 0;
    }
}

void sortGenero(eGenero listing[], int len)
{
    eGenero aux;
    //int auxEntero;
    int i,j;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].genero>listing[j].genero)
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
            if(strcmpi(listing[i].genero,listing[j].genero)==1)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }
}
