#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "archivos.h"
#include "archivos.c"
#define ARCHIVO ".\\alumnos.csv" //coma separated value (csv)


int main()
{
    FILE *pArchivo;
    char nombre[70],nota[70],legajo[70];
    Alumno unAlumno;
    Alumno lista[50];
    int contador=0;

    printf("%p",pArchivo);
    printf("\n");
    if((pArchivo=fopen(ARCHIVO,"a"))==NULL) //a guarda datos, w los sobreescribe
    {
        printf("no se pudo leer");
        exit(1);
    }
    else
    {
        printf("archivo abierto");
    }

    printf("\n");
    strcpy(unAlumno.nombre,"Tomas");
    fflush(stdin);
    unAlumno.legajo=666;
    unAlumno.nota=8;

    //fwrite(&unAlumno, sizeof(unAlumno),1,pArchivo);
    char texto[]="lalalo;555;10\n"; //poner =e3 para referenciar celdas
    int largo= strlen(texto);
    fwrite(texto, sizeof(char),largo,pArchivo);//no tiene & porque ya es una direc por el []
    fclose(pArchivo);

    if((pArchivo=fopen(ARCHIVO,"r"))==NULL)
    {
        printf("no se pudo leer");
        exit(1);
    }
    else
    {
        char renglon[70];

        while(!feof(pArchivo))//verifica si llegue al final del archivo
        {
            int cantidad= fread(renglon,sizeof(char),70,pArchivo);
            printf("\ncantidad %d y texto %s",cantidad,texto);
            //leo el archivo, lo parseo a un array, uso filtro
        }
    }

/*
    if((pArchivo=fopen(ARCHIVO,"r"))==NULL)
    {
        printf("no se pudo leer");
        exit(1);
    }
    else
    {
        fscanf(pArchivo, "%[^,],%[^,],%[^\n]\n", nombre, nota, legajo);
        while(!feof(pArchivo))
        {
            fscanf(pArchivo, "%[^,],%[^,],%[^\n]\n", nombre, nota, legajo);
            unAlumno.nota=atoi(nota);
            unAlumno.legajo=atoi(legajo);
            strcpy(unAlumno.nombre,nombre);

            lista[contador]=unAlumno;
            contador++;

        }
        int i;
        fclose(pArchivo);
        for(i=0; i<70; i++)
        {
               printf("%s - %d - %d\n", lista[i].nombre, lista[i].nota, lista[i].legajo);
        }
    }*/

    return 0;
}
