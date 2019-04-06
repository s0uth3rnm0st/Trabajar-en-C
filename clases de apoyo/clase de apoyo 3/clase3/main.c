#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#include <string.h>

int dameEdad(int *edad, char *mensaje);
int dameEdadDos(int *edad, char *mensaje);
int dameEdadTres(int *edad, char *mensaje); //validacion de enteros


int main()
{
    int edad;
    int seCargo;

    do
    {
        seCargo=dameEdadTres(&edad,"\nQue edad tenes?: ");
    }while(seCargo==0);

    printf("la edad ingresa es: %d",edad);

    /*if(dameEdadTres(&edad,"dame la edad ")==1)
    {
        printf("la edad es %d",edad);
    }
    else
    {
        printf("no se puedo");
    }
    */
    return 0;
}

/***************************************************/
/** \brief paso un mensaje
 *
 * \param edad int* edad ingresada
 * \param mensaje char* pregunta la edad
 * \return int devuelve si se pudo o no
 *
 */
/***************************************************/
int dameEdad(int *edad, char *mensaje)
{
    int sePudo=0;
    int aux;
    printf(mensaje);
    sePudo=scanf("%d",&aux);
    if(sePudo==1)
    {
        *edad=aux;
    }
    return sePudo;
}


int dameEdadDos(int *edad, char *mensaje)
{
    char cadenaCargada[20];
    int sePudo=1;
    printf(mensaje);
    scanf("%s", cadenaCargada);
    *edad=atoi(cadenaCargada);

    return sePudo;
}

int dameEdadTres(int *edad, char *mensaje)
{
    char cadenaCargada[20];
    int i = 0;
    int sePudo=1;
    printf(mensaje);
    scanf("%s", cadenaCargada);
    for(i=0;i<strlen(cadenaCargada);i++)
    {
        if(cadenaCargada[i]<'0' || cadenaCargada[i]>'9' && cadenaCargada[i]!="\0")
        {
            sePudo=0;
        }
    }

    if(sePudo==1)
    {
        *edad=atoi(cadenaCargada);
    }

    return sePudo;
}
