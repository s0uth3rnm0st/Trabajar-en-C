#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int sePudo;
    float respuesta;
    int datoUno;
    int datoDos;

    pedirDato(&datoUno);
    pedirDato(&datoDos);

    sePudo=dividir(datoUno,datoDos,&respuesta); //LA FUNCION RETORNA SI SE PUDO O NO!!
    if(sePudo==1)
    {
        printf("la respuesta es %f",respuesta);
    }
    else
    {
        printf("no se puede");
    }
}

