#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 1000000
#define MAXPELICULAS 3

#include "pelicula.h"
#include "actor.h"
#include "genero.h"
#include "biblioteca.h"

ePelicula getPelicula()
{
    ePelicula peliculaRetorno;

    while(getStringSpaces("Ingrese el nombre de la pelicula: ",peliculaRetorno.titulo)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    getStringYear1894To2025("",&peliculaRetorno.anioEstreno);

    getGenero("",&peliculaRetorno.idGenero);

    getActor("",&peliculaRetorno.idActor);

    while(getCodigo("Ingrese el codigo de la pelicula (3 cifras, sin ceros a la izquierda):",&peliculaRetorno.codigoPelicula)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    peliculaRetorno.isEmpty=OCUPADO;

    return peliculaRetorno;

}

int getCodigo(char mensaje[], int *input)
{
    char ingreso[50];
    int retorno=0;
    int flag=1;
    int auxiliar=0;
    int i;
    int contador=0;
    printf(mensaje);
    scanf("%s",&ingreso);

    for(i=0;i<=strlen(ingreso);i++)
    {
        contador++;
        if(ingreso[i]=='.')
        {
            flag=0;
            break;
        }
    }

    if(contador!=4)
    {
        flag=0;
    }

    auxiliar=atoi(ingreso);

    if(auxiliar<100)
    {
        flag=0;
    }

    if(auxiliar>0 && flag==1)
    {
        *input=auxiliar;
        retorno=1;
    }

    return retorno;
}

void getActor(char mensaje[],int *input[])
{
    int aux;
    while(getInt("ingrese el actor:\n1) Julieta Roberto\n2) Richar Darin\n3) Nicole Kidman\n4) Tita Merelo\n5) Natalia Oreiro\n",&aux)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(aux<1 || aux>5)
    {
        printf("ingrese un valor valido (1 a 5): ");
        getInt("",&aux);
    }

    *input=aux;
}

void getGenero(char mensaje[],int *input[])
{
    int aux;
    while(getInt("ingrese el genero:\n1 para ACCION\n2 para TERROR\n3 para COMEDIA\n4 para OTRO\n",&aux)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(aux<1 || aux>4)
    {
        printf("ingrese un valor valido (1 a 4): ");
        getInt("",&aux);
    }

    *input=aux;
}

int dameLugarLibre(ePelicula listing[], int len)
{
    int i;
    int index = -1; /**valor no alcanzado por el for*/

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
            listing[indice].id =  indice + 1000;
            //listing[indice].isEmpty = OCUPADO;
        }
        printf("Pelicula registrada exitosamente.\n");
    }
    else
    {
        //fullArray(listing,len);        DEFINIR ESTA FUNCION!!!
        printf("algo esta mal\n");
    }

    return indice;
}

void initPelicula(ePelicula listing[],int len)
{
    char titulo[MAXPELICULAS][50]={"Pelicula 1","Pelicula 2","Pelicula 3"};
    int anioEstreno[MAXPELICULAS]={1994,2005,2012};

    int i;
    for(i = 0 ; i < len ; i++)
    {
        listing[i].id =  i + 1000;
    }

    int codigoPelicula[MAXPELICULAS]={111,222,333};
    int idActor[MAXPELICULAS]={1,2,3};
    int idGenero[MAXPELICULAS]={1,2,3};


    for(i=0;i<MAXPELICULAS;i++)
    {
        strcpy(listing[i].titulo,titulo[i]);
        listing[i].anioEstreno = anioEstreno[i];
        listing[i].idGenero = idGenero[i];
        listing[i].codigoPelicula=codigoPelicula[i];
        listing[i].idActor = idActor[i];
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
    printf("%s %5d \tcodigo %d \tid %d \tidActor %d idGenero %d\n",laPelicula.titulo, laPelicula.anioEstreno, laPelicula.codigoPelicula, laPelicula.id, laPelicula.idActor, laPelicula.idGenero);
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
        listado[i].anioEstreno= 0;
        //strcpy(listado[i].genero, "");
        listado[i].id= 0;
        listado[i].idActor= 0;
        listado[i].codigoPelicula= 0;
    }
}

void mostrarPeliculaConActor(ePelicula peliculaListado[], eActor actorListado[], int tamPelicula, int tamActor)
{
    int i;
    int j;
    for(i=0;i<tamPelicula;i++)
    {
        if(peliculaListado[i].isEmpty==1)
        {
            for(j=0;j<tamActor;j++)
            {
                if(peliculaListado[i].idActor==actorListado[j].id)
                {
                    printf("\n| %d  | %d | %s |   %d   |  %s     \t|",peliculaListado[i].codigoPelicula,peliculaListado[i].id,peliculaListado[i].titulo,peliculaListado[i].anioEstreno, actorListado[j].nombreCompleto);
                }
            }
        }
    }
}

