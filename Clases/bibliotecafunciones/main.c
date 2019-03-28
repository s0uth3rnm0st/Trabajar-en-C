#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"



int main()
{
    int miDato=333;
    int cambiarValor(miDato);
    printf("mi dato es: %d",miDato);
    cambiarValorReferencia(&miDato);
    printf("mi dato es %d",miDato);




    return 0;
}

