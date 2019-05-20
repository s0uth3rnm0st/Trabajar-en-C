#include <stdio.h>
#include <stdlib.h>

/**********************************************************************/
//hacer funciones cargaEnteros, mostrar, ordenar, calcularMax, promedio
/**********************************************************************/

void mostrarArray(int*,int);

int main()
{
    /*int valor = 99;
    int* p;
    int* q;
    p = &valor; //p guarda la dire de valor
    q = p; //q tambien guarda la dire de VALOR
    printf("%d", *q);*/

    int variable[5]={5,9,7,8,1};
    int* puntero;

    puntero = variable;

    printf("%d\n",puntero); //variable
    printf("%d\n",puntero+0); //&variable[0]           ***
    printf("%d\n",puntero+1); //&variable[1]            * 1
    printf("%d\n\n",puntero+2); //&variable[2]         ***
    //me estoy moviendo a traves de un vector

    printf("%d\n",variable[0]); //&variable[0]         ***  ***
    printf("%d\n",variable[1]); //&variable[1]          *    * 2
    printf("%d\n\n",variable[2]); //&variable[2]       ***  ***

    printf("%d\n",*(puntero+0)); //&variable[0]        ***  ***  ***
    printf("%d\n",*(puntero+1)); //&variable[1]         *    *    * 3
    printf("%d\n\n",*(puntero+2)); //&variable[2]      ***  ***  ***



    mostrarArray(variable,5);


    /*
    int i;
    for(i=0;i<10000;i++)
    {
        puntero++;
        printf("%d\n",puntero);
    }*/

    return 0;
}

void mostrarArray(int* pArray,int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n",*(pArray+i));/*variable[i]*/
    }
}
