#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

// "*" = Puntero a la direccion de memoria

int esUnNumero(char*cadena)
{

    int indice=0;
    int retorno=0;

    //printf("\nPalabra por parametro %s",cadena);

    while(cadena[indice]!='\0')
    {
        if(cadena[indice]<'\0' || cadena[indice]>'9')
        {
            break;
        }
        else
        {
            indice++;
        }
    }
    if (cadena[indice]=='\0')
    {
        retorno=1;
    }
    return retorno;
}

int main()
{
    char letra;
    char palabra[10];
    int numero;
    int es;

    scanf("%s",&palabra);
    fflush(stdin);
    printf("\nPalabra ingresada %s",palabra);

    es=esUnNumero(palabra);
    if(es==1)
    {
        printf("\nEs correcto");
    }else{printf("\nNo es correcto");}
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

     int indice=0;

     /*while(indice<20)
     {
         if(palabra[indice]=='\0')
         {
             printf("el barra cero esta en %d",indice);
         }
         printf("\nletra %c",palabra[indice]);
         indice++;
     }

*/
    return 0;
}
