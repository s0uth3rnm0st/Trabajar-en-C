#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main()
{
    int miEdad;
    //int retorno;

    //retorno=pedirEdad(&miEdad); //--->le estoy pasando una direccion;

    while(pedirEdad(&miEdad)==0)
    {
        fflush(stdin); //--->para que no itere infinitamente
        //nada, es para iterar
    }
    printf("su edad es %d",miEdad);

    /*if(pedirEdad(&miEdad)==1)
    {
        printf("su edad es %d\n",miEdad);
    }
    else
    {
        printf("no se pudo");
    }
    */

    /*
    printf("Hello world!\n");

    int sueldo=10000; //---> se crea una variable con nombre sueldo que apunta a posicion en la ram

    printf("\n lugar sueldo %d",&sueldo); //----> estoy imprimiendo la direccion de memoria

    cambiarValor(sueldo);
    printf("por valor :%d\n",sueldo);

    cambiarReferencia(&sueldo);
    printf("por referencia: %d\n",sueldo);     //--->puntero
    */




    return 0;
}
