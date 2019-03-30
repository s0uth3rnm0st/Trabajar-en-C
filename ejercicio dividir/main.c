#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int sePudo;
    float respuesta;

    sePudo=dividir(10,3,&respuesta);
    if(sePudo==1)
    {
        printf("la respuesta es %f",respuesta);
    }
    else
    {
        printf("no se puede");
    }
}
