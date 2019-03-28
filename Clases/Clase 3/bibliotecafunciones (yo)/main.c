#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"



int main()
{
    int edad;
    int retorno;
    do
    {
        printf("Ingrese una edad: ");
        retorno=scanf("%d",&edad);
        fflush(stdin);
    }while(retorno==0);
    //printf("La respuesta es: %d",retorno);
    printf("La respuesta es: %d\n",retorno);
    printf("La edad es: %d",edad);

    int dato;
    dato=dividir(6);
    printf("El dato es: %d\n",dato);
    dato=dividir(0);
    printf("El dato es: %d",dato);

    int unFactorial;
    unFactorial=factorial(5);
    printf("El factorial es: %d\n",unFactorial);


    int miDato=333;
    cambiarValor(miDato);
    printf("Mi dato es: %d\n",miDato);
    cambiarValorReferencia(&miDato);
    printf("Mi dato es: %d\n",miDato);



    return 0;

}

