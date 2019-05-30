#include <stdio.h>
#include <stdlib.h>

#include "empleado.h"
#include "biblioteca.h"

eEmployee* nuevoEmpleado()
{
    eEmployee* empleadoRetorno;
    empleadoRetorno = (eEmployee*) calloc(sizeof(eEmployee),1);
    return empleadoRetorno;
}

eEmployee* nuevoEmpleadoParametros(int legajo, char* nombre, float sueldo)
{
    eEmployee* empleadoRetorno;
    empleadoRetorno = nuevoEmpleado();
    if(empleadoRetorno!=NULL)
    {
        setLegajo(empleadoRetorno,legajo); //se usa el setter para no usar "->" aca
        setNombre(empleadoRetorno,nombre);
        setSueldo(empleadoRetorno,sueldo);
    }
    return empleadoRetorno;
}

void mostrarEmpleado(eEmployee* unEmpleado)
{
    int isNull;
    if(unEmpleado!=NULL)
    {
        printf("%d--%s--%.2f\n",unEmpleado->legajo,unEmpleado->nombre,unEmpleado->sueldo);
        isNull=0;
    }
}
/*
void initEmployees (eEmployee* employeeList , int* len)
{
    int i;
    char nombre [10] [20] = {"AAA", "BBB", "CCC", "DDD", "EEE", "FFF", "GGG", "HHH", "III" , "JJJ"};
    int legajo [10] = {10 , 20 ,30,40,50,60,70,80,90,100};
    float sueldo [10] ={100,200,300,400,500,600,700,800,100};
    if (employeeList != NULL )
    {
        eEmployee* auxPointer;
        for ( i = 0 ; i < 10 ; i++ )
        {
            auxPointer = (eEmployee*)realloc(employeeList, (sizeof(eEmployee)) * (*len+1) );
            *len += 1;
            if ( auxPointer != employeeList && auxPointer != NULL)
            {
                employeeList = auxPointer;
            }
            (employeeList+i) ->legajo = legajo[i];
            strcpy((employeeList+i) ->nombre,nombre[i]);
            (employeeList+i) ->sueldo = sueldo[i];
        }

    }

}

void printEmployeeList (eEmployee* employeeList , int* len)
{
    int i;
    for (i = 0 ; i < len ; i++ )
    {
        printOneEmployee(employeeList+i);
    }
}
void printOneEmployee (eEmployee* employeeList)
{
    if (employeeList != NULL)
    {
        //if (employeeList->isEmpty == 0)
        //{
            printf("\nNombre: %s", employeeList->nombre);
            printf("\nlegajo: %d\n", employeeList->legajo);
            printf("\nsueldo: %f\n", employeeList->sueldo);

        //}
    }
}
*/

/****************************************************************************************/
int setLegajo(eEmployee* this, int legajo)
{
    int esCorrecto=0;
    if(this!=NULL && legajo>=1000)
    {
        this->legajo=legajo;
        esCorrecto=1;
    }
}

int getLegajo(eEmployee* pEmpleado)
{
    int retornoLegajo=0;
    if(pEmpleado!=NULL)
    {
        retornoLegajo=pEmpleado->legajo;
    }
    return retornoLegajo;
}

int setNombre(eEmployee* this, char* nombre)
{
    int esCorrecto=0;
    if(this!=NULL)
    {
        strcpy(this->nombre,nombre);
        esCorrecto=1;
    }
}

/*int getLegajo(eEmployee* pEmpleado)
{
    int retornoLegajo=0;
    if(pEmpleado!=NULL)
    {
        retornoLegajo=pEmpleado->legajo;
    }
    return retornoLegajo;
}*/

int setSueldo(eEmployee* this, float sueldo)
{
    int esCorrecto=0;
    if(this!=NULL)
    {
        this->sueldo=sueldo;
        esCorrecto=1;
    }
}

int getSueldo(eEmployee* pEmpleado)
{
    int retornoSueldo=0;
    if(pEmpleado!=NULL)
    {
        retornoSueldo=pEmpleado->sueldo;
    }
    return retornoSueldo;
}
/****************************************************************************************/






void employee_free(eEmployee * this)
{
    // Do any other freeing required here.
    free(this);
}
