#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 1000000
#define MAXPELICULAS 3

#include "pelicula.h"
#include "actor.h"
#include "biblioteca.h"

ePelicula getPelicula()
{
    ePelicula peliculaRetorno;

    while(getString("Ingrese el nombre de la pelicula: ",peliculaRetorno.titulo)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getString("Ingrese la fecha de estreno: ",peliculaRetorno.fechaEstreno)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getString("Ingrese el genero \nA, para accion.\nC, para comedia.\nT, para terror.\nO, para otros.\n ",peliculaRetorno.genero)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getInt("Ingrese el ID del actor principal :",peliculaRetorno.idActor)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getInt("Ingrese el codigo de la pelicula :",peliculaRetorno.codigoPelicula)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    peliculaRetorno.isEmpty==OCUPADO;

    return peliculaRetorno;

}

int dameLugarLibre(ePelicula listing[], int len)
{
    int i;
    int index = -1;

    for(i=0; i<len; i++)
    {
        if(listing[i].isEmpty==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

int addPelicula(ePelicula listing[], int len)
{
    int indice;
    indice= dameLugarLibre(listing, len);
    if(indice != -1)
    {
        listing[indice]= getPelicula();

        for(indice = 0 ; indice < len ; indice++)
        {
            listing[indice].id =  indice + 1;
            listing[indice].isEmpty=OCUPADO;
        }
        printf("Pelicula registrada exitosamente.\n");
    }
 /*   else
    {
        fullArray(listing,len);        DEFINIR ESTA FUNCION!!!
    }*/


    return indice;
}

void initPelicula(ePelicula listing[],int len)
{
    char titulo[MAXPELICULAS][50]={"Pelicula 1","Pelicula 2","Pelicula 3"};
    char fechaEstreno[MAXPELICULAS][50]={"01/01/01","02/02/02","03/03/03"};
    char genero[MAXPELICULAS][50]={"ACCION","COMEDIA","TERROR"};


    int i;
    for(i = 0 ; i < len ; i++)
    {
        listing[i].id =  i + 1000;
    }

    int codigoPelicula[MAXPELICULAS]={111,222,333};
    int idActor[MAXPELICULAS]={1,2,3};



    for(i=0;i<3;i++)
    {
        strcpy(listing[i].titulo,titulo[i]);
        strcpy(listing[i].fechaEstreno, fechaEstreno[i]);
        strcpy(listing[i].genero, genero[i]);
        listing[i].codigoPelicula= codigoPelicula[i];
        listing[i].idActor = idActor[i]; /*** matchear correctamente y arreglar autincremental de actor*/
        listing[i].isEmpty = OCUPADO;

    }
}

int existePelicula(ePelicula listing[],int len)
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

void printPelicula(ePelicula laPelicula)
{
    printf("%s %5s %5s %5d %5d %5d \n",laPelicula.titulo, laPelicula.fechaEstreno, laPelicula.genero, laPelicula.codigoPelicula, laPelicula.id, laPelicula.idActor);
}

int mostrarArrayPelicula(ePelicula listing[], int len)
{
    int flag=0;
    if(existePelicula(listing,len))
    {
        int i;
        /*printf("\t#***************************************************************#\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#APELLIDO\tNOMBRE\t\tID\tSECTOR\t\tSALARIO #\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#***************************************************************#\n\n");*/
        for(i=0; i<len; i++)
        {
            if(listing[i].isEmpty==OCUPADO)
            {
                printPelicula(listing[i]);
                flag=1;
            }
        }
    }
    else
    {
        if(flag==0)
        {
            printf("Aun NO se cargaron peliculas en el sistema!!\n");
        }
    }

}

void construirArrayPelicula(ePelicula listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i].isEmpty= LIBRE;
        strcpy(listado[i].titulo, "");
        strcpy(listado[i].fechaEstreno, "");
        strcpy(listado[i].genero, "");
        listado[i].id= 0;
        listado[i].idActor= 0;
        listado[i].codigoPelicula= 0;
    }
}
