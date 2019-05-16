
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int id;
    int nota;
    char nombreAlumno[50];
    int idLocalidad;
    int isEmpty;

}eAlumno;

eAlumno getAlumno();

int dameLugarLibre(eAlumno listing[], int len);

int addAlumno(eAlumno listing[], int len);

void initAlumno(eAlumno listing[],int len);

/****************MOSTRAR ALUMNO CON LOCALIDAD********************/

int existeAlumno(eAlumno listing[],int len);

void printAlumno(eAlumno Alumno);

int mostrarArrayAlumno(eAlumno listing[], int len);

void construirArrayAlumno(eAlumno listado[], int tam);

void sortAlumno(eAlumno listing[], int len);

int MaxNota(eAlumno maximo[],int len);





