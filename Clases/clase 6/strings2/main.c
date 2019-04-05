#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*******************/

int main()
{
    char nombre[50]; //(50 bytes) si me paso del 49 PUEDO entrar en lugar de memoria donde hay variables

    printf("ingrese su nombre: ");
    //scanf("%s",nombre);//no se pone & porque un vector ya representa una direc de mem (redundante)

    gets(nombre); //se pueden usar espacios

    printf("\nsu nombre es: %s\n",nombre);


    return 0;
}
