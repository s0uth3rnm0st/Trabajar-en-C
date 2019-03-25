/*
se ingresan numeros enteros(no se sabe cuantos). Los numeros tieneen que estar comprendidos entre-500 y 500.
determinar:
a) Cuantos numeros pares
b) cuantos positivos
c) cuantos negativos
d) cuantos veces se ingreso el 0
e) promedio de numeros positivos
f) maximo y minimo (en que orden se ingreso)
g) la suma de los negativos
h) la diferencia entre negativos y positivos
i) cuantos numeros estan entre -239 y 5
*/


#include <stdio.h>
#include <stdlib.h>

/*
int main()
{
    printf("Hello world!\n");


    int numero;
    int ingreso;
    int contador=0;


    while(ingreso>-500)
        {
            contador++;
            printf("\n ingrese un numero entero: ");
            scanf("%d",&ingreso);
        }


return 0;
}
*/

int dameNumero(void);
void tomarDato(int numero);

int main()
{
    int numero;
    float promedio;
    int contador=0;
    int suma=0;
    int limite;
    int contadorPares=0;
    int contadorPositivos=0;
    int contadorNegativos=0;
    int contadorCeros=0;
    int sumaPositivos=0;
    float promedioPositivos;
    int maximo=-500;
    int minimo=500;
    int ordenMax;
    int ordenMin;
    int sumaNegativos=0;
    int diferencia;
    int contadorEntre=0;


    limite=dameNumero();
    while(contador<limite)
    {
        contador++;
        printf("\n ingrese un numero entre -500 y 500:");
        scanf("%d",&numero);
        while(numero<-500 || numero>500)
        {
            printf("\n incorrecto, ingrese un numero valido:");
            scanf("%d",&numero);
        }

        if(numero%2==0 && numero!=0)
        {
            contadorPares++;
        }

        if(numero>0)
        {
            contadorPositivos++;
            sumaPositivos=numero+sumaPositivos;
        }
        else
        {
            if(numero<0)
            {
                contadorNegativos++;
                sumaNegativos=numero+sumaNegativos;
            }
        }

        if(numero==0)
        {
            contadorCeros++;
        }

        if(numero>maximo)
        {
            maximo=numero;
            ordenMax=contador;

        }
        if(numero<minimo)
        {
            minimo=numero;
            ordenMin=contador;
        }

        if(numero>-240 && numero<6)
        {
            contadorEntre++;
        }
    }


    diferencia=sumaPositivos+sumaNegativos;
    promedioPositivos=(float)sumaPositivos/contadorPositivos;
    //promedio= (float)suma/contador;
    printf("\n hay %d numero/s par/es",contadorPares);
    printf("\n hay %d numero/s positivo/s",contadorPositivos);
    printf("\n hay %d numero/s negativo/s",contadorNegativos);
    printf("\n la cantidad de ceros es %d",contadorCeros);
    printf("\n el promedio de los positivos es %f",promedioPositivos);
    printf("\n el numero maximo es %d y el minimo es %d,\n siendo el maximo ingresado en la %d vez y el minimo en la %d vez",maximo,minimo,ordenMax,ordenMin);
    printf("\n la suma de los negativos es %d",sumaNegativos);
    printf("\n la diferencia entre los negativos y positivos es %d",diferencia);
    printf("\n hay %d numeros entre -239 y 5 \n",contadorEntre);
    system("pause");



    return 0;
}


int dameNumero(void)
{
    int cantidad;
    printf("\n ingrese la cantidad de iteraciones :");
    scanf("%d",&cantidad);
    return cantidad;
}





