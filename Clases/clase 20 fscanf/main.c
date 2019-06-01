#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ARCHIVO ".\\alumnos.csv" //coma separated value (csv)


typedef struct
{
    char nombre[50];
    int legajo;
    int nota;
    int estado;
}Alumno;


int main()
{
    char nombre[500],legajo[500],nota[500];
    Alumno unAlumno;
    Alumno lista[51];
    int contador=0;

    FILE *pArchivo;

    if((pArchivo=fopen(ARCHIVO,"r"))==NULL)
    {
        printf("no se pudo leer");
        exit(1);
    }
    //else

    fscanf(pArchivo,"%[^,],%[^,],%[^\n]\n",nombre,legajo,nota); //es para la primer fila que suele tener todos char
  /*strcpy(unAlumno.nombre,nombre);
    unAlumno.legajo=atoi(legajo);
    unAlumno.nota=atoi(nota);*/

    printf("%s  -- %s -- %s",nombre,legajo,nota);
    printf("\n");
    while(!feof(pArchivo))
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^\n]\n",nombre,legajo,nota);

        printf("%s \t-- %s \t  -- %s",nombre,legajo,nota);
        printf("\n");

        strcpy(unAlumno.nombre,nombre);
        unAlumno.legajo=atoi(legajo);
        unAlumno.nota=atoi(nota);
        lista[contador]=unAlumno;

        contador++;
    }

    int i;
    fclose(pArchivo);

    printf("\nESTRUCTURA: \n");
    for(i=0; i<3; i++)
    {
        printf("%s - %d - %d\n", lista[i].nombre, lista[i].legajo, lista[i].nota);
       // break;
    }

    return 0;
}


