#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXALUMNOS 7


#include "alumno.h"
#include "biblioteca.h"
#include "localidad.h"

eAlumno getAlumno()
{
    eAlumno alumnoRetorno;

    while(getString("Ingrese el nombre del alumno: ",alumnoRetorno.nombreAlumno)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getInt("Ingrese el ID de la localidad del alumno :",alumnoRetorno.idLocalidad)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    while(getInt("Ingrese la nota del alumno :",alumnoRetorno.nota)==0)
    {
        printf("ERROR, ingrese un dato valido\n");
    }

    alumnoRetorno.isEmpty=OCUPADO;

    return alumnoRetorno;

}

int dameLugarLibre(eAlumno listing[], int len)
{
    int i;
    int index = -1;

    for(i=0; i<len; i++)
    {
        if(listing[i].isEmpty==LIBRE)
        {
            index = i;
            break;
        }
    }
    return index;
}

int addAlumno(eAlumno listing[], int len)
{
    int indice;
    indice= dameLugarLibre(listing, len);
    if(indice != -1)
    {
        listing[indice]= getAlumno();

        for(indice = 0 ; indice < len ; indice++)
        {
            listing[indice].id =  indice + 1;
            listing[indice].isEmpty=OCUPADO;
        }
        printf("Alumno registrado exitosamente.\n");
    }
 /*   else
    {
        fullArray(listing,len);        DEFINIR ESTA FUNCION!!!
    }*/


    return indice;
}

void initAlumno(eAlumno listing[],int len)
{
    char nombreAlumno[MAXALUMNOS][50]={"Maria","Jose","Pedro","Pedro","Ester","Pia","Lautaro","Jeremias"};


    int i;
    for(i = 0 ; i < len ; i++)
    {
        listing[i].id =  i + 1000;

    }

    int nota[MAXALUMNOS]={10,9,2,1,6,2,3};
    int idLocalidad[MAXALUMNOS]={100,101,101,102,103,102,102};

    for(i=0;i<MAXALUMNOS;i++)
    {
        strcpy(listing[i].nombreAlumno,nombreAlumno[i]);
        listing[i].nota= nota[i];
        listing[i].idLocalidad = idLocalidad[i];
        listing[i].isEmpty = OCUPADO;

    }
}

void mostrarAlumnoConLocalidad(eAlumno alumnoListado[], eLocalidad localidadListado[], int tamAlumno, int tamLocalidad)
{
    int i;
    int j;
    for(i=0;i<tamAlumno;i++)
    {
        if(alumnoListado[i].isEmpty==1) //se usa un for por cada estructura a
        {
            //printf("\n%5s %15d %4d",alumnoListado[i].nombreAlumno,alumnoListado[i].nota, alumnoListado[i].id);
            for(j=0;j<tamLocalidad;j++)
            {
                if(alumnoListado[i].idLocalidad==localidadListado[j].id)
                {
                    printf("\n%7s\tNOTA-%d\t %7d\t %10s",alumnoListado[i].nombreAlumno,alumnoListado[i].nota, alumnoListado[i].id, localidadListado[j].nombreLocalidad);
                    break; //porque es uno a muchos
                }
            }
        }
    }
}


int existeAlumno(eAlumno listing[],int len)
{
    int i;
    int ret=0;
    for(i=0;i<len;i++)
    {
        if(listing[i].isEmpty == OCUPADO)
        {
            ret=1;
            break;
        }
    }
    return ret;
}

void printAlumno(eAlumno Alumno)
{
    printf("NOMBRE-%s \tNOTA-%d  \tID-%d \tLOCALIDAD-%d \n",Alumno.nombreAlumno, Alumno.nota, Alumno.id, Alumno.idLocalidad);
}

int mostrarArrayAlumno(eAlumno listing[], int len)
{
    int flag=0;
    if(existeAlumno(listing,len))
    {
        int i;
        /*printf("\t#***************************************************************#\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#APELLIDO\tNOMBRE\t\tID\tSECTOR\t\tSALARIO #\n");
        printf("\t#\t\t\t\t\t\t\t\t#\n");
        printf("\t#***************************************************************#\n\n");*/
        for(i=0; i<len; i++)
        {
            if(listing[i].isEmpty==OCUPADO)
            {
                printAlumno(listing[i]);
                flag=1;
            }
        }
    }
    else
    {
        if(flag==0)
        {
            printf("Aun NO se cargaron alumnos en el sistema!!\n");
        }
    }

}

void construirArrayAlumno(eAlumno listado[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        listado[i].isEmpty= LIBRE;
        strcpy(listado[i].nombreAlumno, "");
        listado[i].id= 0;
        listado[i].idLocalidad= 0;
        listado[i].nota= 0;
    }
}

void sortAlumno(eAlumno listing[], int len)
{
    eAlumno aux;
    //int auxEntero;
    int i,j;

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(listing[i].nombreAlumno>listing[j].nombreAlumno)
            {
                strcpy(listing[i],aux);
                strcpy(listing[i],listing[j]);
                strcpy(aux,listing[j]);
            }
        }
    }

    for(i=0; i<len-1; i++)
    {
        for(j=i+1; j<len; j++)
        {
            if(strcmpi(listing[i].nombreAlumno,listing[j].nombreAlumno)==1)
            {
                strcpy(listing[i],aux);
                strcpy(listing[i],listing[j]);
                strcpy(aux,listing[j]);
            }
        }
    }
}

int MaxNota(eAlumno maximo[],int len)
{
    int result;
    eAlumno max;
    int i;

    for(i=0;i<len;i++)
    {
        if (maximo[i].nota < max)
        {
            max = maximo[i].nota;
        }
    }
    printf("\nLA NOTA MAS ALTA ES: %d\n",max);
    return 0;
}
