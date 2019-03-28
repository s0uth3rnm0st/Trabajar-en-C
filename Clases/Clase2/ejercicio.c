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


/*
 se ingresan enteros (no sabe cuantos)(scanf),
 los numeros tienen que estar comprendeidos entre -500 y 500 (validacion)
 determinar:
 a) cuantos pares
 b) cuantos positivos y negativos
 d) cuantas veces se ingreso el 0
 e) promedio de positivos
 f) maximo y minimo (en que orden se ingreso)
 g) la suma de los negativos
 h) diferencia entre positivos y negativos (negativos le resto positivos)
 i) cuantos numeros estan entre -239 y 5
 */
