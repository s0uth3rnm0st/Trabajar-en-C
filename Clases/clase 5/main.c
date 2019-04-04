#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarVector(int datos[], int tamanio);
void mostrarPalabras(char palabras[],int tamanio);
void cargarVector(int datos[], int tamanio);


int main()
{

    //char usuario [10];    //(no son 10 palabras)es un vector decaracteres tomado como un solo dato, o sea string
    char usuario [][10]={"Maria","Jose","Jesus","Melchor","Gaspar"}; //array de arrays, el primero hace saltar de palabra en poalabra y el segundo dice que empiece en el lugar 0 de la palabra
    int nota[10]={8,5,2,10,3};
    int i;
    int j;

    for(i=0;i<5;i++)
    {
        printf("hello %s - nota:%d \n",usuario[i],nota[i]);
    }

    mostrarVector(nota,5);
    cargarVector(nota,5);
    mostrarVector(nota,5);

    /*
    //ordenamiento por nota
    for(i=0;i<5;i++)//recorre de a uno
    {
        for(j=0;j<4;j++)//compara con los demas
        {
            printf("%d => %d \n",nota[i],nota[j]);//comparacion, va burbujeando los problemas
            if(nota[i]<nota[j])
            {
                int aux = nota[i];
                nota[i]=nota[j];//intercambio de vasos de fanta y coca con un tercer aux vacio"
                nota[j]=aux;    //pero no se manienen los nombres

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy( usuario[i],usuario[j]);
                strcpy( usuario[j],auxString);//ahora si se mantienen los nombres
            }
        }
    }
    */

    /*for(i=0;i<5;i++)//recorre de a uno
    {
        for(j=0;j<4;j++)//compara con los demas
        {

            printf("%d => %d \n",nota[i],nota[j]);//comparacion, va burbujeando los problemas
            //mal if(usuario[i]<usuario[j])
            int resultado;
            resultado=strcmp("hola","hola");
            printf("\n iguales: %d",resultado);
            resultado=strcmp("Hola","hola");
            printf("\n primera mayuscula: %d",resultado);
            resultado=strcmp("hola","Hola");
            printf("\n segunda mayuscula: %d",resultado);
            resultado=strcmp("A","a");
            printf("\n la A: %d",resultado);
            resultado=strcmp("b","a");
            printf("\n la b: %d\n",resultado);


            //7-7 = 0
            //7-9 = -
            //9-7 = +
            // en la ascii las mayusculas tienen primero

            resultado=strcmp(usuario[i],usuario[j]); //lo pasa a binario
            if(strcmp(usuario[i],usuario[j])==-1)
            {
                int aux = nota[i];
                nota[i]=nota[j];//intercambio de vasos de fanta y coca con un tercer aux vacio"
                nota[j]=aux;    //pero no se manienen los nombres

                char auxString[10];
                strcpy(auxString,usuario[i]);
                strcpy( usuario[i],usuario[j]);
                strcpy( usuario[j],auxString);//ahora si se mantienen los nombres
            }
        }
    }
*/
/*
    for(i=0;i<5;i++)
    {
        printf("hello %s - nota:%d \n",usuario[i],nota[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("ingrese usuario#%d: ",i+1);
        gets(usuario[i]);
        printf("ingrese nota #%d: ",i+1);
        scanf("%d",&nota[i]);
    }
*/

    return 0;
}

void mostrarVector(int datos[], int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("nota: %d \n",datos[i]);
    }
}

void mostrarPalabras(char palabras[],int tamanio)
{
    char

    scanf("%c",palabras);
    printf("%c",palabras);
}

void cargarVector(int datos[], int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        datos[i]=1;
    }
}
