#include <stdio.h>
#include <stdlib.h>
int damenumero(void);
float promedioposi(int suma,int numpositivos);
int main(void)
{
    int num;
    int numpares=0;
    int numpositivos=0;
    int numnegativos=0;
    int numceros=0;
    int suma=0;
    float promediopositivos;
    int sumanegativos=0;
    int maxnum;
    int minnum;
    int maxorden;
    int minorden;
    int diferencia;
    int numentre=0;
    int contador=0;
    int limite;
    limite = damenumero();
    while(limite>contador)
    {
        contador ++;
        printf("ingrese un numero : ");
        scanf("%d", &num);
        if (num%2==0 && num!=0)
        {
            numpares ++;

        }
        if (num>0)
        {
            numpositivos  ++;
        }
        else
        {
            if(num==0)
            {
                numceros ++;
            }
            else
            {
                numnegativos ++;
            }
        }
        if(num>0)
        {
            suma=suma+num;
        }
        else
        {
            sumanegativos=sumanegativos+num;
        }
        if(contador==1)
        {
            maxnum=num;
            minnum=num;
            maxorden=contador;
            minorden=contador;
        }
        else
        {
            if(maxnum<num)
            {
                 maxnum=num;
                 maxorden=contador;
            }
            if(minnum>num)
            {
               minnum=num;
               minorden=contador;
            }
        }

        if(num>-239&& num<5)
        {
            numentre ++;
        }




    }
    diferencia=suma+sumanegativos;
    promediopositivos=promedioposi(suma,numpositivos);
    printf("tiene %d numeros pares\n",numpares);
    printf("tiene %d numeros positivos\n",numpositivos);
    printf("tiene %d numeros negativos\n",numnegativos);
    printf("tiene %d numero ceros\n",numceros);
    printf("el promedio de los numeros positivos es %f\n",promediopositivos);
    printf("la suma de los numeros negativos es %d\n",sumanegativos);
    printf("el maximo numero es %d y el orden en numero que salio es %d\n",maxnum , maxorden);
    printf("el minimo numero es %d y el orden en numero que salio es %d\n",minnum, minorden);
    printf("la diferencia de un numero positivo y numero negativo es %d\n",diferencia);
    printf("los numeros estan entre -239 y 5 es %d",numentre);
    system("pause");
    return 0;

}
int damenumero(void)
{
   int cantidad;
   printf("\ningrese la cantidad de interacciones:");
   scanf("%d", &cantidad);
   return cantidad;
}
float promedioposi(int suma,int numpositivos)
{
    float promedio;
    promedio=(float)suma/numpositivos;
    return promedio;
}
