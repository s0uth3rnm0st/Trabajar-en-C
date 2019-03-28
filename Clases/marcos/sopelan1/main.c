#include <stdio.h>
#include <stdlib.h>
void saludar(void);
int dameNumero(void);
float sacarpromedio(int suma,int cantidad);
int main()
{
    /*int edad;
    float altura;
    int contador;
    float numero
    float altura
    altura=82.5;
    edad=18;
    printf("ingrese su edad\n");
    scanf("%d",&edad);
    printf("ingrese su altura");
    scanf("%f",&altura);
    printf("Hello world!\n");
    printf("Marcos \t Sopelana\n");
    printf("su edad es: %d",edad);
    printf("\nsu altura es: %f",altura);*/
    int contador;
    int numero;
    int altura;
    float promedio;
    int suma;
    int limite;
    contador=0;
    saludar();
    suma=0;
    limite= dameNumero() ;
    while(contador<limite)
    {
        printf("\n ingrese un numero :");
        scanf("%d",&numero);
        suma=suma+numero;
        contador ++;

    }
    promedio=sacarpromedio(suma,contador);
    printf("el promedio es :%f",promedio);


    return 0;

}
void saludar(void)
{
    printf("hola mundo C");
}
int dameNumero(void)
{

    int cantidad;
    printf("\n ingrese la cantidad de iteraciones :");
    scanf("%d",&cantidad);
    return cantidad;
}
float sacarpromedio(int suma,int cantidad)
{
    float promedio;
    promedio=(float)suma/cantidad;
    return promedio;

}
