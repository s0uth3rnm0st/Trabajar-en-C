#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;
    char palabra[10];

    printf("ingrese un numero: ");
    scanf("%d",&numero);

    fflush(stdin);

    printf("ingrese una letra o caracter: ");
    fflush(stdin);
    scanf("%c",&letra);

    printf("ingrese una palabra: ");
    fflush(stdin);
    scanf("%s",palabra);



    printf("El numero es: %d\nLa letra es: %c\n",numero, letra);
    printf("la palabra es %s\n",palabra);

    system("pause");

    return 0;
}
