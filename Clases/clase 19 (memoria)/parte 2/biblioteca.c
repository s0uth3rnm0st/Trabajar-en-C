#include <stdio.h>
#include <stdlib.h>

#include "empleado.h"
#include "biblioteca.h"


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
