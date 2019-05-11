#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 1000000
#define MAXLOCALIDADES 4

#include "alumno.h"
#include "localidad.h"
#include "biblioteca.h"

void initLocalidad(eLocalidad listing[],int len)
{
    //int id[MAXLOCALIDADES]={1,2,3,4,5};
    char nombreLocalidad[MAXLOCALIDADES][50]={"(C)AVELLANEDA","(D)LANUS","(A)MORON","(B)QUILMES"};

    int i;

    for(i = 0 ; i < len ; i++)
    {
        listing[i].id =  i+100;
    }

    for(i=0;i<MAXLOCALIDADES;i++)
    {
        strcpy(listing[i].nombreLocalidad,nombreLocalidad[i]);
        listing[i].isEmpty = OCUPADO;
    }
}

int existeLocalidad(eLocalidad listing[],int len)
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

void printLocalidad(eLocalidad Localidad)
{
    printf("%15s %10d\n",Localidad.nombreLocalidad, Localidad.id);
}

int mostrarArrayLocalidad(eLocalidad listing[], int len)
{
    int flag=0;
    if(existeLocalidad(listing,len))
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
                printLocalidad(listing[i]);
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

void construirArrayLocalidad(eLocalidad listing[], int len)
{
    int i;
    for(i=0; i<len; i++)
    {
        listing[i].isEmpty= LIBRE;
        strcpy(listing[i].nombreLocalidad, "");
        listing[i].id= 0;
    }
}

void sortLocalidades(eLocalidad listing[], int len)
{
    eLocalidad aux;
    //int auxEntero;
    int i,j;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].nombreLocalidad>listing[j].nombreLocalidad)
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
            if(strcmpi(listing[i].nombreLocalidad,listing[j].nombreLocalidad)==1)
            {
                aux=listing[i];
                listing[i]=listing[j];
                listing[j]=aux;
            }
        }
    }
}


