#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_DATOS 4

void getString(char mensaje[],char input[]);
void mostrarAlumnos(char nombre[][50], char apellido[][50], int edad[], int notas[], int tamanio[]);
void ordenarAlumnos(char nombre[][50], char apellido[][50], int edad[], int notas[], int tamanio[]);

int main()
{
    char nombres [CANTIDAD_DATOS][50]={"gustavo", "alfredo", "carlos", "franco"};
    char apellidos [CANTIDAD_DATOS][50]={"perez", "gonzalez", "fernandez", "diaz"};
    int edad [CANTIDAD_DATOS]={15, 34, 22, 41};
    int nota [CANTIDAD_DATOS]={10, 8, 4, 2};

    int i;


    ordenarAlumnos(nombres,apellidos,edad,nota, CANTIDAD_DATOS); //ordenar burbujeo
    mostrarAlumnos(nombres,apellidos,edad,nota, CANTIDAD_DATOS);
    for(i=0; i<CANTIDAD_DATOS; i++)
    /*{
        getString("ingrese el nombre :",nombres[i]);
        getString("ingrese el apellido :",apellidos[i]);

    }

    ordenarAlumnos(nombres,apellidos,edad,nota, CANTIDAD_DATOS);
    mostrarAlumnos(nombres,apellidos,edad,nota, CANTIDAD_DATOS);
    */
    return 0;
}

void getString(char mensaje[],char input[])
{
    printf(mensaje);
    scanf("%s", input);
}

void mostrarAlumnos(char nombre[][50], char apellido[][50], int edad[], int notas[], int tamanio[6])
{
    int i;

    for (i=0; i<4; i++)
    {
        if (nombre[i] != -1)
        {
            printf("\n - nombre: %s \t- apellido: %s \t- edad: %d \t- nota: %d\n",nombre[i],apellido[i],edad[i],notas[i]);
        }
    }
}

void ordenarAlumnos(char nombre[][50], char apellido[][50], int edad[], int notas[], int tamanio[])
{
    char aux[50];
    int auxEntero;
    int i,j;
    for(i=0; i<CANTIDAD_DATOS-1; i++)//queda el menor
    {
        for(j=i+1; j<CANTIDAD_DATOS; j++)//cuando j termino la vuelta, i se queda con el elemento mas chico y sigue a la otra vuelta
        {
            if(strcmp(nombre[i],nombre[j])>0)
            {
                strcpy(aux,nombre[i]); //todo lo que tenga que hacer con un string pasa por una funcion
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],aux);

                strcpy(aux,apellido[i]);
                strcpy(apellido[i],apellido[j]);
                strcpy(apellido[j],aux);

                auxEntero = edad[i];
                edad[i] = edad[j];
                edad[j] = auxEntero;

                auxEntero = notas[i];
                notas[i] = notas[j];
                notas[j] = auxEntero;


            }
        }
    }
}
