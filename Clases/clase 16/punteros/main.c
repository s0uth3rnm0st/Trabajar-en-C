#include <stdio.h>
#include <stdlib.h>

/** \brief permite un caracter
 *
 * \param char* el char a cargar
 * \return int [0]-> si no se pudo cargar el caracter
 *             [1]->si se pudo cargar el caracter
 */
int getCaracter(char*); //char* va a ser un param de salida(func que devuelve muchos tipos de datos)

int getCaracter2(char*, char* mensaje,char* mensajeError,char*,char*);

void mostrarLetra(char*);

int main()
{
    char letra;
    int estado;

    estado= getCaracter(&letra);
    if(estado==1)
    {
        printf("dato cargado correctamente\n");
        mostrarLetra(&letra);
    }
    else
    {
        printf("ERROR\n");
    }

    return 0;
}

getCaracter(char* pLetra)
{
    int cargo = 0;
    if(pLetra!=NULL)
    {
        printf("ingrese una letra: ");
        fflush(stdin);
        scanf("%c",pLetra);

        cargo = 1;
    }
    return cargo;
}

void mostrarLetra(char* pLetra)
{
    if(pLetra!=NULL)
    {
        printf("la letra es:  %c\n",*pLetra);
    }
}
