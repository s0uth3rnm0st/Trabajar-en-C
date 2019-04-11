#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define CANTIDAD_DATOS 4

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int esSoloLetra(char palabra[]);

int main()
{
    char nombres [CANTIDAD_DATOS][50]={"gustavo", "alfredo", "carlos", "franco"};
    char apellidos [CANTIDAD_DATOS][50]={"perez", "gonzalez", "fernandez", "diaz"};
    int edad [CANTIDAD_DATOS]={15, 34, 22, 41};
    int nota [CANTIDAD_DATOS]={10, 8, 4, 2};

    int i;

    for (i=0; i<4; i++)
    {
        if (nombres[i] != -1)
        {
            printf("\n nombre: %s \t- apellido: %s \t- edad: %d \t- nota: %d\n",nombres[i],apellidos[i],edad[i],nota[i]);
        }
    }

    for(i=0; i<CANTIDAD_DATOS; i++)
    {
        getString("ingrese el nombre",nombres[i]);
    }

    for (i=0; i<4; i++)
    {
        if (nombres[i] != -1)
        {
            printf("\n nombre: %s \t- apellido: %s \t- edad: %d \t- nota: %d\n",nombres[i],apellidos[i],edad[i],nota[i]);
        }
    }

    return 0;
}

void getString(char mensaje[],char input[])
{
    printf(mensaje);
    scanf("%s", input);
}

int getStringLetras(char mensaje[],char input[])
{
    char aux[50];
    getStringLetras("ingrese nombre",nombres[i]);

    /*for(i=0;i>CANTIDAD_DATOS;i++)
    {
        if()
        {
            retorno=1;
        }
    }*/
}

int esSoloLetra(char palabra[])
{
    int i;
    for(i=0;palabra[i]!='\0';i++);
    {
        if(palabra[i]!=' ')
        {
            if(palabra[i]<'a' && palabra[i]>'z')
            {
                if(palabra[i]<'A' && palabra[i]>'Z')
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}
