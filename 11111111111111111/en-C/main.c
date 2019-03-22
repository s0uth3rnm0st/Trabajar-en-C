#include <stdio.h>
#include <stdlib.h>

void saludar(void);
int dameNumero(void);
float sacarPromedio(int suma,int cantidad);
void tomarDato(int numero);

int main()
{
    int edad;
    float altura;
    int numero;
    float promedio;
    int contador=0;
    int suma=0;
    saludar();
    int limite;

    limite=dameNumero();
    while(contador<limite)
    {
        contador++;
        printf("\n ingrese un numero :");
        scanf("%d",&numero);
        suma=suma+numero;
    }

    //promedio= (float)suma/contador;
    promedio=sacarPromedio(suma,contador);
    printf(" su promedio es: %f",promedio);


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

float sacarPromedio(int suma,int cantidad)
{
    float retorno;
    retorno= (float)suma/cantidad;
    return retorno;

}

//generar random
//pedir
// si no es adivinado
