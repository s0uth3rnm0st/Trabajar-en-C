#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "archivos.h"
#include "archivos.c"
#define ARCHIVO ".\\alumnos.csv" //coma separated value (csv)


int main()
{
    FILE *pArchivo;
    Alumno unAlumno;

    printf("%p",pArchivo);
    printf("\n");
    if((pArchivo=fopen(ARCHIVO,"a"))==NULL)
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
    char texto[]="=e3;555;10\n";
    int largo= strlen(texto);
    fwrite(texto, sizeof(char),largo,pArchivo);//no tiene & porque ya es una direc por el []
    fclose(pArchivo);





    int r;
    int a,b,c;

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
            /*r = fscanf(pFile,"%d,%d,%d,%d\n",&a,&b,&c,&d);
            if(r==4){
            printf("Lei %d %d %d %d\n",a,b,c,d);*/
        }
    }


    return 0;
}
