
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 1
#define MAX 1000000

#include "genero.h"
#include "pelicula.h"
#include "actor.h"
#include "biblioteca.h"

int soloNumeros(char str[])
{
    int i = 0;
    int retorno=1;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9' )
        retorno= 0;
        i++;
    }
    return retorno;
}

int getStringNumero(char mensaje[],char input[])
{
    char aux[256];
    int retorno=0;
    getString(mensaje,aux);


    if(soloNumeros(aux))
    {
        {
            strcpy(input,aux);
            retorno= 1;
        }
    }
    return retorno;
}


void getYear1894To2025(char mensaje[],int *input[])
{
    int aux;
    while(getInt("ingrese anio ",&aux)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(aux<1894 || aux>2025)
    {
        printf("ingrese un anio entre 1894 y 2025\n");
        getInt("ingrese anio ",&aux);
    }

    *input=aux;
}

int pedirOpcionMenu(char texto[],char opcion[])
{
 int retorno=1;

    printf("%s",texto);
    if(!getStringNumero("",opcion))
    {
        retorno=0;
    }


    return retorno;
}

int getString(char mensaje[],char input[])
{
    int i;
    int retorno=1;

    printf(mensaje);
    fflush(stdin);
    gets(input);

    for(i=0;i<strlen(input);i++)
    {
        if((input[i]<'a' || input[i]>'z') && (input[i]<'A' || input[i]>'Z'))
        {
            retorno=0;
            break;
        }
    }

    return retorno;
}

int getStringSpaces(char mensaje[],char input[])
{
    int i;
    int retorno=1;

    printf(mensaje);
    fflush(stdin);
    gets(input);

    for(i=0;i<strlen(input);i++)
    {
        if((input[i]<'a' || input[i]>'z') && (input[i]<'A' || input[i]>'Z') && (input[i]!=' ') && (input[i]>='0' || input[i]<='9'))
        {
            retorno=0;
            for(i=0;i<strlen(input);i++)
            {
                if(input[i]<='0' || input[i]>='9')
                {
                    retorno=1;
                    break;
                }
            }
            break;
        }
    }
    return retorno;
}

int getInt(char mensaje[], int *input)
{
    char ingreso[50];
    int retorno=0;
    int flag=1;
    int auxiliar=0;
    int i;
    printf(mensaje);
    scanf("%s",&ingreso);

    for(i=0;i<=strlen(ingreso);i++)
    {
        if(ingreso[i]=='.')
        {
            flag=0;
            break;
        }
    }

    auxiliar=atoi(ingreso);

    if(auxiliar>0 && flag==1)
    {
        *input=auxiliar;
        retorno=1;
    }

    return retorno;
}

int fullArray(ePelicula listing[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(listing[i].isEmpty == OCUPADO)
        {
            printf("No quedan lugares libres, borre o modifique una pelicula\n");
            break;
        }
    }
    return 0;
}






