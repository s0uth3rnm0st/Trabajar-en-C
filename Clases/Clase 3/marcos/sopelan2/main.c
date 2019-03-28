#include <stdio.h>
#include <stdlib.h>

int main()
{
/*  int numero;
    char letra;

    printf("ingrese un numero: ");
    scanf("%d",&numero);
    printf("ingrese una letra: ");
    fflush(stdin);
    //setbuf(stdin,NULL)
    scanf("%c", &letra);
    printf("el numero es: %d\nla letra es: %c\n", numero , letra);
    char palabra[10];
    printf("ingrese una palabra: ");
    scanf("%s", &palabra);
    printf("la palabra es: %s" ,palabra);*/
    float variableA;
    float variableB;
    int resultado;
    variableA = 3.14;
    variableB = 5.5;
    resultado = variableA < variableB;
    printf("Resultado de la comparación: %d",resultado);
    system("pause");
    return 0;
    /*https://www.utnfravirtual.org.ar/*/
}
