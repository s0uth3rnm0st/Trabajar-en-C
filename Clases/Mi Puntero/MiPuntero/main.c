//https://www.youtube.com/watch?time_continue=122&v=sdo7miC8jSQ

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //SIZEOF obtiene el tamaño en memoria
    int INT;
    int CHAR;
    int STRING;

    INT=sizeof(int);
    printf("%d \n",INT);

    CHAR=sizeof(char);
    printf("%d \n",CHAR);

    char string[5];
    STRING=sizeof(string);
    printf("%d \n",STRING);

    /*************************************************************************/

    int A=121;
    printf("Dir: %p \n",&A); //con %p es para imprimir punteros
    printf("Dir: %d \n",&A);
    printf("Val: %d \n",A);


    /*************************************************************************/
    //GUARDANDO POSICIONES DE MEMORIA

    int auxInt=1;
    char auxChar1="a";
    char auxChar2="B";
    char auxString[5]="hola";

    auxInt = &auxChar1;

    printf("Dir. de mem de auxChar1: %d\n",&auxChar1);
    printf("Dir. guardada en auxInt: %d\n",auxInt);

    /*************************************************************************/
    //stack



    return 0;
}
