/******************************************************************************************************/
//problema al meter un dato nuevo: mail. Por eso no usaremos vec paralelos para representar entidades

//por eso usamos ---> estructuras

/*
void getString(char mensaje[],char input[]);
int main()
{
    char nombres [CANTIDAD_DATOS][50]={"gustavo", "alfredo", "carlos", "franco"};

    char mail[CANTIDAD_DATOS][50];//ahora meto un dato nuevo y tengo que modificar toda la func

    int edad [CANTIDAD_DATOS]={15, 34, 22, 41};


}*/
/******************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_DATOS 4

typedef struct eAlumno
{
    char nombre[50];
    char apellido[50];
    int edad;
    int nota;
}eAlumno;


int main()
{
    eAlumno unAlumno={"Pepe","Perezoso",22,8};
    printf("Nombre\t\t-\t%s\n",unAlumno.nombre);
    printf("Apellido\t-\t%s\n",unAlumno.apellido);
    printf("Edad\t\t-\t%d\n",unAlumno.edad);
    printf("Nota\t\t-\t%d\n",unAlumno.nota);

    return 0;
}

/*
ejercicio

hacer funcion que permita modificar dato del alumno, como la nota,
buscando al alumno (agregar legajo)

se puede empezar el tp2


*/
