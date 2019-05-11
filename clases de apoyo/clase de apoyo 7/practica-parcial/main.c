#include <stdio.h>
#include <stdlib.h>
#define T 10

#define TALUMNOS 7
#define TLOCALIDAD 4

#include "alumno.h"
#include "localidad.h"
#include "biblioteca.h"


int main()
{
   /* int opcion;
    char opcionChar[50];
    int exit=1;*/

    eAlumno alumnoListado[T];
    eLocalidad localidadListado[T];

    printf("\n**************************************************************\n");
    printf("                     LISTADO de alumnos\n");
    printf("**************************************************************\n");
    construirArrayAlumno(alumnoListado,T);
    initAlumno(alumnoListado,T);
    mostrarArrayAlumno(alumnoListado,T);

    printf("\n**********************************\n");
    printf("    LISTADO de localidades\n");
    printf("**********************************");
    construirArrayLocalidad(localidadListado,T);
    initLocalidad(localidadListado,T);
    mostrarArrayLocalidad(localidadListado,T);

    //addAlumno(alumnoListado,T);

    //mostrarArrayAlumno(alumnoListado,T);

    printf("\n===========================================");
    mostrarAlumnoConLocalidad(alumnoListado,localidadListado,TALUMNOS,TLOCALIDAD);
    printf("\n===========================================\n");

    printf("\n===========================================\n");
    printf("  ORDENADAS LA LOCALIDADES ALFABETICAMENTE");
    printf("\n===========================================");
    sortLocalidades(localidadListado,T);
    mostrarArrayLocalidad(localidadListado,T);

    printf("\n===========================================\n");
    printf("    ORDENADOS LOS ALUMNOS ALFABETICAMENTE");
    printf("\n===========================================\n");
    sortAlumno(localidadListado,T);
    mostrarArrayAlumno(alumnoListado,TALUMNOS);

    MaxNota(alumnoListado[TALUMNOS],alumnoListado[TALUMNOS],TALUMNOS);




    return 0;
}
