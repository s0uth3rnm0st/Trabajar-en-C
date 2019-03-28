#include <stdio.h>
#include <stdlib.h>
int dividir(int numero);
int esDistintACero(int numero);
int factorial(int numero);

int main()
{
    int dato;
    dato=dividir(6);
        printf("el dato es: %d\n",dato);
        dato=dividir(0);
        printf("el dato es: %d\n",dato);

        int unFactorial;
        unFactorial=factorial(5);
        printf("la factorial es: %d",unFactorial);

    /*
    int edad;
    int retorno=0;

    do
    {
       printf("ingrese una edad\n");
       retorno=scanf("%d",&edad); //scanf devuelve(retorna) un entero -> con & logro ingresar un valor, si no no paso nada y no accede a int edad
       fflush(stdin);
    }while(retorno==0);

    printf("la respuesta es: %d\n",retorno);
    printf("la edad es %d:",edad);
    */

int factorial(int numero);
    return 0;                        //el main da una respuesta: return 0
}

int dividir(int numero)
{
    int respuesta;
    int resultado;
    respuesta=esDistintACero(numero); //retornando el dato y guardandolo en respuesta
    if(respuesta==1) //llamo a la funcion
    {
        resultado=numero/2;
    }
    return respuesta;
}

int esDistintACero(int numero) //me dice si es !=0
{
    if(numero!=0)
    {
        return 1;
    }
    return 0;
}

int factorial(int numero) //es un numero que se obtiene de la * de ingreso de un numero y todos sus antecesores
{
    int respuesta;
    if(numero==1)
    {
        return 1;   //termina la funcion
    }
    respuesta=numero*factorial(numero-1);
    return respuesta;


}
