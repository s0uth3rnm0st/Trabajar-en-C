#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int esUnNumero(char *cadena)
{
    int indice=0;
    int retorno=0;
    //printf("\npalabra por parametros %s\n",cadena);

    while(cadena[indice]!='\0')
    {
        if(cadena[indice]<'0'|| cadena[indice]>'9')
        {
            break;
        }
        else
        {
            indice++;
        }
    }
    if(cadena[indice]!='\0')
    {
        retorno=1;
    }

    return retorno;
}

int main()
{
    /*
    int miDato=333;
    int cambiarValor(miDato);
    printf("mi dato es: %d",miDato);
    cambiarValorReferencia(&miDato);
    printf("mi dato es %d",miDato);
    */
    char letra;
    char palabra[10];
    int numero;
    int es;
    /*
    scanf("%d",&numero);
    fflush(stdin);
    printf("\nnumero %d\n",numero);

    scanf("%c",&letra);
    fflush(stdin);
    printf("\nletra %c\n",letra);
    */

    scanf("%s",&palabra);  //---> cada vez que termina de leer una palabra pone un \0
    fflush(stdin);
    printf("\npalabra %s\n",palabra);

    es=esUnNumero(palabra);
    if(es==1)
    {
        printf("no es correcto");
    }
    else
    {
    printf(" es correcto");
    }
    /*
    int indice=0;

    while(indice<20)
    {
       if(palabra[indice]=='\0')
       {
           printf("el barra cero esta en %d",indice);
       }
       printf("\npalabra %c",palabra[indice]);
       indice++;
    }
*/
    return 0;

}

