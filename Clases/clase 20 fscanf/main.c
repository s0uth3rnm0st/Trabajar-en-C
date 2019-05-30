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


    //fscanf(pArchivo,"%[^;],%[^;],%[^\n]\n",nombre,legajo,nota);
    while(!feof(pArchivo))
    {
        fscanf(pArchivo,"%[^,],%[^,],%[^\n]\n",nombre,legajo,nota);

        strcpy(unAlumno.nombre,nombre);
        unAlumno.legajo=legajo;
        unAlumno.nota=nota;
        printf("NOMBRE: %s -- LEG: %s -- NOTA: %s",nombre,legajo,nota);
        printf("\n");

        lista[contador]=unAlumno;
        contador++;
    }

    int i;
    fclose(pArchivo);
/*
    for(i=0; i<51; i++)
    {
        printf("%s - %d - %d\n", lista[i].nombre, lista[i].legajo, lista[i].nota);
    }
*/
    return 0;
}
