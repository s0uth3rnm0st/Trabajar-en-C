#include "biblioteca.h"

void mostrarArray (int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("%d\n",array[i]);
    }
}

void cargarArray(int array[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        printf("ingrese un numero: ");
        scanf("%d",&array[i]);
    }
}

int buscarValor(int array[], int tam, int valor)
{
    int indice=-1;
    int i;
    for(i=0;i<tam;i++)
    {
        if(array[i]==valor)
        {
            indice=i;
            break;//ya encontre el dato, no busco mas
        }
    }

    return indice;//me interesa que devuelva el indice (si lo encontro o no)
}
